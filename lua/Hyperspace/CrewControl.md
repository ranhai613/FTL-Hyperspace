---
layout: lua
title: CrewControl
lang: en
category: Class
---

# Class "CrewControl"






## Fields
{: #Fields .lua-content-section}
### currentMouse
{: #currentMouse .lua-content-item aria-label='Fields' }
#### [Point](../Hyperspace/Point) .currentMouse
{: aria-label='Fields' }
Affect the visual portion of the selection box

___
### firstMouse
{: #firstMouse .lua-content-item aria-label='Fields' }
#### [Point](../Hyperspace/Point) .firstMouse
{: aria-label='Fields' }
Affect the visual portion of the selection box

___
### potentialSelectedCrew
{: #potentialSelectedCrew .lua-content-item aria-label='Fields' }
#### vector\<[CrewMember](../Hyperspace/CrewMember)\> .potentialSelectedCrew
{: aria-label='Fields' }
Crew hovered by the selection box

___
### selectedCrew
{: #selectedCrew .lua-content-item aria-label='Fields' }
#### vector\<[CrewMember](../Hyperspace/CrewMember)\> .selectedCrew
{: aria-label='Fields' }

___
### worldCurrentMouse
{: #worldCurrentMouse .lua-content-item aria-label='Fields' }
#### [Point](../Hyperspace/Point) .worldCurrentMouse
{: aria-label='Fields' }
Affect the logic portion of the selection box, fills `.potentialSelectedCrew`

___
### worldFirstMouse
{: #worldFirstMouse .lua-content-item aria-label='Fields' }
#### [Point](../Hyperspace/Point) .worldFirstMouse
{: aria-label='Fields' }
Affect the logic portion of the selection box, fills `.potentialSelectedCrew`

___
