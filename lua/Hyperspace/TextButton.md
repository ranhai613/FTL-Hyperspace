---
layout: lua
title: TextButton
lang: en
---

# Class "TextButton"


Extends: [GenericButton](../Hyperspace/GenericButton)


## Constructors
{: #Constructors .section}
### TextButton ()
{: #TextButton aria-label='Constructors' }
#### [TextButton](../Hyperspace/TextButton) TextButton ()
{: aria-label='Constructors' }

___




## Methods
{: #Methods .section}
<details markdown="1"><summary markdown="span">Inherited Methods</summary>


#### From [GenericButton](GenericButton)

| Return Type | Method |
| --- | --- |
| void | :[MouseMove](GenericButton#MouseMove) (integer x, integer y, boolean silent) |
| void | :[OnClick](GenericButton#OnClick) () |
| void | :[OnLoop](GenericButton#OnLoop) () |
| void | :[OnRightClick](GenericButton#OnRightClick) () |
| void | :[OnTouch](GenericButton#OnTouch) () |
| void | :[Reset](GenericButton#Reset) () |
| void | :[SetActive](GenericButton#SetActive) (boolean active) |
| void | :[SetHitBox](GenericButton#SetHitBox) ([Rect](../Hyperspace/Rect) rect) |
| void | :[SetLocation](GenericButton#SetLocation) ([Point](../Hyperspace/Point) pos) |

</details>
___
### OnInit ()
{: #OnInit aria-label='Methods' }
#### void :OnInit ([Point](../Hyperspace/Point) pos, [Point](../Hyperspace/Point) size, integer cornerInset, [TextString](../Hyperspace/TextString) buttonLabel, integer font)
{: aria-label='Methods' }

___
### OnRender ()
{: #OnRender aria-label='Methods' }
#### void :OnRender ()
{: aria-label='Methods' }

___
### ResetPrimitives ()
{: #ResetPrimitives aria-label='Methods' }
#### void :ResetPrimitives ()
{: aria-label='Methods' }

___


## Fields
{: #Fields .section}
___
<details markdown="1"><summary markdown="span">Inherited Fields</summary>


#### From [GenericButton](GenericButton)

| Type | Field |
| --- | --- |
| integer | .[activeTouch](GenericButton#activeTouch-) |
| boolean | .[allowAnyTouch](GenericButton#allowAnyTouch-) |
| boolean | .[bActivated](GenericButton#bActivated-) |
| boolean | .[bActive](GenericButton#bActive-) |
| boolean | .[bFlashing](GenericButton#bFlashing-) |
| boolean | .[bHover](GenericButton#bHover-) |
| boolean | .[bRenderOff](GenericButton#bRenderOff-) |
| boolean | .[bRenderSelected](GenericButton#bRenderSelected-) |
| boolean | .[bSelected](GenericButton#bSelected-) |
| [AnimationTracker](../Hyperspace/AnimationTracker) | .[flashing](GenericButton#flashing-) |
| [Rect](../Hyperspace/Rect) | .[hitbox](GenericButton#hitbox-) |
| [Point](../Hyperspace/Point) | .[position](GenericButton#position-) |
| boolean | .[touchSelectable](GenericButton#touchSelectable-) |

</details>

