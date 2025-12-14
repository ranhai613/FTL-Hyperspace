---
layout: lua
title: MouseControl
lang: en
category: Class
---

# Class "MouseControl"

<!-- Head content to be pulled from "lua-source-parts-inject/Hyperspace/MouseControl/_head.md" -->





## Methods
{: #Methods .lua-content-section}
### InstantTooltip ()
{: #InstantTooltip .lua-content-item aria-label='Methods' }
#### void :InstantTooltip ()
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/MouseControl/InstantTooltip().md" -->

___
### LoadTooltip ()
{: #LoadTooltip .lua-content-item aria-label='Methods' }
#### void :LoadTooltip (string tooltipName)
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/MouseControl/LoadTooltip(string).md" -->

___
### MeasureTooltip ()
{: #MeasureTooltip .lua-content-item aria-label='Methods' }
#### [Point](../Hyperspace/Point) :MeasureTooltip (integer unk)
{: aria-label='Methods' }
<!-- Content pulled from "lua-source-parts-inject/Hyperspace/MouseControl/MeasureTooltip(integer).md" -->
`tooltipName` should be an id of the text without prefix `tooltip_`.
<!-- End of content -->

___
### OnLoop ()
{: #OnLoop .lua-content-item aria-label='Methods' }
#### void :OnLoop ()
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/MouseControl/OnLoop().md" -->

___
### OnRender ()
{: #OnRender .lua-content-item aria-label='Methods' }
#### void :OnRender ()
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/MouseControl/OnRender().md" -->

___
### QueueStaticTooltip ()
{: #QueueStaticTooltip .lua-content-item aria-label='Methods' }
#### void :QueueStaticTooltip ([Point](../Hyperspace/Point) pos)
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/MouseControl/QueueStaticTooltip(Hyperspace.Point).md" -->

___
### RenderTooltip ()
{: #RenderTooltip .lua-content-item aria-label='Methods' }
#### void :RenderTooltip ([Point](../Hyperspace/Point) tooltipPoint, boolean staticPos)
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/MouseControl/RenderTooltip(Hyperspace.Point,boolean).md" -->

___
### Reset ()
{: #Reset .lua-content-item aria-label='Methods' }
#### void :Reset ()
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/MouseControl/Reset().md" -->

___
### ResetArmed ()
{: #ResetArmed .lua-content-item aria-label='Methods' }
#### void :ResetArmed ()
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/MouseControl/ResetArmed().md" -->

___
### SetDoor ()
{: #SetDoor .lua-content-item aria-label='Methods' }
#### void :SetDoor (integer state)
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/MouseControl/SetDoor(integer).md" -->

___
### SetTooltip ()
{: #SetTooltip .lua-content-item aria-label='Methods' }
#### void :SetTooltip (string tooltip)
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/MouseControl/SetTooltip(string).md" -->

___
### SetTooltipTitle ()
{: #SetTooltipTitle .lua-content-item aria-label='Methods' }
#### void :SetTooltipTitle (string tooltip)
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/MouseControl/SetTooltipTitle(string).md" -->

___


## Fields
{: #Fields .lua-content-section}
### aiming_required
{: #aiming_required .lua-content-item aria-label='Fields' }
#### integer .aiming_required
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/MouseControl/aiming_required.md" -->

___
### animateDoor
{: #animateDoor .lua-content-item aria-label='Fields' }
#### integer .animateDoor
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/MouseControl/animateDoor.md" -->

___
### bForceTooltip
{: #bForceTooltip .lua-content-item aria-label='Fields' }
#### boolean .bForceTooltip
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/MouseControl/bForceTooltip.md" -->

___
### bHideMouse
{: #bHideMouse .lua-content-item aria-label='Fields' }
#### boolean .bHideMouse
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/MouseControl/bHideMouse.md" -->

___
### bMoving
{: #bMoving .lua-content-item aria-label='Fields' }
#### boolean .bMoving
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/MouseControl/bMoving.md" -->

___
### bSellingStuff
{: #bSellingStuff .lua-content-item aria-label='Fields' }
#### boolean .bSellingStuff
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/MouseControl/bSellingStuff.md" -->

___
### iHacking
{: #iHacking .lua-content-item aria-label='Fields' }
#### integer .iHacking
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/MouseControl/iHacking.md" -->

___
### iMindControlling
{: #iMindControlling .lua-content-item aria-label='Fields' }
#### integer .iMindControlling
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/MouseControl/iMindControlling.md" -->

___
### iTeleporting
{: #iTeleporting .lua-content-item aria-label='Fields' }
#### integer .iTeleporting
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/MouseControl/iTeleporting.md" -->

___
### invalidPointer
{: #invalidPointer .lua-content-item aria-label='Fields' }
#### [GL_Texture](../Graphics/GL_Texture) .invalidPointer
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/MouseControl/invalidPointer.md" -->

___
### lastAddition
{: #lastAddition .lua-content-item aria-label='Fields' }
#### [GL_Texture](../Graphics/GL_Texture) .lastAddition
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/MouseControl/lastAddition.md" -->

___
### lastIcon
{: #lastIcon .lua-content-item aria-label='Fields' }
#### [GL_Texture](../Graphics/GL_Texture) .lastIcon
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/MouseControl/lastIcon.md" -->

___
### lastPosition
{: #lastPosition .lua-content-item aria-label='Fields' }
#### [Point](../Hyperspace/Point) .lastPosition
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/MouseControl/lastPosition.md" -->

___
### lastTooltipText
{: #lastTooltipText .lua-content-item aria-label='Fields' }
#### string .lastTooltipText
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/MouseControl/lastTooltipText.md" -->

___
### lastValid
{: #lastValid .lua-content-item aria-label='Fields' }
#### boolean .lastValid
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/MouseControl/lastValid.md" -->

___
### newHover
{: #newHover .lua-content-item aria-label='Fields' }
#### boolean .newHover
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/MouseControl/newHover.md" -->

___
### openDoor
{: #openDoor .lua-content-item aria-label='Fields' }
#### [Animation](../Hyperspace/Animation) .openDoor
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/MouseControl/openDoor.md" -->

___
### overrideTooltipWidth
{: #overrideTooltipWidth .lua-content-item aria-label='Fields' }
#### integer .overrideTooltipWidth
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/MouseControl/overrideTooltipWidth.md" -->

___
### position
{: #position .lua-content-item aria-label='Fields' }
#### [Point](../Hyperspace/Point) .position
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/MouseControl/position.md" -->

___
### selling
{: #selling .lua-content-item aria-label='Fields' }
#### [GL_Texture](../Graphics/GL_Texture) .selling
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/MouseControl/selling.md" -->

___
### staticTooltip
{: #staticTooltip .lua-content-item aria-label='Fields' }
#### [Point](../Hyperspace/Point) .staticTooltip
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/MouseControl/staticTooltip.md" -->

___
### tooltip
{: #tooltip .lua-content-item aria-label='Fields' }
#### string .tooltip
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/MouseControl/tooltip.md" -->

___
### tooltipTimer
{: #tooltipTimer .lua-content-item aria-label='Fields' }
#### number .tooltipTimer
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/MouseControl/tooltipTimer.md" -->

___
### tooltipTitle
{: #tooltipTitle .lua-content-item aria-label='Fields' }
#### string .tooltipTitle
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/MouseControl/tooltipTitle.md" -->

___
### valid
{: #valid .lua-content-item aria-label='Fields' }
#### boolean .valid
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/MouseControl/valid.md" -->

___
### validPointer
{: #validPointer .lua-content-item aria-label='Fields' }
#### [GL_Texture](../Graphics/GL_Texture) .validPointer
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/MouseControl/validPointer.md" -->

___
