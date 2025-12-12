from parseutility import get_scope_content, sanitize_type
from eventhookbuilder import EventHookBuilder
from additionalEnumTable import AdditionalEnum, AdditionalEnumBuilder

import re
import json
from collections import defaultdict
from enum import Enum
from pathlib import Path

LUA_PRIMITIVES = [
    "boolean", "number", "string", "table", "function", "userdata", "thread", "nil", "any", "integer"
]

LUA_KEYWORDS = [
    "and", "break", "do", "else", "elseif", "end", "false", "for", "function",
    "if", "in", "local", "nil", "not", "or", "repeat", "return", "then",
    "true", "until", "while"
]

def escape_lua_keyword(name: str) -> str:
    if name in LUA_KEYWORDS:
        return f"{name}_"
    return name

HS_LUA_MODULES = ["Hyperspace", "Graphics", "Defines", "RapidXML"]

C_LUA_PRIMITIVES = {
    # bool
    "bool": "boolean",
    
    # int
    "char" : "integer",
    "signed_char" : "integer",
    "unsigned_char" : "uint",
    "int" : "integer",
    "signed_int": "integer",
    "unsigned_int": "uint",
    "short" : "integer",
    "signed_short" : "integer",
    "unsigned_short" : "uint",
    "long" : "integer",
    "signed_long" : "integer",
    "unsigned_long" : "uint",
    "long_long" : "integer",
    "signed_long_long" : "integer",
    "unsigned_long_long" : "uint",
    
    "int8_t" : "integer",
    "size_t": "uint",
    
    # float
    "float": "number",
    "double": "number",
    "long_duouble" : "number",
    
    # string
    "string": "string",
}

C_POINTER_TYPES = ["unique_ptr", "SwigValueWrapper"]
C_CONTAINER_TYPES = ["pair", "vector", "array", "unordered_set", "map", "unordered_map", "unordered_multimap"]
C_CONTAINER_TYPES_TWO = ["pair", "map", "unordered_map", "unordered_multimap"]

# taken from SWIG_LUACODE in LUA_wrap files
ADDITIONAL_ENUMS = [
    AdditionalEnum('Hyperspace.ActivatedPowerRequirements.Type', 'Hyperspace', 'PowerType_'),
    AdditionalEnum('Hyperspace.CrewExtraCondition', 'Hyperspace', 'CrewExtraCondition_'),
    AdditionalEnum('Hyperspace.CrewStat', 'Hyperspace', 'CrewStat_'),
    AdditionalEnum('Hyperspace.StatBoostDefinition.BoostType', 'Hyperspace.StatBoostDefinition', 'BoostType_'),
    AdditionalEnum('Hyperspace.StatBoostDefinition.BoostSource', 'Hyperspace.StatBoostDefinition', 'BoostSource_'),
    AdditionalEnum('Hyperspace.StatBoostDefinition.ShipTarget', 'Hyperspace.StatBoostDefinition', 'ShipTarget_'),
    AdditionalEnum('Hyperspace.StatBoostDefinition.SystemRoomTarget', 'Hyperspace.StatBoostDefinition', 'SystemRoomTarget_'),
    AdditionalEnum('Hyperspace.StatBoostDefinition.CrewTarget', 'Hyperspace.StatBoostDefinition', 'CrewTarget_'),
    AdditionalEnum('Hyperspace.StatBoostDefinition.DroneTarget', 'Hyperspace.StatBoostDefinition', 'DroneTarget_'),
]

MODULE_NAME_PATTERN = re.compile(r'#define\s+SWIG_name\s+"(\w+)"')
CLASS_NAME_PATTERN = re.compile(r'static swig_lua_namespace swig_(\w+?)_(?:Sf_)?SwigStatic = {\s*"(\w+)"\s*,')

class PropertyType(Enum):
    CONSTRUCTOR = 1,
    CONSTANT = 2,
    STATICMETHOD = 3,
    METHOD = 4,
    FIELD = 5
class FuncType(Enum):
    METHOD = 1,
    STATIC = 2,
    CONSTRUCTOR = 3

def match_args(args1: list[str], args2: list[str]) -> bool:
    if len(args1) != len(args2):
        return False
    
    for i in range(len(args1)):
        if sanitize_type(args1[i]) != sanitize_type(args2[i]):
            return False
    
    return True

def make_str_list_unique(strings: list[str]) -> list[str]:
    seen = {}
    result = []
    for s in strings:        
        if s not in seen:
            seen[s] = 0
            result.append(s)
        else:
            seen[s] += 1
            unique_s = f"{s}{seen[s]}"
            result.append(unique_s)
    return result

def to_md_ref(name: str) -> str:
    return name.replace('(', '').replace(')', '').strip().replace(' ', '-')

class FunctionInfo:
    def __init__(self, name: str, returnType: str, args: list[str], originalName: str|None):
        self.name = name
        self.returnType = returnType
        self.args = args
        self.originalName = originalName
        self.overloadNames = []
        self.HSData = []
        self.HSDataIsLoaded = False
        self.wikiData = []
        self.wikiDataIsLoaded = False
    
    def LoadHSData(self, HSData: dict):
        if HSData is not None:
            self.HSData.append(HSData)
        for overloadName in self.overloadNames:
            g_functionDataMap[overloadName].LoadHSData(HSData)
        self.HSDataIsLoaded = True
    
    def LoadWikiData(self, wikiData: dict):
        if wikiData is not None:
            self.wikiData.append(wikiData)
        for overloadName in self.overloadNames:
            g_functionDataMap[overloadName].LoadWikiData(wikiData)
        self.wikiDataIsLoaded = True
        
    def GetRetType(self) -> str:
        assert self.HSDataIsLoaded or self.wikiDataIsLoaded, "FunctionInfo: HSData or wikiData not loaded"
        
        if self.returnType:
            return self.returnType
        
        if self.overloadNames:
            for name in self.overloadNames:
                ret = g_functionDataMap[name].GetRetType()
                if ret:
                    return ret
        
        for datas in self.HSData:
            for data in datas:
                if data["return_type"]:
                    return data["return_type"]
        
        for datas in self.wikiData:
            for data in datas:
                if data["return_type"]:
                    return data["return_type"]
        
        return "unknown"
    
    def _getContainerConstructorArgs(self, args: list[str], name) -> list[dict[str, str]] | None:
        if name == "vector":
            if len(args) == 1:
                if args[0] == "unsigned int":
                    return [{"name": "size", "type": "unsigned int"}]
                else:
                    return [{"name": "other", "type": args[0]}]
            elif len(args) == 2:
                return [{"name": "size", "type": "unsigned int"}, {"name": "value", "type": args[1]}]
        elif name == "map" or name == "unordered_map" or name == "unordered_multimap":
            if len(args) == 1:
                return [{"name": "other", "type": args[0]}]
        elif name == "pair":
            if len(args) == 1:
                return [{"name": "other", "type": args[0]}]
            elif len(args) == 2:
                return [{"name": "first", "type": args[0]}, {"name": "second", "type": args[1]}]
        return None
    
    def _getArgs(self, args: list[str], name) -> list[dict[str, str]] | None:
        for datas in self.HSData:
            for data in datas:
                if match_args(args, [i["type"] for i in data["args"]]):
                    return data["args"]
        
        for datas in self.wikiData:
            for data in datas:
                if match_args(args, [i["type"] for i in data["args"]]):
                    return data["args"]
        
        ret = self._getContainerConstructorArgs(args, name)
        if ret:
            return ret
        
        # print(f"FunctionInfo: {self.name} args not found")
        return None
    
    def GetArgs(self, isStatic: bool) -> list[list[dict[str, str]]]:
        if not self.overloadNames:
            thisArgs = self.args if isStatic else self.args[1:]
            if not thisArgs:
                return [[]]
            ret = self._getArgs(thisArgs, self.originalName)
            if ret is not None:
                return [ret]
            else:
                return [[{"name": "unknown", "type": type} for type in thisArgs]]
        else:
            ret = []
            noNameArgs = []
            for name in self.overloadNames:
                func = g_functionDataMap[name]
                thisArgs = func.args if isStatic else func.args[1:]
                args = self._getArgs(thisArgs, func.originalName)
                if args is not None:
                    ret.append(args)
                else:
                    noNameArgs.append(thisArgs)
            """
            SWIG handles function that has default values by generating a function with the default value and a function without the default value.
            i.g. void original_func(int a, int b = 0) will generate two functions:
                 void swig_func_a(int a, int b) and void swig_func_b(int a)
                 This results in generating duplicate functions. So here we remove swig_func_b
            """
            for args in ret:
                for i in range(len(args) - 1, -1, -1):
                    if "=" not in args[i]["name"]:
                        break
                    noNameArgs = [x for x in noNameArgs if x != [arg["type"] for arg in args[:i]]]
                        
            for noNameArg in noNameArgs:
                ret.append([{"name": "unknown", "type": type} for type in noNameArg])
                    
            return ret
        
    def GetWikiDoc(self, args: list[str]) -> str | None:
        for datas in self.wikiData:
            for data in datas:
                if match_args(args, [i["type"] for i in data["args"]]):
                    return data["documentation"]
        
        return None

class WikiPageItem:
    def __init__(self, name: str, propertyType: PropertyType, className: str, moduleName: str, returnType: str, documentation: str|None = None, params_name: list[str]|None = None, params_type: list[str]|None = None, immutable: bool = False, value: int|None = None):
        self.name = name
        self.propertyType = propertyType
        self.className = className
        self.moduleName = moduleName
        self.returnType = returnType
        self.documentation = documentation
        self.params_name = params_name
        self.params_type = params_type
        self.immutable = immutable
        self.value = value
    
    def __eq__(self, value):
        if not isinstance(value, WikiPageItem):
            return False
        
        if self.propertyType != value.propertyType:
            return False
        
        if self.name != value.name:
            return False
        
        if self.returnType != value.returnType:
            return False
        
        if self.propertyType == PropertyType.CONSTRUCTOR:
            raise NotImplementedError("WikiPageItem: __eq__ not implemented for CONSTRUCTOR")
        elif self.propertyType in [PropertyType.STATICMETHOD, PropertyType.METHOD]:
            return match_args(self.params_type, value.params_type)
        elif self.propertyType in [PropertyType.CONSTANT, PropertyType.FIELD]:
            return True
        
    def __hash__(self):
        if self.propertyType == PropertyType.CONSTRUCTOR:
            raise NotImplementedError("WikiPageItem: __hash__ not implemented for CONSTRUCTOR")
        elif self.propertyType in [PropertyType.STATICMETHOD, PropertyType.METHOD]:
            return hash((self.propertyType, self.name, tuple(self.params_type)))
        elif self.propertyType in [PropertyType.CONSTANT, PropertyType.FIELD]:
            return hash((self.propertyType, self.name))

class WikiPage:
    def __init__(self, name: str, moduleName: str, parentNames, constructors: list[WikiPageItem], constants: list[WikiPageItem], staticMethods: list[WikiPageItem], methods: list[WikiPageItem], fields: list[WikiPageItem]):
        self.name = name
        self.moduleName = moduleName
        self.parentNames = parentNames
        self.subClassNames = set()
        self.constructors = constructors
        self.constants = constants
        self.staticMethods = staticMethods
        self.methods = methods
        self.fields = fields
    
    def getInheritedItems(self, type: PropertyType) -> set[WikiPageItem]:
        ret = set()
        for parentName in self.parentNames:
            if (parentPage := g_wiki_pages.get(parentName, None)) is None:
                continue
            
            if type == PropertyType.CONSTRUCTOR:
                raise NotImplementedError("WikiPage: getInheritedItems not implemented for CONSTRUCTOR")
            elif type == PropertyType.CONSTANT:
                ret |= set(parentPage.constants)
            elif type == PropertyType.STATICMETHOD:
                ret |= set(parentPage.staticMethods)
            elif type == PropertyType.METHOD:
                ret |= set(parentPage.methods)
            elif type == PropertyType.FIELD:
                ret |= set(parentPage.fields)
            
            ret |= parentPage.getInheritedItems(type)
        
        if type == PropertyType.CONSTRUCTOR:
            raise NotImplementedError("WikiPage: getInheritedItems not implemented for CONSTRUCTOR")
        elif type == PropertyType.CONSTANT:
            return ret - set(self.constants)
        elif type == PropertyType.STATICMETHOD:
            return ret - set(self.staticMethods)
        elif type == PropertyType.METHOD:
            return ret - set(self.methods)
        elif type == PropertyType.FIELD:
            return ret - set(self.fields)
    
    def outputConstructors(self) -> str:
        if not self.constructors:
            return ""
        
        ret = ""
        for constructor in sorted(self.constructors, key=lambda x: x.name):
            ret += f"___\n### {constructor.name} ()\n{{: #{constructor.name} .lua-content-item aria-label='Constructors' }}\n"
            params = []
            for i in range(len(constructor.params_name)):
                params.append(f"{wrap_type_for_md(constructor.className, constructor.params_type[i])} {constructor.params_name[i]}")
            params_str = ", ".join(params)
            ret += f"#### {wrap_type_for_md(constructor.className, constructor.returnType)} {constructor.name} ({params_str})\n{{: aria-label='Constructors' }}\n"
            if constructor.documentation:
                ret += f"{constructor.documentation}\n"
            ret += "\n"
        ret += "___"
        if len(ret) > 4:
            ret = ret[4:] # remove leading ___
        return ret
    
    def outputConstants(self) -> str:
        ret = ""
        
        # Make inherited constants table
        inherited_constants = self.getInheritedItems(PropertyType.CONSTANT)
        if inherited_constants:
            inherited_map = defaultdict(list)
            for constant in inherited_constants:
                inherited_map[constant.className].append(constant)
            ret += "___\n<details markdown=\"1\"><summary id=\"InheritedConstants\" class=\"lua-content-item\" markdown=\"span\">Inherited Constants</summary>\n\n"
            for parentClass in sorted(inherited_map.keys()):
                ret += f"\n#### From {wrap_type_for_md(self.moduleName, get_lua_type(parentClass))}\n\n| Constant | Value |\n| --- | --- |\n"
                for constant in sorted(inherited_map[parentClass], key=lambda x: x.name):
                    ret += f"| .[{constant.name}]({md_ref_path(self.moduleName, constant.moduleName, constant.className, f"#{to_md_ref(constant.name)}")}) | `{constant.value}` |\n"
            ret += "\n</details>\n"
        
        if not self.constants:
            return ret
        
        for constant in sorted(self.constants, key=lambda x: x.name):
            ret += f"___\n### {constant.className}.{constant.name}\n{{: #{constant.name} .lua-content-item aria-label='Constants' }}\n"
            ret += f"#### {wrap_type_for_md(constant.className, get_lua_type(constant.returnType))} .{constant.name}\n{{: aria-label='Constants' }}\n"
            if constant.value is not None:
                ret += f"Equivalent to `{constant.value}`.\n"
            if constant.documentation:
                ret += f"{constant.documentation}\n"
            ret += "\n"
        
        ret += "___"
        if len(ret) > 4:
            ret = ret[4:] # remove leading ___
        return ret
    
    def outputStaticMethods(self) -> str:
        ret = ""
        
        # Make inherited static methods table
        inherited_methods = self.getInheritedItems(PropertyType.STATICMETHOD)
        if inherited_methods:
            inherited_map = defaultdict(list)
            for method in inherited_methods:
                inherited_map[method.className].append(method)
            ret += "___\n<details markdown=\"1\"><summary id=\"InheritedStaticMethods\" class=\"lua-content-item\" markdown=\"span\">Inherited Static Methods</summary>\n\n"
            for parentClass in sorted(inherited_map.keys()):
                ret += f"\n#### From {wrap_type_for_md(self.moduleName, get_lua_type(parentClass))}\n\n| Return Type | Method |\n| --- | --- |\n"
                for method in sorted(inherited_map[parentClass], key=lambda x: x.name):
                    params = []
                    for i in range(len(method.params_name)):
                        params.append(f"{wrap_type_for_md(method.className, method.params_type[i])} {method.params_name[i]}")
                    params_str = ", ".join(params)
                    ret += f"| {wrap_type_for_md(method.className, method.returnType)} | .[{method.name}]({md_ref_path(self.moduleName, method.moduleName, method.className, f"#{to_md_ref(method.name)}")}) ({params_str}) |\n"
            ret += "\n</details>\n"
        
        if not self.staticMethods:
            return ret
        
        for method in sorted(self.staticMethods, key=lambda x: x.name):
            ret += f"___\n### {method.name} ()\n{{: #{method.name} .lua-content-item aria-label='StaticMethods' }}\n"
            params = []
            for i in range(len(method.params_name)):
                params.append(f"{wrap_type_for_md(method.className, method.params_type[i])} {method.params_name[i]}")
            params_str = ", ".join(params)
            ret += f"#### {wrap_type_for_md(method.className, method.returnType)} .{method.name} ({params_str})\n{{: aria-label='StaticMethods' }}\n"
            if method.documentation:
                ret += f"{method.documentation}\n"
            ret += "\n"
        ret += "___"
        if len(ret) > 4:
            ret = ret[4:] # remove leading ___
        return ret
    
    def outputMethods(self) -> str:
        ret = ""
        
        # Make inherited methods table
        inherited_methods = self.getInheritedItems(PropertyType.METHOD)
        if inherited_methods:
            inherited_map = defaultdict(list)
            for method in inherited_methods:
                inherited_map[method.className].append(method)
            ret += "___\n<details markdown=\"1\"><summary id=\"InheritedMethods\" class=\"lua-content-item\" markdown=\"span\">Inherited Methods</summary>\n\n"
            for parentClass in sorted(inherited_map.keys()):
                ret += f"\n#### From {wrap_type_for_md(self.moduleName, get_lua_type(parentClass))}\n\n| Return Type | Method |\n| --- | --- |\n"
                for method in sorted(inherited_map[parentClass], key=lambda x: x.name):
                    params = []
                    for i in range(len(method.params_name)):
                        params.append(f"{wrap_type_for_md(method.className, method.params_type[i])} {method.params_name[i]}")
                    params_str = ", ".join(params)
                    ret += f"| {wrap_type_for_md(method.className, method.returnType)} | :[{method.name}]({md_ref_path(self.moduleName, method.moduleName, method.className, f"#{to_md_ref(method.name)}")}) ({params_str}) |\n"
            ret += "\n</details>\n"
        
        if not self.methods:
            return ret
        
        for method in sorted(self.methods, key=lambda x: x.name):
            ret += f"___\n### {method.name} ()\n{{: #{method.name} .lua-content-item aria-label='Methods' }}\n"
            params = []
            for i in range(len(method.params_name)):
                params.append(f"{wrap_type_for_md(method.className, method.params_type[i])} {method.params_name[i]}")
            params_str = ", ".join(params)
            ret += f"#### {wrap_type_for_md(method.className, method.returnType)} :{method.name} ({params_str})\n{{: aria-label='Methods' }}\n"
            if method.documentation:
                ret += f"{method.documentation}\n"
            ret += "\n"
        ret += "___"
        if len(ret) > 4:
            ret = ret[4:] # remove leading ___
        return ret
    
    def outputFields(self) -> str:
        ret = ""
        
        # Make inherited fields table
        inherited_fields = self.getInheritedItems(PropertyType.FIELD)
        if inherited_fields:
            inherited_map = defaultdict(list)
            for field in inherited_fields:
                inherited_map[field.className].append(field)
            ret += "___\n<details markdown=\"1\"><summary id=\"InheritedFields\" class=\"lua-content-item\" markdown=\"span\">Inherited Fields</summary>\n\n"
            for parentClass in sorted(inherited_map.keys()):
                ret += f"\n#### From {wrap_type_for_md(self.moduleName, get_lua_type(parentClass))}\n\n| Type | Field |\n| --- | --- |\n"
                for field in sorted(inherited_map[parentClass], key=lambda x: x.name):
                    ret += f"| {wrap_type_for_md(field.className, field.returnType)} | .[{field.name}]({md_ref_path(self.moduleName, field.moduleName, field.className, f"#{to_md_ref(field.name)}")}) |\n"
            ret += "\n</details>\n"
        
        if not self.fields:
            return ret
        
        for field in sorted(self.fields, key=lambda x: x.name):
            ret += f"___\n### {field.name}"
            if field.immutable:
                ret += " (Read-only)"
            ret += f"\n{{: #{field.name} .lua-content-item aria-label='Fields' }}\n"
            ret += f"#### {wrap_type_for_md(field.className, get_lua_type(field.returnType))} .{field.name}\n{{: aria-label='Fields' }}\n"
            if field.documentation:
                ret += f"{field.documentation}\n"
            ret += "\n"
        ret += "___"
        if len(ret) > 4:
            ret = ret[4:] # remove leading ___
        return ret
    
    def getAncestorNames(self) -> list[str]:
        ancestors_list = []
        if not self.parentNames:
            return []
        
        parents = []
        ancestors_list_new = []
        for parentName in sorted(self.parentNames):
            if (parent := g_wiki_pages.get(parentName, None)) is None:
                continue
            
            parents.append(wrap_type_for_md(self.name, parentName))
            ancestors_list_new += parent.getAncestorNames() 
        ancestors_list.append(", ".join(parents))
        if ancestors_list_new:
            ancestors_list.append(", ".join(ancestors_list_new))
        return ancestors_list
    
    def outputRelations(self) -> str:
        ret = ""
        if self.parentNames:
            for parentName in sorted(self.parentNames):
                ret += f"\nExtends: {wrap_type_for_md(self.name, parentName)}"
                if (parent := g_wiki_pages.get(parentName, None)) is None:
                    continue
                
                ancestors_list = parent.getAncestorNames()
                if ancestors_list:
                    ret += f" <- {' <- '.join(ancestors_list)}"
        
        if self.subClassNames:
            ret += "\n\nSubclasses: " + ", ".join([wrap_type_for_md(self.name, subClassName) for subClassName in sorted(self.subClassNames)])
        
        return ret
    
    def Output(self, basePath: str):
        output_path = Path(basePath) / self.moduleName / f"{self.name}.md"
        replace_map = {
            "NAME": self.name,
            "RELATIONS": self.outputRelations() or None,
            "CONSTRUCTORS": self.outputConstructors() or None,
            "CONSTANTS": self.outputConstants() or None,
            "STATIC_METHODS": self.outputStaticMethods() or None,
            "METHODS": self.outputMethods() or None,
            "FIELDS": self.outputFields() or None
        }
        create_wiki_md(replace_map, output_path)
    
g_functionDataMap: dict[str, FunctionInfo] = {}

g_wiki_pages: dict[str, WikiPage] = {}

g_enum_parse_requests = set()

TEMPLATE_PATTERN = re.compile(r'([\w:]+)<(.+)>')
ARRAY_PATTERN = re.compile(r'(.+)\[(\d*)\]')

def get_lua_type(type: str, isClassDef=False, isFuncRet=False) -> str:
    # String = string|number; this union type is needed for the implicit conversion between string and number in lua
    assert len(g_classMap) > 0, "get_lua_type: g_classMap is empty"
    type = type.strip()
    if type in HS_LUA_MODULES:
        return type

    type = type.replace("unsigned ", "u").replace("signed ", "").replace(" ", "").replace("std::", "").replace("&", "")
    if type == "char*":
        return "string"
    
    type = type.replace("*", "")
    
    # Handle arrays like int[10]
    array_match = re.match(ARRAY_PATTERN, type)
    if array_match:
        inner_type = array_match.group(1)
        size = array_match.group(2)
        # Process the inner type recursively
        processed_inner_type = get_lua_type(inner_type)
        return f"{processed_inner_type}[]"

    # Handle template types like vector<int>
    template_match = re.match(TEMPLATE_PATTERN, type)
    if template_match:
        outer_type = template_match.group(1)
        inner_type = template_match.group(2)
        if outer_type in C_POINTER_TYPES:
            return get_lua_type(inner_type)
        
        # Process the inner type recursively
        template_rematch = re.match(TEMPLATE_PATTERN, inner_type)
        if template_rematch:
            processed_inner_type = get_lua_type(inner_type)
        else:
            types = inner_type.split(",")
            if outer_type in C_CONTAINER_TYPES_TWO:
                types = types[:2] # Only take the first two types for map types because the latter ones are a hash function or equal function, which we don't need
            processed_inner_type = ", ".join([get_lua_type(inner) for inner in types])
        # Process the outer type and combine
        return f"{get_lua_type(outer_type)}<{processed_inner_type}>"
    
    ret = C_LUA_PRIMITIVES.get(type)
    if ret and not isClassDef:
        return ret
    
    ret = g_classMap.get(type)
    if ret:
        return ret
    
    nmspaces = type.split("::")
    bottom = g_classMap.get(nmspaces[-1])
    if bottom:
        return bottom
    
    top = g_classMap.get(nmspaces[0])
    if top:
        return f"{top}." + ".".join(nmspaces[1:])
    
    return type.replace("::", ".")

def md_ref_path(className: str, parent: str, child: str, tail: str="") -> str:
    if parent == className:
        return f"{child.replace('[]', '')}{tail}"
    else:
        return f"../{parent}/{child.replace('[]', '')}{tail}"

def wrap_type_for_md(className: str, typeName: str, tail: str="") -> str:
    template_match = re.match(TEMPLATE_PATTERN, typeName)
    if template_match:
        outer_type = template_match.group(1)
        inner_type = template_match.group(2)
        processed_inner_type = ", ".join([wrap_type_for_md(className, inner.strip()) for inner in inner_type.split(",")])
        return f"{wrap_type_for_md(className, outer_type)}\\<{processed_inner_type}\\>"
        
    levels = typeName.split('.')
    if len(levels) == 1:
        return typeName
    
    parent = levels[0]
    child = levels[1]
    if len(levels) > 2:
        child = ".".join(levels[1:])
    return f"[{child}]({md_ref_path(className, parent, child, tail)})"
    

def format_container_type(className: str) -> str|None:
    if not any([className.startswith(f"{x}_") for x in C_CONTAINER_TYPES]):
        return None
    
    func = g_functionDataMap.get(f"_wrap_{className}_size") or g_functionDataMap.get(f"_wrap_{className}_first_get")
    assert func, f"format_container_type: _wrap_{className} not found"
    
    return get_lua_type(func.args[0])

def create_wiki_md(replace_map: dict[str, str], output_path: str):
    def optional_replace(match: re.Match) -> str:
        key = re.search(r"\{\{(.*?)\}\}", match.group(1)).group(1)
        if key in replace_map and replace_map[key] is not None:
            return match.group(1).replace(f"{{{{{key}}}}}", replace_map[key])
        else:
            return ""
    
    with open("parseSource/template.md", 'r', encoding='utf8') as f:
        template = f.read()
    
    template = re.sub(r"\{\?(.*?)\?\}", optional_replace, template, flags=re.DOTALL)
    for key, value in replace_map.items():
        if value is None:
            continue
        
        template = template.replace(f"{{{{{key}}}}}", value)
    
    with open(output_path, 'w', encoding='utf8') as f:
        f.write(template)

def parse_LUA_wrap(eventHookBuilder: EventHookBuilder, additionalEnumBuilder: AdditionalEnumBuilder, enumMap: dict[str, int], lua_wrap_path: str, HSData: dict, wikiData_path: str = None) -> str:    
    def load_HS_and_Wiki_data_to_func(content: str, HSInfo: dict, wikiInfo: dict):
        for m in re.finditer(r'{\s*"(\w+)"\s*,\s*(\w+)\s*}', content):
            methodName = m.group(1)
            func = g_functionDataMap.get(m.group(2), None)
            if func:
                HSData = None
                if HSInfo:
                    methodName_HS = func.originalName or methodName
                    HSData = [x for x in HSInfo if x["name"] == methodName_HS]
                func.LoadHSData(HSData)
                
                wikiData = None
                if wikiInfo:
                    wikiData = [x for x in wikiInfo["methods"] if x["name"] == methodName]
                func.LoadWikiData(wikiData)
    
    def parse_constructor(moduleName: str, className: str, fixedRet=None) -> list[WikiPageItem]:
        constructor = g_functionDataMap.get(f"_wrap_new_{className}", None)
        if constructor is None:
            return []
        
        ret = []
        for overload in constructor.GetArgs(True):
            documentation = constructor.GetWikiDoc([data["type"] for data in overload])
            
            params_type = [get_lua_type(data["type"]) for data in overload]
            params_name = [data["name"] for data in overload]
                        
            return_type =  fixedRet if fixedRet else get_lua_type(className)
            
            ret.append(WikiPageItem(
                name=className,
                propertyType=PropertyType.CONSTRUCTOR,
                className=className,
                moduleName=moduleName,
                returnType=return_type,
                documentation=documentation,
                params_name=params_name,
                params_type=params_type
            ))
        return ret

        
    def parse_methods(className: str, HSInfo: dict, wikiInfo: dict, content: str, funcType: FuncType) -> list[WikiPageItem]:
        assert funcType == FuncType.METHOD or funcType == FuncType.STATIC, "parse_methods: funcType must be METHOD or STATIC"
        
        ret = []
        for m in re.finditer(r'{\s*"(\w+)"\s*,\s*(\w+)\s*}', content):
            methodName = m.group(1)
            func = g_functionDataMap[m.group(2)]
                        
            for overload in func.GetArgs(funcType == FuncType.STATIC):
                documentation = func.GetWikiDoc([data["type"] for data in overload])
                
                params_type = [get_lua_type(data["type"]) for data in overload]
                params_name = [data["name"] for data in overload]
                
                return_type = get_lua_type(func.GetRetType())
                
                ret.append(WikiPageItem(
                    name=methodName,
                    propertyType=PropertyType.STATICMETHOD if funcType == FuncType.STATIC else PropertyType.METHOD,
                    className=className,
                    moduleName=moduleName,
                    returnType=return_type,
                    documentation=documentation,
                    params_name=params_name,
                    params_type=params_type
                ))
        return ret
    
    def parse_fields(className: str, wikiInfo: dict, content: str) -> list[WikiPageItem]:
        ret = []
        for m in re.finditer(r'{\s*"(\w+)"\s*,\s*(\w+)\s*,\s*(\w+)\s*}', content):
            fieldName = m.group(1)
            typeName = ""
            documentation = ""
            
            # Check wiki data
            if wikiInfo:
                matchedList = [x for x in wikiInfo["fields"] if x["name"] == fieldName]
                if matchedList:
                    typeName = matchedList[0]["type"]
                    documentation = matchedList[0]["documentation"]
            
            getter = g_functionDataMap.get(m.group(2), None)
            if getter:
                if getter.returnType:
                    typeName = getter.returnType
            
            immutable = m.group(3) == "SWIG_Lua_set_immutable"
            
            ret.append(WikiPageItem(
                name=fieldName,
                propertyType=PropertyType.FIELD,
                className=className,
                moduleName=moduleName,
                returnType=get_lua_type(typeName),
                documentation=documentation,
                immutable=immutable
            ))
        
        return ret
    
    def parse_constants(className: str, wikiInfo: dict, content: str) -> list[WikiPageItem]:
        ret = []
        for m in re.finditer(r'{\s*SWIG_LUA_CONSTTAB_INT\(\s*"(\w+)"\s*,\s*([\w:]+)\s*\)\s*}', content):
            constantName = m.group(1)
            typeName = m.group(2)
            g_enum_parse_requests.add(typeName)
            
            documentation = ""
            
            # Check wiki data
            if wikiInfo:
                matchedList = [x for x in wikiInfo["constants"] if x["name"] == constantName]
                if matchedList:
                    documentation = matchedList[0]["documentation"]
                        
            value = enumMap.get(typeName, None)
            if value is None:
                print(f"parse_constants: {typeName} not found in enumMap")
                continue
            
            if get_lua_type(className, True) == "Defines.InternalEvents":
                documentation = eventHookBuilder.process("InternalEvents", constantName, value)
            elif get_lua_type(className, True) == "Defines.RenderEvents":
                documentation = eventHookBuilder.process("RenderEvents", constantName, value)
                        
            ret.append(WikiPageItem(
                name=constantName,
                propertyType=PropertyType.CONSTANT,
                className=className,
                moduleName=moduleName,
                returnType="integer",
                documentation=documentation,
                value=value
            ))

            additionalEnumBuilder.process(get_lua_type(className), constantName, value)
        
        return ret
    
    result = ""
    
    wikiData = {}
    if wikiData_path:
        with open(wikiData_path, 'r', encoding='utf8') as f:
            wikiData = json.load(f)
    
    with open(lua_wrap_path, 'r', encoding='utf8') as f:
        lua_code = f.read()

    moduleName = re.search(MODULE_NAME_PATTERN, lua_code).group(1)
    print(moduleName)

    RET_TYPE_PATTERN = re.compile(r'  (.+?) (\*?)result(?: = 0 )?;')
    ARG_PATTERN = re.compile(r'  (.+?) (\*?)arg\d+ (?:= (?:\(.+?\) )?0 )?;')
    FUNCTION_OVERLOAD_NAME_PATTERN = re.compile(r'(\w+)__SWIG_\d+')
    
    overloadNamesBuffer = defaultdict(list)
    
    globalHSInfo = HSData.get(moduleName, None)
    globalWikiInfo = wikiData.get(moduleName, None)
    
    CLASSNAMES = list(filter(lambda name: name[0] not in LUA_PRIMITIVES, CLASS_NAME_PATTERN.findall(lua_code)))
    
    # Parse functions
    for m in re.finditer(r'static int (\w+?)\(lua_State\* L\) \{', lua_code, re.DOTALL):
        functionName = m.group(1)
        content = get_scope_content(lua_code[m.end():])
        
        originalName = None
        originalName_match = re.search(r'SWIG_check_num_args\("(.+)",.*,.*\)', content)
        if originalName_match:
            originalName = originalName_match.group(1).split("::")[-1]
        
        return_type = ""
        return_type_match = re.search(RET_TYPE_PATTERN, content)
        if return_type_match:
            return_type = return_type_match.group(1)
            if return_type == "char" and return_type_match.group(2) == "*":
                return_type = "string"
        args = []
        for arg_match in re.finditer(ARG_PATTERN, content):
            arg_type = arg_match.group(1)
            if arg_type == "char" and arg_match.group(2) == "*":
                arg_type = "string"
            args.append(arg_type)
        
        overload_match = re.search(FUNCTION_OVERLOAD_NAME_PATTERN, functionName)
        if overload_match:
            overloadNamesBuffer[overload_match.group(1)].append(functionName)
        
        g_functionDataMap[functionName] = FunctionInfo(functionName, return_type, args, originalName)
    
    for name, overloads in overloadNamesBuffer.items():
        g_functionDataMap[name].overloadNames = overloads
    
    # Load HSData and wikiData for functions
    globalMethods_m = re.search(r'static\s+swig_lua_method\s+swig_SwigModule_methods\[\]\s*=\s*\{(.*?)\};', lua_code, re.DOTALL)
    if globalMethods_m:
        load_HS_and_Wiki_data_to_func(globalMethods_m.group(1), globalHSInfo, globalWikiInfo)
    
    for className, _ in CLASSNAMES:
        constructor = g_functionDataMap.get(f"_wrap_new_{className}", None)
        if constructor:
            HSInfo = HSData.get(className, None)
            if HSInfo:
                constructor.LoadHSData([x for x in HSInfo if x["name"] == className])
            wikiInfo = wikiData.get(className, None)
            if wikiInfo:
                constructor.LoadWikiData([x for x in wikiInfo["methods"] if x["name"] == className])
        
        methods_m = re.search(rf'static\s+swig_lua_method\s+swig_{className}_methods\[\]\s*=\s*\{{(.*?)\}};', lua_code, re.DOTALL)
        if methods_m:
            load_HS_and_Wiki_data_to_func(methods_m.group(1), HSData.get(className, None), wikiData.get(className, None))
        
        staticMethods_m = re.search(rf'static\s+swig_lua_method\s+swig_{className}_Sf_SwigStatic_methods\[\]\s*=\s*\{{(.*?)\}};', lua_code, re.DOTALL)
        if staticMethods_m:
            load_HS_and_Wiki_data_to_func(staticMethods_m.group(1), HSData.get(className, None), wikiData.get(className, None))
    
    # Parse "table" member injection
    additionalTableMembersMap = defaultdict(list)
    for match in re.finditer(r'script_add_native_member\(L, "(\w+)", "(\w+)", (\w+)\);', lua_code):
        className = match.group(1)
        memberName = match.group(2)
        funcName = match.group(3)
        assert funcName == "hs_Userdata_table_get"
        additionalTableMembersMap[className].append(memberName)
    
    # Parse variables attributed just under the module
    # globalFields = re.search(r'static\s+swig_lua_attribute\s+swig_SwigModule_attributes\[\]\s*=\s*\{(.*?)\};', lua_code, re.DOTALL)
    # if globalFields:
    #     part_module_fields, _ = parse_fields(moduleName, globalWikiInfo, globalFields.group(1))
    
    # globalStaticFields = re.search(r'static\s+swig_lua_attribute\s+swig_SwigModule_Sf_SwigStatic_attributes\[\]\s*=\s*\{(.*?)\};', lua_code, re.DOTALL)
    # if globalStaticFields:
    #     part_module_fields += parse_fields(moduleName, globalWikiInfo, globalStaticFields.group(1))[0]
    
    # appended_fields = g_fieldsAppendMap.get(moduleName, None)
    # if appended_fields:
    #     for content in appended_fields:
    #         part_module_fields += f"---@field {content}\n"
    
    # globalMethods = re.search(r'static\s+swig_lua_method\s+swig_SwigModule_methods\[\]\s*=\s*\{(.*?)\};', lua_code, re.DOTALL)
    # if globalMethods:
    #     part_module_methods, _ = parse_methods(moduleName, globalHSInfo, globalWikiInfo, globalMethods.group(1), FuncType.STATIC)
    
    # globalConstants = re.search(r'static\s+swig_lua_const_info\s+swig_SwigModule_constants\[\]\s*=\s*\{(.*?)\};', lua_code, re.DOTALL)
    # if globalConstants:
    #     part_module_consts, _ = parse_constants(moduleName, globalWikiInfo, globalConstants.group(1))
    
    # additionalTableMembers = additionalTableMembersMap.get(moduleName, None)
    # if additionalTableMembers:
    #     for memberName in additionalTableMembers:
    #         part_module_consts += f"    {memberName} = {{}},\n"
    
    # result += f"---@class {moduleName}\n{part_module_fields}{moduleName} = {{" + (f"\n{part_module_consts}" if part_module_consts else "") + f"}}\n\n{part_module_methods}"
    
    # Parse classes
    for className, _ in CLASSNAMES:
        full_name = get_lua_type(className, True)
        container_type = format_container_type(className)
        if container_type:
            # part_constructor, _ = parse_constructor(moduleName, className, container_type)
            # result += part_constructor
            continue
        
        HSInfo = HSData.get(className, None)
        wikiInfo = wikiData.get(className, None)
        
        parents = []
        parents_m = re.search(rf'static\s*const\s*char\s+\*swig_{className}_base_names\[\]\s*=\s*\{{(.*?)\}};', lua_code, re.DOTALL)
        if parents_m:
            for parent in re.finditer(r'"(\w+)\s*\*?\s*"\s*,', parents_m.group(1)):
                parents.append(get_lua_type(parent.group(1)))
        
        fields = []
        count_fields = 0     
        fields_m = re.search(rf'static\s+swig_lua_attribute\s+swig_{className}_attributes\[\]\s*=\s*\{{(.*?)\}};', lua_code, re.DOTALL)
        if fields_m:
            fields += parse_fields(className, wikiInfo, fields_m.group(1))
        
        static_fields_m = re.search(rf'static\s+swig_lua_attribute\s+swig_{className}_Sf_SwigStatic_attributes\[\]\s*=\s*\{{(.*?)\}};', lua_code, re.DOTALL)
        if static_fields_m:
            fields += parse_fields(className, wikiInfo, static_fields_m.group(1))
        
        appended_fields = g_fieldsAppendMap.get(full_name, None)
        if appended_fields:
            for content in appended_fields:
                assert len(parts := content.split( )) == 2
                name = parts[0]
                type = parts[1]
                fields.append(WikiPageItem(
                    name=name,
                    propertyType=PropertyType.FIELD,
                    className=className,
                    moduleName=moduleName,
                    returnType=get_lua_type(type)
                ))
        
        constructors = parse_constructor(moduleName, className)

        methods = []
        methods_m = re.search(rf'static\s+swig_lua_method\s+swig_{className}_methods\[\]\s*=\s*\{{(.*?)\}};', lua_code, re.DOTALL)
        if methods_m:
            methods += parse_methods(className, HSInfo, wikiInfo, methods_m.group(1), FuncType.METHOD)
        
        static_methods = []
        staticMethods_m = re.search(rf'static\s+swig_lua_method\s+swig_{className}_Sf_SwigStatic_methods\[\]\s*=\s*\{{(.*?)\}};', lua_code, re.DOTALL)
        if staticMethods_m:
            static_methods += parse_methods(className, HSInfo, wikiInfo, staticMethods_m.group(1), FuncType.STATIC)
        
        constants = []
        constants_m = re.search(rf'static\s+swig_lua_const_info\s+swig_{className}_Sf_SwigStatic_constants\[\]\s*=\s*\{{(.*?)\}};', lua_code, re.DOTALL)
        if constants_m:
            constants += parse_constants(className, wikiInfo, constants_m.group(1))
        
        additionalTableMembers = additionalTableMembersMap.get(className, None)
        if additionalTableMembers:
            for memberName in additionalTableMembers:
                fields.append(WikiPageItem(
                    name=memberName,
                    propertyType=PropertyType.FIELD,
                    returnType="table",
                    className=className,
                    moduleName=moduleName
                ))
        
        should_be_enum = len(constructors) < 2 and len(methods) + len(static_methods) == 0 and len(fields) == 0 and len(constants) > 0
        if should_be_enum:
            # result += f"---@enum {full_name}\n{full_name} = {{\n{part_consts}}}\n\n"
            pass
        else:
            # result += f"---@class {full_name}" + ((": " + ", ".join(parents)) if parents else "") + f"\n{part_fields}{full_name} = {{" + (f"\n{part_consts}" if part_consts else "") + f"}}\n\n{part_constructor}{part_methods}"
            g_wiki_pages[full_name] = WikiPage(
                name=className,
                moduleName=moduleName,
                parentNames=parents,
                constructors=constructors,
                constants=constants,
                staticMethods=static_methods,
                methods=methods,
                fields=fields
            )
            # replace_map = {}
            # replace_map["NAME"] = className
            # if parents:
            #     replace_map["PARENTS"] = ", ".join([wrap_type_for_md(className, parent) for parent in parents])
            # if count_constructor > 0:
            #     replace_map["CONSTRUCTORS"] = part_constructor
            # if count_consts > 0:
            #     replace_map["CONSTANTS"] = part_consts
            # if count_static_methods > 0:
            #     replace_map["STATIC_METHODS"] = part_static_methods
            # if count_methods > 0:
            #     replace_map["METHODS"] = part_methods
            # if count_fields > 0:
            #     replace_map["FIELDS"] = part_fields
            
            # output_path = f"lua/{moduleName}/{className}.md"
            # create_wiki_md(replace_map, output_path)
    
    # Build subclass relationships
    for full_name, wiki_page in g_wiki_pages.items():
        if wiki_page.parentNames is None:
            continue
        
        for parentName in wiki_page.parentNames:
            if (parent := g_wiki_pages.get(parentName, None)) is None:
                continue
            parent.subClassNames.add(full_name)
            
    for wiki_page in g_wiki_pages.values():
        wiki_page.Output("lua")
    return result
    
def build_class_map(result: dict, path: str):    
    with open(path, 'r', encoding='utf8') as f:
        lua_code = f.read()
    
    moduleName = re.search(MODULE_NAME_PATTERN, lua_code).group(1)
    for m in re.finditer(CLASS_NAME_PATTERN, lua_code):
        className = m.group(1)
        recognizedName = m.group(2)
        assert className == recognizedName, f"Class name mismatch: {className} != {recognizedName}"
        
        result[className] = f"{moduleName}.{className}"
    
    for additionalEnum in ADDITIONAL_ENUMS:
        result[additionalEnum.tableName.split(".")[-1]] = additionalEnum.tableName

DATA_LIST = [
    {
        "name": "parseSource/Hyperspace",
        "luaWrap": "parseSource/src/lua_wrap/hyperspaceLUA_wrap.cxx",
        "wikiData": "parseSource/out/wiki/wiki_Hyperspace_parse_output.json",
    },
    {
        "name": "Graphics",
        "luaWrap": "parseSource/src/lua_wrap/graphicsLUA_wrap.cxx",
        "wikiData": "parseSource/out/wiki/wiki_Graphics_parse_output.json",
    },
    {
        "name": "Defines",
        "luaWrap": "parseSource/src/lua_wrap/definesLUA_wrap.cxx",
        "wikiData": "parseSource/out/wiki/wiki_Defines_parse_output.json",
    },
    # {
    #     "name": "RapidXML",
    #     "luaWrap": "parseSource/src/lua_wrap/rapidxmlLUA_wrap.cxx",
    #     "wikiData": None,
    # },
]

HSDATA_PATH = "parseSource/out/hs_base/hs_directory_parse_output.json"

OUTPUT_PATH = "../library/generated/hs.lua"

ENUM_PARSE_REQUESTS_OUTPUT_PATH = "parseSource/out/enum_parse_requests.json"
ENUM_DATA_PATH = "parseSource/out/hs_base/hs_enums.json"

EVENTHOOKS_DATA_PATH = "parseSource/out/wiki/wiki_EventHooks_parse_output.json"
CHAIN_INTERNAL_EVENT_LIST_PATH = "parseSource/out/hs_base/hs_chain_internalEvents_list.json"
# EVENTHOOKS_OUTPUT_PATH = "../library/generated/eventhooks.lua"

FIELDS_APPEND_LIST_PATH = "parseSource/fields_append_list.json"

g_classMap = {}
g_fieldsAppendMap = {}

def main():
    global g_classMap, g_fieldsAppendMap
    for data in DATA_LIST:
        build_class_map(g_classMap, data["luaWrap"])
    
    with open(FIELDS_APPEND_LIST_PATH, 'r', encoding='utf8') as f:
        g_fieldsAppendMap = json.load(f)
    
    enumMap = {}
    with open(ENUM_DATA_PATH, 'r', encoding='utf8') as f:
        enumMap = json.load(f)
    
    with open(EVENTHOOKS_DATA_PATH, 'r', encoding='utf8') as f:
        eventHooksData = json.load(f)

    for eventType, nameMap in eventHooksData.items():
        for name, data in nameMap.items():
            for arg in data["args"]:
                arg["type"] = get_lua_type(arg["type"])
            for ret in data["returns"]:
                ret["type"] = get_lua_type(ret["type"])
    
    eventHookBuilder = EventHookBuilder(eventHooksData, CHAIN_INTERNAL_EVENT_LIST_PATH)
    
    additionalEnumBuilder = AdditionalEnumBuilder(ADDITIONAL_ENUMS)
    
    with open(HSDATA_PATH, 'r', encoding='utf8') as f:
        rawData = json.load(f)
        HSData = {k: v for k, v in rawData.items() if "::" not in k}
        internalStructs = {k: v for k, v in rawData.items() if "::" in k}
        for k, v in internalStructs.items():
            name = k.split("::")[-1]
            if name in HSData:
                continue
            
            HSData[name] = v
    
    for data in DATA_LIST:
        parse_LUA_wrap(eventHookBuilder, additionalEnumBuilder, enumMap, data["luaWrap"], HSData, data["wikiData"])
    
    # result = "---@meta\n"
    # for data in DATA_LIST:
    #     result += parse_LUA_wrap(eventHookBuilder, additionalEnumBuilder, enumMap, data["luaWrap"], HSData, data["wikiData"])

    # result += "\n" + additionalEnumBuilder.output()
    # result = "\n".join([line.rstrip() for line in result.split("\n")]).strip()

    # os.makedirs(os.path.dirname(OUTPUT_PATH), exist_ok=True)
    
    # with open(OUTPUT_PATH, 'w', encoding='utf8') as f:
    #     f.write(result)
    
    # eventHookBuilder.save(EVENTHOOKS_OUTPUT_PATH)
    
    # with open(ENUM_PARSE_REQUESTS_OUTPUT_PATH, 'w', encoding='utf8') as f:
    #     json.dump(sorted(g_enum_parse_requests), f, indent=2)

if __name__ == "__main__":
    main()