---
layout: lua
title: MouseControl
lang: en
---

# Class "MouseControl"





## Methods
{: #Methods .lua-content-section}
### InstantTooltip ()
{: #InstantTooltip .lua-content-item aria-label='Methods' }
#### void :InstantTooltip ()
{: aria-label='Methods' }

___
### LoadTooltip ()
{: #LoadTooltip .lua-content-item aria-label='Methods' }
#### void :LoadTooltip (string tooltipName)
{: aria-label='Methods' }

___
### MeasureTooltip ()
{: #MeasureTooltip .lua-content-item aria-label='Methods' }
#### [Point](../Hyperspace/Point) :MeasureTooltip (integer unk)
{: aria-label='Methods' }
`tooltipName` should be an id of the text without prefix `tooltip_`.

___
### OnLoop ()
{: #OnLoop .lua-content-item aria-label='Methods' }
#### void :OnLoop ()
{: aria-label='Methods' }

___
### OnRender ()
{: #OnRender .lua-content-item aria-label='Methods' }
#### void :OnRender ()
{: aria-label='Methods' }

___
### QueueStaticTooltip ()
{: #QueueStaticTooltip .lua-content-item aria-label='Methods' }
#### void :QueueStaticTooltip ([Point](../Hyperspace/Point) pos)
{: aria-label='Methods' }

___
### RenderTooltip ()
{: #RenderTooltip .lua-content-item aria-label='Methods' }
#### void :RenderTooltip ([Point](../Hyperspace/Point) tooltipPoint, boolean staticPos)
{: aria-label='Methods' }

___
### Reset ()
{: #Reset .lua-content-item aria-label='Methods' }
#### void :Reset ()
{: aria-label='Methods' }

___
### ResetArmed ()
{: #ResetArmed .lua-content-item aria-label='Methods' }
#### void :ResetArmed ()
{: aria-label='Methods' }

___
### SetDoor ()
{: #SetDoor .lua-content-item aria-label='Methods' }
#### void :SetDoor (integer state)
{: aria-label='Methods' }

___
### SetTooltip ()
{: #SetTooltip .lua-content-item aria-label='Methods' }
#### void :SetTooltip (string tooltip)
{: aria-label='Methods' }

___
### SetTooltipTitle ()
{: #SetTooltipTitle .lua-content-item aria-label='Methods' }
#### void :SetTooltipTitle (string tooltip)
{: aria-label='Methods' }

___


## Fields
{: #Fields .lua-content-section}
### aiming_required
{: #aiming_required .lua-content-item aria-label='Fields' }
#### integer .aiming_required
{: aria-label='Fields' }

___
### animateDoor
{: #animateDoor .lua-content-item aria-label='Fields' }
#### integer .animateDoor
{: aria-label='Fields' }

___
### bForceTooltip
{: #bForceTooltip .lua-content-item aria-label='Fields' }
#### boolean .bForceTooltip
{: aria-label='Fields' }

___
### bHideMouse
{: #bHideMouse .lua-content-item aria-label='Fields' }
#### boolean .bHideMouse
{: aria-label='Fields' }

___
### bMoving
{: #bMoving .lua-content-item aria-label='Fields' }
#### boolean .bMoving
{: aria-label='Fields' }

___
### bSellingStuff
{: #bSellingStuff .lua-content-item aria-label='Fields' }
#### boolean .bSellingStuff
{: aria-label='Fields' }

___
### iHacking
{: #iHacking .lua-content-item aria-label='Fields' }
#### integer .iHacking
{: aria-label='Fields' }

___
### iMindControlling
{: #iMindControlling .lua-content-item aria-label='Fields' }
#### integer .iMindControlling
{: aria-label='Fields' }

___
### iTeleporting
{: #iTeleporting .lua-content-item aria-label='Fields' }
#### integer .iTeleporting
{: aria-label='Fields' }

___
### invalidPointer
{: #invalidPointer .lua-content-item aria-label='Fields' }
#### [GL_Texture](../Graphics/GL_Texture) .invalidPointer
{: aria-label='Fields' }

___
### lastAddition
{: #lastAddition .lua-content-item aria-label='Fields' }
#### [GL_Texture](../Graphics/GL_Texture) .lastAddition
{: aria-label='Fields' }

___
### lastIcon
{: #lastIcon .lua-content-item aria-label='Fields' }
#### [GL_Texture](../Graphics/GL_Texture) .lastIcon
{: aria-label='Fields' }

___
### lastPosition
{: #lastPosition .lua-content-item aria-label='Fields' }
#### [Point](../Hyperspace/Point) .lastPosition
{: aria-label='Fields' }

___
### lastTooltipText
{: #lastTooltipText .lua-content-item aria-label='Fields' }
#### string .lastTooltipText
{: aria-label='Fields' }

___
### lastValid
{: #lastValid .lua-content-item aria-label='Fields' }
#### boolean .lastValid
{: aria-label='Fields' }

___
### newHover
{: #newHover .lua-content-item aria-label='Fields' }
#### boolean .newHover
{: aria-label='Fields' }

___
### openDoor
{: #openDoor .lua-content-item aria-label='Fields' }
#### [Animation](../Hyperspace/Animation) .openDoor
{: aria-label='Fields' }

___
### overrideTooltipWidth
{: #overrideTooltipWidth .lua-content-item aria-label='Fields' }
#### integer .overrideTooltipWidth
{: aria-label='Fields' }

___
### position
{: #position .lua-content-item aria-label='Fields' }
#### [Point](../Hyperspace/Point) .position
{: aria-label='Fields' }

___
### selling
{: #selling .lua-content-item aria-label='Fields' }
#### [GL_Texture](../Graphics/GL_Texture) .selling
{: aria-label='Fields' }

___
### staticTooltip
{: #staticTooltip .lua-content-item aria-label='Fields' }
#### [Point](../Hyperspace/Point) .staticTooltip
{: aria-label='Fields' }

___
### tooltip
{: #tooltip .lua-content-item aria-label='Fields' }
#### string .tooltip
{: aria-label='Fields' }

___
### tooltipTimer
{: #tooltipTimer .lua-content-item aria-label='Fields' }
#### number .tooltipTimer
{: aria-label='Fields' }

___
### tooltipTitle
{: #tooltipTitle .lua-content-item aria-label='Fields' }
#### string .tooltipTitle
{: aria-label='Fields' }

___
### valid
{: #valid .lua-content-item aria-label='Fields' }
#### boolean .valid
{: aria-label='Fields' }

___
### validPointer
{: #validPointer .lua-content-item aria-label='Fields' }
#### [GL_Texture](../Graphics/GL_Texture) .validPointer
{: aria-label='Fields' }

___
