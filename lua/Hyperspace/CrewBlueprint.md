---
layout: lua
title: CrewBlueprint
lang: en
---

# Class "CrewBlueprint"

Extends: [Blueprint](../Hyperspace/Blueprint)


## Constructors
### CrewBlueprint ()
{: aria-label='Constructors' }
#### [CrewBlueprint](../Hyperspace/CrewBlueprint) CrewBlueprint ()
{: aria-label='Constructors' }

___
### CrewBlueprint ()
{: aria-label='Constructors' }
#### [CrewBlueprint](../Hyperspace/CrewBlueprint) CrewBlueprint ([CrewBlueprint](../Hyperspace/CrewBlueprint) unknown)
{: aria-label='Constructors' }

___




## Methods
### GetCurrentSkillColor ()
{: aria-label='Methods' }
#### [GL_Color](../Graphics/GL_Color) :GetCurrentSkillColor (integer skill)
{: aria-label='Methods' }

___
### GetNameShort ()
{: aria-label='Methods' }
#### string :GetNameShort ()
{: aria-label='Methods' }

___
### RandomSkills ()
{: aria-label='Methods' }
#### void :RandomSkills (integer worldLevel)
{: aria-label='Methods' }

___
### RenderIcon ()
{: aria-label='Methods' }
#### void :RenderIcon (number opacity)
{: aria-label='Methods' }

___
### RenderSkill ()
{: aria-label='Methods' }
#### void :RenderSkill (integer x, integer y, integer length, integer height, integer skill)
{: aria-label='Methods' }

___


## Fields
### colorChoices
{: aria-label='Fields' }
#### vector\<integer\> .colorChoices
{: aria-label='Fields' }

___
### colorLayers
{: aria-label='Fields' }
#### vector\<vector\<[GL_Color](../Graphics/GL_Color)\>\> .colorLayers
{: aria-label='Fields' }

___
### crewNameLong
{: aria-label='Fields' }
#### [TextString](../Hyperspace/TextString) .crewNameLong
{: aria-label='Fields' }

___
### male
{: aria-label='Fields' }
#### boolean .male
{: aria-label='Fields' }

___
### powers
{: aria-label='Fields' }
#### vector\<[TextString](../Hyperspace/TextString)\> .powers
{: aria-label='Fields' }

___
### skillLevel
{: aria-label='Fields' }
#### vector\<std_pair_int_int\> .skillLevel
{: aria-label='Fields' }

___
