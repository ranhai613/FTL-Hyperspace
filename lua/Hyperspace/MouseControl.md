---
layout: lua
title: MouseControl
lang: en
---

# Class "MouseControl"





## Methods
{: #Methods .section}
### InstantTooltip ()
{: #InstantTooltip aria-label='Methods' }
#### void :InstantTooltip ()
{: aria-label='Methods' }

___
### LoadTooltip ()
{: #LoadTooltip aria-label='Methods' }
#### void :LoadTooltip (string tooltipName)
{: aria-label='Methods' }

___
### MeasureTooltip ()
{: #MeasureTooltip aria-label='Methods' }
#### [Point](../Hyperspace/Point) :MeasureTooltip (integer unk)
{: aria-label='Methods' }
`tooltipName` should be an id of the text without prefix `tooltip_`.

___
### OnLoop ()
{: #OnLoop aria-label='Methods' }
#### void :OnLoop ()
{: aria-label='Methods' }

___
### OnRender ()
{: #OnRender aria-label='Methods' }
#### void :OnRender ()
{: aria-label='Methods' }

___
### QueueStaticTooltip ()
{: #QueueStaticTooltip aria-label='Methods' }
#### void :QueueStaticTooltip ([Point](../Hyperspace/Point) pos)
{: aria-label='Methods' }

___
### RenderTooltip ()
{: #RenderTooltip aria-label='Methods' }
#### void :RenderTooltip ([Point](../Hyperspace/Point) tooltipPoint, boolean staticPos)
{: aria-label='Methods' }

___
### Reset ()
{: #Reset aria-label='Methods' }
#### void :Reset ()
{: aria-label='Methods' }

___
### ResetArmed ()
{: #ResetArmed aria-label='Methods' }
#### void :ResetArmed ()
{: aria-label='Methods' }

___
### SetDoor ()
{: #SetDoor aria-label='Methods' }
#### void :SetDoor (integer state)
{: aria-label='Methods' }

___
### SetTooltip ()
{: #SetTooltip aria-label='Methods' }
#### void :SetTooltip (string tooltip)
{: aria-label='Methods' }

___
### SetTooltipTitle ()
{: #SetTooltipTitle aria-label='Methods' }
#### void :SetTooltipTitle (string tooltip)
{: aria-label='Methods' }

___


## Fields
{: #Fields .section}
### aiming_required
{: #aiming_required aria-label='Fields' }
#### integer .aiming_required
{: aria-label='Fields' }

___
### animateDoor
{: #animateDoor aria-label='Fields' }
#### integer .animateDoor
{: aria-label='Fields' }

___
### bForceTooltip
{: #bForceTooltip aria-label='Fields' }
#### boolean .bForceTooltip
{: aria-label='Fields' }

___
### bHideMouse
{: #bHideMouse aria-label='Fields' }
#### boolean .bHideMouse
{: aria-label='Fields' }

___
### bMoving
{: #bMoving aria-label='Fields' }
#### boolean .bMoving
{: aria-label='Fields' }

___
### bSellingStuff
{: #bSellingStuff aria-label='Fields' }
#### boolean .bSellingStuff
{: aria-label='Fields' }

___
### iHacking
{: #iHacking aria-label='Fields' }
#### integer .iHacking
{: aria-label='Fields' }

___
### iMindControlling
{: #iMindControlling aria-label='Fields' }
#### integer .iMindControlling
{: aria-label='Fields' }

___
### iTeleporting
{: #iTeleporting aria-label='Fields' }
#### integer .iTeleporting
{: aria-label='Fields' }

___
### invalidPointer
{: #invalidPointer aria-label='Fields' }
#### [GL_Texture](../Graphics/GL_Texture) .invalidPointer
{: aria-label='Fields' }

___
### lastAddition
{: #lastAddition aria-label='Fields' }
#### [GL_Texture](../Graphics/GL_Texture) .lastAddition
{: aria-label='Fields' }

___
### lastIcon
{: #lastIcon aria-label='Fields' }
#### [GL_Texture](../Graphics/GL_Texture) .lastIcon
{: aria-label='Fields' }

___
### lastPosition
{: #lastPosition aria-label='Fields' }
#### [Point](../Hyperspace/Point) .lastPosition
{: aria-label='Fields' }

___
### lastTooltipText
{: #lastTooltipText aria-label='Fields' }
#### string .lastTooltipText
{: aria-label='Fields' }

___
### lastValid
{: #lastValid aria-label='Fields' }
#### boolean .lastValid
{: aria-label='Fields' }

___
### newHover
{: #newHover aria-label='Fields' }
#### boolean .newHover
{: aria-label='Fields' }

___
### openDoor
{: #openDoor aria-label='Fields' }
#### [Animation](../Hyperspace/Animation) .openDoor
{: aria-label='Fields' }

___
### overrideTooltipWidth
{: #overrideTooltipWidth aria-label='Fields' }
#### integer .overrideTooltipWidth
{: aria-label='Fields' }

___
### position
{: #position aria-label='Fields' }
#### [Point](../Hyperspace/Point) .position
{: aria-label='Fields' }

___
### selling
{: #selling aria-label='Fields' }
#### [GL_Texture](../Graphics/GL_Texture) .selling
{: aria-label='Fields' }

___
### staticTooltip
{: #staticTooltip aria-label='Fields' }
#### [Point](../Hyperspace/Point) .staticTooltip
{: aria-label='Fields' }

___
### tooltip
{: #tooltip aria-label='Fields' }
#### string .tooltip
{: aria-label='Fields' }

___
### tooltipTimer
{: #tooltipTimer aria-label='Fields' }
#### number .tooltipTimer
{: aria-label='Fields' }

___
### tooltipTitle
{: #tooltipTitle aria-label='Fields' }
#### string .tooltipTitle
{: aria-label='Fields' }

___
### valid
{: #valid aria-label='Fields' }
#### boolean .valid
{: aria-label='Fields' }

___
### validPointer
{: #validPointer aria-label='Fields' }
#### [GL_Texture](../Graphics/GL_Texture) .validPointer
{: aria-label='Fields' }

___
