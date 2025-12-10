---
layout: lua
title: MouseControl
lang: en
---

# Class "MouseControl"





## Methods
### InstantTooltip ()
{: aria-label='Functions' }
#### void :InstantTooltip ()
{: aria-label='Functions' }

______
### LoadTooltip ()
{: aria-label='Functions' }
#### void :LoadTooltip (string tooltipName)
{: aria-label='Functions' }

______
### MeasureTooltip ()
{: aria-label='Functions' }
#### [Point](../Hyperspace/Point) :MeasureTooltip (integer unk)
{: aria-label='Functions' }
`tooltipName` should be an id of the text without prefix `tooltip_`.

______
### OnLoop ()
{: aria-label='Functions' }
#### void :OnLoop ()
{: aria-label='Functions' }

______
### OnRender ()
{: aria-label='Functions' }
#### void :OnRender ()
{: aria-label='Functions' }

______
### QueueStaticTooltip ()
{: aria-label='Functions' }
#### void :QueueStaticTooltip ([Point](../Hyperspace/Point) pos)
{: aria-label='Functions' }

______
### RenderTooltip ()
{: aria-label='Functions' }
#### void :RenderTooltip ([Point](../Hyperspace/Point) tooltipPoint, boolean staticPos)
{: aria-label='Functions' }

______
### Reset ()
{: aria-label='Functions' }
#### void :Reset ()
{: aria-label='Functions' }

______
### ResetArmed ()
{: aria-label='Functions' }
#### void :ResetArmed ()
{: aria-label='Functions' }

______
### SetDoor ()
{: aria-label='Functions' }
#### void :SetDoor (integer state)
{: aria-label='Functions' }

______
### SetTooltip ()
{: aria-label='Functions' }
#### void :SetTooltip (string tooltip)
{: aria-label='Functions' }

______
### SetTooltipTitle ()
{: aria-label='Functions' }
#### void :SetTooltipTitle (string tooltip)
{: aria-label='Functions' }

___


## Fields
### aiming_required
{: aria-label='Variables' }
#### integer .aiming_required
{: aria-label='Variables' }

______
### animateDoor
{: aria-label='Variables' }
#### integer .animateDoor
{: aria-label='Variables' }

______
### bForceTooltip
{: aria-label='Variables' }
#### boolean .bForceTooltip
{: aria-label='Variables' }

______
### bHideMouse
{: aria-label='Variables' }
#### boolean .bHideMouse
{: aria-label='Variables' }

______
### bMoving
{: aria-label='Variables' }
#### boolean .bMoving
{: aria-label='Variables' }

______
### bSellingStuff
{: aria-label='Variables' }
#### boolean .bSellingStuff
{: aria-label='Variables' }

______
### iHacking
{: aria-label='Variables' }
#### integer .iHacking
{: aria-label='Variables' }

______
### iMindControlling
{: aria-label='Variables' }
#### integer .iMindControlling
{: aria-label='Variables' }

______
### iTeleporting
{: aria-label='Variables' }
#### integer .iTeleporting
{: aria-label='Variables' }

______
### invalidPointer
{: aria-label='Variables' }
#### [GL_Texture](../Graphics/GL_Texture) .invalidPointer
{: aria-label='Variables' }

______
### lastAddition
{: aria-label='Variables' }
#### [GL_Texture](../Graphics/GL_Texture) .lastAddition
{: aria-label='Variables' }

______
### lastIcon
{: aria-label='Variables' }
#### [GL_Texture](../Graphics/GL_Texture) .lastIcon
{: aria-label='Variables' }

______
### lastPosition
{: aria-label='Variables' }
#### [Point](../Hyperspace/Point) .lastPosition
{: aria-label='Variables' }

______
### lastTooltipText
{: aria-label='Variables' }
#### string .lastTooltipText
{: aria-label='Variables' }

______
### lastValid
{: aria-label='Variables' }
#### boolean .lastValid
{: aria-label='Variables' }

______
### newHover
{: aria-label='Variables' }
#### boolean .newHover
{: aria-label='Variables' }

______
### openDoor
{: aria-label='Variables' }
#### [Animation](../Hyperspace/Animation) .openDoor
{: aria-label='Variables' }

______
### overrideTooltipWidth
{: aria-label='Variables' }
#### integer .overrideTooltipWidth
{: aria-label='Variables' }

______
### position
{: aria-label='Variables' }
#### [Point](../Hyperspace/Point) .position
{: aria-label='Variables' }

______
### selling
{: aria-label='Variables' }
#### [GL_Texture](../Graphics/GL_Texture) .selling
{: aria-label='Variables' }

______
### staticTooltip
{: aria-label='Variables' }
#### [Point](../Hyperspace/Point) .staticTooltip
{: aria-label='Variables' }

______
### tooltip
{: aria-label='Variables' }
#### string .tooltip
{: aria-label='Variables' }

______
### tooltipTimer
{: aria-label='Variables' }
#### number .tooltipTimer
{: aria-label='Variables' }

______
### tooltipTitle
{: aria-label='Variables' }
#### string .tooltipTitle
{: aria-label='Variables' }

______
### valid
{: aria-label='Variables' }
#### boolean .valid
{: aria-label='Variables' }

______
### validPointer
{: aria-label='Variables' }
#### [GL_Texture](../Graphics/GL_Texture) .validPointer
{: aria-label='Variables' }

___
