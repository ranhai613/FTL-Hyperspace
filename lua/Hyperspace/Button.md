---
layout: lua
title: Button
lang: en
---

# Class "Button"


Extends: [GenericButton](../Hyperspace/GenericButton)


## Constructors
{: #Constructors .section}
### Button ()
{: #Button aria-label='Constructors' }
#### [Button](../Hyperspace/Button) Button ()
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
| void | :[ResetPrimitives](GenericButton#ResetPrimitives) () |
| void | :[SetActive](GenericButton#SetActive) (boolean active) |
| void | :[SetHitBox](GenericButton#SetHitBox) ([Rect](../Hyperspace/Rect) rect) |

</details>
___
### OnInit ()
{: #OnInit aria-label='Methods' }
#### void :OnInit (string img, [Point](../Hyperspace/Point) pos)
{: aria-label='Methods' }

___
### OnRender ()
{: #OnRender aria-label='Methods' }
#### void :OnRender ()
{: aria-label='Methods' }

___
### SetActiveImage ()
{: #SetActiveImage aria-label='Methods' }
#### void :SetActiveImage ([GL_Texture](../Graphics/GL_Texture) texture)
{: aria-label='Methods' }

___
### SetImageBase ()
{: #SetImageBase aria-label='Methods' }
#### void :SetImageBase (string imageBase)
{: aria-label='Methods' }

___
### SetInactiveImage ()
{: #SetInactiveImage aria-label='Methods' }
#### void :SetInactiveImage ([GL_Texture](../Graphics/GL_Texture) texture)
{: aria-label='Methods' }

___
### SetLocation ()
{: #SetLocation aria-label='Methods' }
#### void :SetLocation ([Point](../Hyperspace/Point) pos)
{: aria-label='Methods' }

___


## Fields
{: #Fields .section}
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
___
### bMirror
{: #bMirror aria-label='Fields' }
#### boolean .bMirror
{: aria-label='Fields' }

___
### imageSize
{: #imageSize aria-label='Fields' }
#### [Point](../Hyperspace/Point) .imageSize
{: aria-label='Fields' }

___
### images
{: #images aria-label='Fields' }
#### [GL_Texture[]](../Graphics/GL_Texture) .images
{: aria-label='Fields' }

___
### primitives
{: #primitives aria-label='Fields' }
#### [GL_Primitive[]](../Graphics/GL_Primitive) .primitives
{: aria-label='Fields' }

___
