---
layout: lua
title: MouseControl
lang: en
---

# Class "MouseControl"





## Methods
### InstantTooltip ()
{: aria-label='Methods' }
#### void :InstantTooltip ()
{: aria-label='Methods' }

___
### LoadTooltip ()
{: aria-label='Methods' }
#### void :LoadTooltip (string tooltipName)
{: aria-label='Methods' }

___
### MeasureTooltip ()
{: aria-label='Methods' }
#### [Point](../Hyperspace/Point) :MeasureTooltip (integer unk)
{: aria-label='Methods' }
`tooltipName` should be an id of the text without prefix `tooltip_`.

___
### OnLoop ()
{: aria-label='Methods' }
#### void :OnLoop ()
{: aria-label='Methods' }

___
### OnRender ()
{: aria-label='Methods' }
#### void :OnRender ()
{: aria-label='Methods' }

___
### QueueStaticTooltip ()
{: aria-label='Methods' }
#### void :QueueStaticTooltip ([Point](../Hyperspace/Point) pos)
{: aria-label='Methods' }

___
### RenderTooltip ()
{: aria-label='Methods' }
#### void :RenderTooltip ([Point](../Hyperspace/Point) tooltipPoint, boolean staticPos)
{: aria-label='Methods' }

___
### Reset ()
{: aria-label='Methods' }
#### void :Reset ()
{: aria-label='Methods' }

___
### ResetArmed ()
{: aria-label='Methods' }
#### void :ResetArmed ()
{: aria-label='Methods' }

___
### SetDoor ()
{: aria-label='Methods' }
#### void :SetDoor (integer state)
{: aria-label='Methods' }

___
### SetTooltip ()
{: aria-label='Methods' }
#### void :SetTooltip (string tooltip)
{: aria-label='Methods' }

___
### SetTooltipTitle ()
{: aria-label='Methods' }
#### void :SetTooltipTitle (string tooltip)
{: aria-label='Methods' }

___


## Fields
### aiming_required
{: aria-label='Fields' }
#### integer .aiming_required
{: aria-label='Fields' }

___
### animateDoor
{: aria-label='Fields' }
#### integer .animateDoor
{: aria-label='Fields' }

___
### bForceTooltip
{: aria-label='Fields' }
#### boolean .bForceTooltip
{: aria-label='Fields' }

___
### bHideMouse
{: aria-label='Fields' }
#### boolean .bHideMouse
{: aria-label='Fields' }

___
### bMoving
{: aria-label='Fields' }
#### boolean .bMoving
{: aria-label='Fields' }

___
### bSellingStuff
{: aria-label='Fields' }
#### boolean .bSellingStuff
{: aria-label='Fields' }

___
### iHacking
{: aria-label='Fields' }
#### integer .iHacking
{: aria-label='Fields' }

___
### iMindControlling
{: aria-label='Fields' }
#### integer .iMindControlling
{: aria-label='Fields' }

___
### iTeleporting
{: aria-label='Fields' }
#### integer .iTeleporting
{: aria-label='Fields' }

___
### invalidPointer
{: aria-label='Fields' }
#### [GL_Texture](../Graphics/GL_Texture) .invalidPointer
{: aria-label='Fields' }

___
### lastAddition
{: aria-label='Fields' }
#### [GL_Texture](../Graphics/GL_Texture) .lastAddition
{: aria-label='Fields' }

___
### lastIcon
{: aria-label='Fields' }
#### [GL_Texture](../Graphics/GL_Texture) .lastIcon
{: aria-label='Fields' }

___
### lastPosition
{: aria-label='Fields' }
#### [Point](../Hyperspace/Point) .lastPosition
{: aria-label='Fields' }

___
### lastTooltipText
{: aria-label='Fields' }
#### string .lastTooltipText
{: aria-label='Fields' }

___
### lastValid
{: aria-label='Fields' }
#### boolean .lastValid
{: aria-label='Fields' }

___
### newHover
{: aria-label='Fields' }
#### boolean .newHover
{: aria-label='Fields' }

___
### openDoor
{: aria-label='Fields' }
#### [Animation](../Hyperspace/Animation) .openDoor
{: aria-label='Fields' }

___
### overrideTooltipWidth
{: aria-label='Fields' }
#### integer .overrideTooltipWidth
{: aria-label='Fields' }

___
### position
{: aria-label='Fields' }
#### [Point](../Hyperspace/Point) .position
{: aria-label='Fields' }

___
### selling
{: aria-label='Fields' }
#### [GL_Texture](../Graphics/GL_Texture) .selling
{: aria-label='Fields' }

___
### staticTooltip
{: aria-label='Fields' }
#### [Point](../Hyperspace/Point) .staticTooltip
{: aria-label='Fields' }

___
### tooltip
{: aria-label='Fields' }
#### string .tooltip
{: aria-label='Fields' }

___
### tooltipTimer
{: aria-label='Fields' }
#### number .tooltipTimer
{: aria-label='Fields' }

___
### tooltipTitle
{: aria-label='Fields' }
#### string .tooltipTitle
{: aria-label='Fields' }

___
### valid
{: aria-label='Fields' }
#### boolean .valid
{: aria-label='Fields' }

___
### validPointer
{: aria-label='Fields' }
#### [GL_Texture](../Graphics/GL_Texture) .validPointer
{: aria-label='Fields' }

___
