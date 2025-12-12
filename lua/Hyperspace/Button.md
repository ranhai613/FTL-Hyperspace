---
layout: lua
title: Button
lang: en
---

# Class "Button"


Extends: [GenericButton](../Hyperspace/GenericButton)


## Constructors
{: #Constructors .lua-content-section}
### Button ()
{: #Button .lua-content-item aria-label='Constructors' }
#### [Button](../Hyperspace/Button) Button ()
{: aria-label='Constructors' }

___




## Methods
{: #Methods .lua-content-section}
<details markdown="1"><summary id="InheritedMethods" class="lua-content-item" markdown="span">Inherited Methods</summary>


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
{: #OnInit .lua-content-item aria-label='Methods' }
#### void :OnInit (string img, [Point](../Hyperspace/Point) pos)
{: aria-label='Methods' }

___
### OnRender ()
{: #OnRender .lua-content-item aria-label='Methods' }
#### void :OnRender ()
{: aria-label='Methods' }

___
### SetActiveImage ()
{: #SetActiveImage .lua-content-item aria-label='Methods' }
#### void :SetActiveImage ([GL_Texture](../Graphics/GL_Texture) texture)
{: aria-label='Methods' }

___
### SetImageBase ()
{: #SetImageBase .lua-content-item aria-label='Methods' }
#### void :SetImageBase (string imageBase)
{: aria-label='Methods' }

___
### SetInactiveImage ()
{: #SetInactiveImage .lua-content-item aria-label='Methods' }
#### void :SetInactiveImage ([GL_Texture](../Graphics/GL_Texture) texture)
{: aria-label='Methods' }

___
### SetLocation ()
{: #SetLocation .lua-content-item aria-label='Methods' }
#### void :SetLocation ([Point](../Hyperspace/Point) pos)
{: aria-label='Methods' }

___


## Fields
{: #Fields .lua-content-section}
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
___
### bMirror
{: #bMirror .lua-content-item aria-label='Fields' }
#### boolean .bMirror
{: aria-label='Fields' }

___
### imageSize
{: #imageSize .lua-content-item aria-label='Fields' }
#### [Point](../Hyperspace/Point) .imageSize
{: aria-label='Fields' }

___
### images
{: #images .lua-content-item aria-label='Fields' }
#### [GL_Texture[]](../Graphics/GL_Texture) .images
{: aria-label='Fields' }

___
### primitives
{: #primitives .lua-content-item aria-label='Fields' }
#### [GL_Primitive[]](../Graphics/GL_Primitive) .primitives
{: aria-label='Fields' }

___
