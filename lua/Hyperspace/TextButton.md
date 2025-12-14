---
layout: lua
title: TextButton
lang: en
category: Class
---

# Class "TextButton"


Extends: [GenericButton](../Hyperspace/GenericButton)

<!-- Head content to be pulled from "lua-source-parts-inject/Hyperspace/TextButton/_head.md" -->


## Constructors
{: #Constructors .lua-content-section}
### TextButton ()
{: #TextButton .lua-content-item aria-label='Constructors' }
#### [TextButton](../Hyperspace/TextButton) TextButton ()
{: aria-label='Constructors' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/TextButton/TextButton().md" -->

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
| void | :[SetActive](GenericButton#SetActive) (boolean active) |
| void | :[SetHitBox](GenericButton#SetHitBox) ([Rect](../Hyperspace/Rect) rect) |
| void | :[SetLocation](GenericButton#SetLocation) ([Point](../Hyperspace/Point) pos) |

</details>

___
### OnInit ()
{: #OnInit .lua-content-item aria-label='Methods' }
#### void :OnInit ([Point](../Hyperspace/Point) pos, [Point](../Hyperspace/Point) size, integer cornerInset, [TextString](../Hyperspace/TextString) buttonLabel, integer font)
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/TextButton/OnInit(Hyperspace.Point,Hyperspace.Point,integer,Hyperspace.TextString,integer).md" -->

___
### OnRender ()
{: #OnRender .lua-content-item aria-label='Methods' }
#### void :OnRender ()
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/TextButton/OnRender().md" -->

___
### ResetPrimitives ()
{: #ResetPrimitives .lua-content-item aria-label='Methods' }
#### void :ResetPrimitives ()
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/TextButton/ResetPrimitives().md" -->

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


