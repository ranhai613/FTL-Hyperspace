---
layout: lua
title: CrewControl
lang: en
---

# Class "CrewControl"






## Fields
### currentMouse
{: aria-label='Fields' }
#### [Point](../Hyperspace/Point) .currentMouse
{: aria-label='Fields' }
Affect the visual portion of the selection box

___
### firstMouse
{: aria-label='Fields' }
#### [Point](../Hyperspace/Point) .firstMouse
{: aria-label='Fields' }
Affect the visual portion of the selection box

___
### potentialSelectedCrew
{: aria-label='Fields' }
#### vector\<[CrewMember](../Hyperspace/CrewMember)\> .potentialSelectedCrew
{: aria-label='Fields' }
Crew hovered by the selection box

___
### selectedCrew
{: aria-label='Fields' }
#### vector\<[CrewMember](../Hyperspace/CrewMember)\> .selectedCrew
{: aria-label='Fields' }

___
### worldCurrentMouse
{: aria-label='Fields' }
#### [Point](../Hyperspace/Point) .worldCurrentMouse
{: aria-label='Fields' }
Affect the logic portion of the selection box, fills `.potentialSelectedCrew`

___
### worldFirstMouse
{: aria-label='Fields' }
#### [Point](../Hyperspace/Point) .worldFirstMouse
{: aria-label='Fields' }
Affect the logic portion of the selection box, fills `.potentialSelectedCrew`

___
