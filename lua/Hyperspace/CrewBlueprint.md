---
layout: lua
title: CrewBlueprint
lang: en
---

# Class "CrewBlueprint"


Extends: [Blueprint](../Hyperspace/Blueprint)


## Constructors
{: #Constructors .section}
### CrewBlueprint ()
{: #CrewBlueprint aria-label='Constructors' }
#### [CrewBlueprint](../Hyperspace/CrewBlueprint) CrewBlueprint ()
{: aria-label='Constructors' }

___
### CrewBlueprint ()
{: #CrewBlueprint aria-label='Constructors' }
#### [CrewBlueprint](../Hyperspace/CrewBlueprint) CrewBlueprint ([CrewBlueprint](../Hyperspace/CrewBlueprint) unknown)
{: aria-label='Constructors' }

___




## Methods
{: #Methods .section}
<details markdown="1"><summary markdown="span">Inherited Methods</summary>


#### From [Blueprint](Blueprint)

| Return Type | Method |
| --- | --- |
| string | :[GetNameLong](Blueprint#GetNameLong) () |
| integer | :[GetType](Blueprint#GetType) () |

</details>
___
### GetCurrentSkillColor ()
{: #GetCurrentSkillColor aria-label='Methods' }
#### [GL_Color](../Graphics/GL_Color) :GetCurrentSkillColor (integer skill)
{: aria-label='Methods' }

___
### GetNameShort ()
{: #GetNameShort aria-label='Methods' }
#### string :GetNameShort ()
{: aria-label='Methods' }

___
### RandomSkills ()
{: #RandomSkills aria-label='Methods' }
#### void :RandomSkills (integer worldLevel)
{: aria-label='Methods' }

___
### RenderIcon ()
{: #RenderIcon aria-label='Methods' }
#### void :RenderIcon (number opacity)
{: aria-label='Methods' }

___
### RenderSkill ()
{: #RenderSkill aria-label='Methods' }
#### void :RenderSkill (integer x, integer y, integer length, integer height, integer skill)
{: aria-label='Methods' }

___


## Fields
{: #Fields .section}
<details markdown="1"><summary markdown="span">Inherited Fields</summary>


#### From [Blueprint](Blueprint)

| Type | Field |
| --- | --- |
| [Description](../Hyperspace/Description) | .[desc](Blueprint#desc-) |
| string | .[name](Blueprint#name-) |
| integer | .[type](Blueprint#type-) |

</details>
___
### colorChoices
{: #colorChoices aria-label='Fields' }
#### vector\<integer\> .colorChoices
{: aria-label='Fields' }

___
### colorLayers
{: #colorLayers aria-label='Fields' }
#### vector\<vector\<[GL_Color](../Graphics/GL_Color)\>\> .colorLayers
{: aria-label='Fields' }

___
### crewNameLong
{: #crewNameLong aria-label='Fields' }
#### [TextString](../Hyperspace/TextString) .crewNameLong
{: aria-label='Fields' }

___
### male
{: #male aria-label='Fields' }
#### boolean .male
{: aria-label='Fields' }

___
### powers
{: #powers aria-label='Fields' }
#### vector\<[TextString](../Hyperspace/TextString)\> .powers
{: aria-label='Fields' }

___
### skillLevel
{: #skillLevel aria-label='Fields' }
#### vector\<std_pair_int_int\> .skillLevel
{: aria-label='Fields' }

___
