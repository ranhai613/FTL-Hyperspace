---
layout: lua
title: Button
lang: en
category: Class
---

# Class "Button"


Extends: [GenericButton](../Hyperspace/GenericButton)

<!-- Head content to be pulled from "lua-source-parts-inject/Hyperspace/Button/_head.md" -->


## Constructors
{: #Constructors .lua-content-section}
### Button ()
{: #Button .lua-content-item aria-label='Constructors' }
#### [Button](../Hyperspace/Button) Button ()
{: aria-label='Constructors' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/Button/Button().md" -->

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
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/Button/OnInit(string,Hyperspace.Point).md" -->

___
### OnRender ()
{: #OnRender .lua-content-item aria-label='Methods' }
#### void :OnRender ()
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/Button/OnRender().md" -->

___
### SetActiveImage ()
{: #SetActiveImage .lua-content-item aria-label='Methods' }
#### void :SetActiveImage ([GL_Texture](../Graphics/GL_Texture) texture)
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/Button/SetActiveImage(Graphics.GL_Texture).md" -->

___
### SetImageBase ()
{: #SetImageBase .lua-content-item aria-label='Methods' }
#### void :SetImageBase (string imageBase)
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/Button/SetImageBase(string).md" -->

___
### SetInactiveImage ()
{: #SetInactiveImage .lua-content-item aria-label='Methods' }
#### void :SetInactiveImage ([GL_Texture](../Graphics/GL_Texture) texture)
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/Button/SetInactiveImage(Graphics.GL_Texture).md" -->

___
### SetLocation ()
{: #SetLocation .lua-content-item aria-label='Methods' }
#### void :SetLocation ([Point](../Hyperspace/Point) pos)
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/Button/SetLocation(Hyperspace.Point).md" -->

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
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/Button/bMirror.md" -->

___
### imageSize
{: #imageSize .lua-content-item aria-label='Fields' }
#### [Point](../Hyperspace/Point) .imageSize
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/Button/imageSize.md" -->

___
### images
{: #images .lua-content-item aria-label='Fields' }
#### [GL_Texture[]](../Graphics/GL_Texture) .images
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/Button/images.md" -->

___
### primitives
{: #primitives .lua-content-item aria-label='Fields' }
#### [GL_Primitive[]](../Graphics/GL_Primitive) .primitives
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/Button/primitives.md" -->

___
