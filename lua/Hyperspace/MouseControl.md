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

______
### LoadTooltip ()
{: aria-label='Methods' }
#### void :LoadTooltip (string tooltipName)
{: aria-label='Methods' }

______
### MeasureTooltip ()
{: aria-label='Methods' }
#### [Point](../Hyperspace/Point) :MeasureTooltip (integer unk)
{: aria-label='Methods' }
`tooltipName` should be an id of the text without prefix `tooltip_`.

______
### OnLoop ()
{: aria-label='Methods' }
#### void :OnLoop ()
{: aria-label='Methods' }

______
### OnRender ()
{: aria-label='Methods' }
#### void :OnRender ()
{: aria-label='Methods' }

______
### QueueStaticTooltip ()
{: aria-label='Methods' }
#### void :QueueStaticTooltip ([Point](../Hyperspace/Point) pos)
{: aria-label='Methods' }

______
### RenderTooltip ()
{: aria-label='Methods' }
#### void :RenderTooltip ([Point](../Hyperspace/Point) tooltipPoint, boolean staticPos)
{: aria-label='Methods' }

______
### Reset ()
{: aria-label='Methods' }
#### void :Reset ()
{: aria-label='Methods' }

______
### ResetArmed ()
{: aria-label='Methods' }
#### void :ResetArmed ()
{: aria-label='Methods' }

______
### SetDoor ()
{: aria-label='Methods' }
#### void :SetDoor (integer state)
{: aria-label='Methods' }

______
### SetTooltip ()
{: aria-label='Methods' }
#### void :SetTooltip (string tooltip)
{: aria-label='Methods' }

______
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

______
### animateDoor
{: aria-label='Fields' }
#### integer .animateDoor
{: aria-label='Fields' }

______
### bForceTooltip
{: aria-label='Fields' }
#### boolean .bForceTooltip
{: aria-label='Fields' }

______
### bHideMouse
{: aria-label='Fields' }
#### boolean .bHideMouse
{: aria-label='Fields' }

______
### bMoving
{: aria-label='Fields' }
#### boolean .bMoving
{: aria-label='Fields' }

______
### bSellingStuff
{: aria-label='Fields' }
#### boolean .bSellingStuff
{: aria-label='Fields' }

______
### iHacking
{: aria-label='Fields' }
#### integer .iHacking
{: aria-label='Fields' }

______
### iMindControlling
{: aria-label='Fields' }
#### integer .iMindControlling
{: aria-label='Fields' }

______
### iTeleporting
{: aria-label='Fields' }
#### integer .iTeleporting
{: aria-label='Fields' }

______
### invalidPointer
{: aria-label='Fields' }
#### [GL_Texture](../Graphics/GL_Texture) .invalidPointer
{: aria-label='Fields' }

______
### lastAddition
{: aria-label='Fields' }
#### [GL_Texture](../Graphics/GL_Texture) .lastAddition
{: aria-label='Fields' }

______
### lastIcon
{: aria-label='Fields' }
#### [GL_Texture](../Graphics/GL_Texture) .lastIcon
{: aria-label='Fields' }

______
### lastPosition
{: aria-label='Fields' }
#### [Point](../Hyperspace/Point) .lastPosition
{: aria-label='Fields' }

______
### lastTooltipText
{: aria-label='Fields' }
#### string .lastTooltipText
{: aria-label='Fields' }

______
### lastValid
{: aria-label='Fields' }
#### boolean .lastValid
{: aria-label='Fields' }

______
### newHover
{: aria-label='Fields' }
#### boolean .newHover
{: aria-label='Fields' }

______
### openDoor
{: aria-label='Fields' }
#### [Animation](../Hyperspace/Animation) .openDoor
{: aria-label='Fields' }

______
### overrideTooltipWidth
{: aria-label='Fields' }
#### integer .overrideTooltipWidth
{: aria-label='Fields' }

______
### position
{: aria-label='Fields' }
#### [Point](../Hyperspace/Point) .position
{: aria-label='Fields' }

______
### selling
{: aria-label='Fields' }
#### [GL_Texture](../Graphics/GL_Texture) .selling
{: aria-label='Fields' }

______
### staticTooltip
{: aria-label='Fields' }
#### [Point](../Hyperspace/Point) .staticTooltip
{: aria-label='Fields' }

______
### tooltip
{: aria-label='Fields' }
#### string .tooltip
{: aria-label='Fields' }

______
### tooltipTimer
{: aria-label='Fields' }
#### number .tooltipTimer
{: aria-label='Fields' }

______
### tooltipTitle
{: aria-label='Fields' }
#### string .tooltipTitle
{: aria-label='Fields' }

______
### valid
{: aria-label='Fields' }
#### boolean .valid
{: aria-label='Fields' }

______
### validPointer
{: aria-label='Fields' }
#### [GL_Texture](../Graphics/GL_Texture) .validPointer
{: aria-label='Fields' }

___
