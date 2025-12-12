---
layout: lua
title: FTLButton
lang: en
---

# Class "FTLButton"


Extends: [TextButton0](../Hyperspace/TextButton0) <- [GenericButton](../Hyperspace/GenericButton)





## Methods
{: #Methods .lua-content-section}
<details markdown="1"><summary id="InheritedMethods" class="lua-content-item" markdown="span">Inherited Methods</summary>


#### From [GenericButton](GenericButton)

| Return Type | Method |
| --- | --- |
| void | :[OnClick](GenericButton#OnClick) () |
| void | :[OnLoop](GenericButton#OnLoop) () |
| void | :[OnRightClick](GenericButton#OnRightClick) () |
| void | :[OnTouch](GenericButton#OnTouch) () |
| void | :[Reset](GenericButton#Reset) () |
| void | :[ResetPrimitives](GenericButton#ResetPrimitives) () |
| void | :[SetActive](GenericButton#SetActive) (boolean active) |
| void | :[SetHitBox](GenericButton#SetHitBox) ([Rect](../Hyperspace/Rect) rect) |
| void | :[SetLocation](GenericButton#SetLocation) ([Point](../Hyperspace/Point) pos) |

</details>
___
### MouseMove ()
{: #MouseMove .lua-content-item aria-label='Methods' }
#### void :MouseMove (integer mX, integer mY, boolean silent)
{: aria-label='Methods' }

___
### OnRender ()
{: #OnRender .lua-content-item aria-label='Methods' }
#### void :OnRender ()
{: aria-label='Methods' }

___


## Fields
{: #Fields .lua-content-section}
___
<details markdown="1"><summary id="InheritedFields" class="lua-content-item" markdown="span">Inherited Fields</summary>


#### From [GenericButton](GenericButton)

| Type | Field |
| --- | --- |
| integer | .[activeTouch](GenericButton#activeTouch) |
| boolean | .[allowAnyTouch](GenericButton#allowAnyTouch) |
| boolean | .[bActivated](GenericButton#bActivated) |
| boolean | .[bActive](GenericButton#bActive) |
| boolean | .[bFlashing](GenericButton#bFlashing) |
| boolean | .[bHover](GenericButton#bHover) |
| boolean | .[bRenderOff](GenericButton#bRenderOff) |
| boolean | .[bRenderSelected](GenericButton#bRenderSelected) |
| boolean | .[bSelected](GenericButton#bSelected) |
| [AnimationTracker](../Hyperspace/AnimationTracker) | .[flashing](GenericButton#flashing) |
| [Rect](../Hyperspace/Rect) | .[hitbox](GenericButton#hitbox) |
| [Point](../Hyperspace/Point) | .[position](GenericButton#position) |
| boolean | .[touchSelectable](GenericButton#touchSelectable) |

</details>

