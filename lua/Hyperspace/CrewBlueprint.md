---
layout: lua
title: CrewBlueprint
lang: en
---

# Class "CrewBlueprint"


Extends: [Blueprint](../Hyperspace/Blueprint)


## Constructors
{: #Constructors .lua-content-section}
### CrewBlueprint ()
{: #CrewBlueprint .lua-content-item aria-label='Constructors' }
#### [CrewBlueprint](../Hyperspace/CrewBlueprint) CrewBlueprint ()
{: aria-label='Constructors' }

___
### CrewBlueprint ()
{: #CrewBlueprint .lua-content-item aria-label='Constructors' }
#### [CrewBlueprint](../Hyperspace/CrewBlueprint) CrewBlueprint ([CrewBlueprint](../Hyperspace/CrewBlueprint) unknown)
{: aria-label='Constructors' }

___




## Methods
{: #Methods .lua-content-section}
<details markdown="1"><summary id="InheritedMethods" class="lua-content-item" markdown="span">Inherited Methods</summary>


#### From [Blueprint](Blueprint)

| Return Type | Method |
| --- | --- |
| string | :[GetNameLong](Blueprint#GetNameLong) () |
| integer | :[GetType](Blueprint#GetType) () |

</details>
___
### GetCurrentSkillColor ()
{: #GetCurrentSkillColor .lua-content-item aria-label='Methods' }
#### [GL_Color](../Graphics/GL_Color) :GetCurrentSkillColor (integer skill)
{: aria-label='Methods' }

___
### GetNameShort ()
{: #GetNameShort .lua-content-item aria-label='Methods' }
#### string :GetNameShort ()
{: aria-label='Methods' }

___
### RandomSkills ()
{: #RandomSkills .lua-content-item aria-label='Methods' }
#### void :RandomSkills (integer worldLevel)
{: aria-label='Methods' }

___
### RenderIcon ()
{: #RenderIcon .lua-content-item aria-label='Methods' }
#### void :RenderIcon (number opacity)
{: aria-label='Methods' }

___
### RenderSkill ()
{: #RenderSkill .lua-content-item aria-label='Methods' }
#### void :RenderSkill (integer x, integer y, integer length, integer height, integer skill)
{: aria-label='Methods' }

___


## Fields
{: #Fields .lua-content-section}
<details markdown="1"><summary id="InheritedFields" class="lua-content-item" markdown="span">Inherited Fields</summary>


#### From [Blueprint](Blueprint)

| Type | Field |
| --- | --- |
| [Description](../Hyperspace/Description) | .[desc](Blueprint#desc-) |
| string | .[name](Blueprint#name-) |
| integer | .[type](Blueprint#type-) |

</details>
___
### colorChoices
{: #colorChoices .lua-content-item aria-label='Fields' }
#### vector\<integer\> .colorChoices
{: aria-label='Fields' }

___
### colorLayers
{: #colorLayers .lua-content-item aria-label='Fields' }
#### vector\<vector\<[GL_Color](../Graphics/GL_Color)\>\> .colorLayers
{: aria-label='Fields' }

___
### crewNameLong
{: #crewNameLong .lua-content-item aria-label='Fields' }
#### [TextString](../Hyperspace/TextString) .crewNameLong
{: aria-label='Fields' }

___
### male
{: #male .lua-content-item aria-label='Fields' }
#### boolean .male
{: aria-label='Fields' }

___
### powers
{: #powers .lua-content-item aria-label='Fields' }
#### vector\<[TextString](../Hyperspace/TextString)\> .powers
{: aria-label='Fields' }

___
### skillLevel
{: #skillLevel .lua-content-item aria-label='Fields' }
#### vector\<std_pair_int_int\> .skillLevel
{: aria-label='Fields' }

___
