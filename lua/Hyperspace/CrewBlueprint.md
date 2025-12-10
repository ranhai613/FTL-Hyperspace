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

______
### CrewBlueprint ()
{: aria-label='Constructors' }
#### [CrewBlueprint](../Hyperspace/CrewBlueprint) CrewBlueprint ([CrewBlueprint](../Hyperspace/CrewBlueprint) unknown)
{: aria-label='Constructors' }

___




## Methods
### GetCurrentSkillColor ()
{: aria-label='Functions' }
#### [GL_Color](../Graphics/GL_Color) :GetCurrentSkillColor (integer skill)
{: aria-label='Functions' }

______
### GetNameShort ()
{: aria-label='Functions' }
#### string :GetNameShort ()
{: aria-label='Functions' }

______
### RandomSkills ()
{: aria-label='Functions' }
#### void :RandomSkills (integer worldLevel)
{: aria-label='Functions' }

______
### RenderIcon ()
{: aria-label='Functions' }
#### void :RenderIcon (number opacity)
{: aria-label='Functions' }

______
### RenderSkill ()
{: aria-label='Functions' }
#### void :RenderSkill (integer x, integer y, integer length, integer height, integer skill)
{: aria-label='Functions' }

___


## Fields
### colorChoices
{: aria-label='Variables' }
#### vector\<integer\> .colorChoices
{: aria-label='Variables' }

______
### colorLayers
{: aria-label='Variables' }
#### vector\<vector\<[GL_Color](../Graphics/GL_Color)\>\> .colorLayers
{: aria-label='Variables' }

______
### crewNameLong
{: aria-label='Variables' }
#### [TextString](../Hyperspace/TextString) .crewNameLong
{: aria-label='Variables' }

______
### male
{: aria-label='Variables' }
#### boolean .male
{: aria-label='Variables' }

______
### powers
{: aria-label='Variables' }
#### vector\<[TextString](../Hyperspace/TextString)\> .powers
{: aria-label='Variables' }

______
### skillLevel
{: aria-label='Variables' }
#### vector\<std_pair_int_int\> .skillLevel
{: aria-label='Variables' }

___
