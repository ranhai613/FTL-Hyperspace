---
layout: lua
title: GenericButton
lang: en
category: Class
---

# Class "GenericButton"



Subclasses: [Button](../Hyperspace/Button), [TextButton](../Hyperspace/TextButton), [TextButton0](../Hyperspace/TextButton0)

<!-- Head content to be pulled from "lua-source-parts-inject/Hyperspace/GenericButton/_head.md" -->





## Methods
{: #Methods .lua-content-section}
### MouseMove ()
{: #MouseMove .lua-content-item aria-label='Methods' }
#### void :MouseMove (integer x, integer y, boolean silent)
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/GenericButton/MouseMove(integer,integer,boolean).md" -->

___
### OnClick ()
{: #OnClick .lua-content-item aria-label='Methods' }
#### void :OnClick ()
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/GenericButton/OnClick().md" -->

___
### OnLoop ()
{: #OnLoop .lua-content-item aria-label='Methods' }
#### void :OnLoop ()
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/GenericButton/OnLoop().md" -->

___
### OnRender ()
{: #OnRender .lua-content-item aria-label='Methods' }
#### void :OnRender ()
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/GenericButton/OnRender().md" -->

___
### OnRightClick ()
{: #OnRightClick .lua-content-item aria-label='Methods' }
#### void :OnRightClick ()
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/GenericButton/OnRightClick().md" -->

___
### OnTouch ()
{: #OnTouch .lua-content-item aria-label='Methods' }
#### void :OnTouch ()
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/GenericButton/OnTouch().md" -->

___
### Reset ()
{: #Reset .lua-content-item aria-label='Methods' }
#### void :Reset ()
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/GenericButton/Reset().md" -->

___
### ResetPrimitives ()
{: #ResetPrimitives .lua-content-item aria-label='Methods' }
#### void :ResetPrimitives ()
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/GenericButton/ResetPrimitives().md" -->

___
### SetActive ()
{: #SetActive .lua-content-item aria-label='Methods' }
#### void :SetActive (boolean active)
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/GenericButton/SetActive(boolean).md" -->

___
### SetHitBox ()
{: #SetHitBox .lua-content-item aria-label='Methods' }
#### void :SetHitBox ([Rect](../Hyperspace/Rect) rect)
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/GenericButton/SetHitBox(Hyperspace.Rect).md" -->

___
### SetLocation ()
{: #SetLocation .lua-content-item aria-label='Methods' }
#### void :SetLocation ([Point](../Hyperspace/Point) pos)
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/GenericButton/SetLocation(Hyperspace.Point).md" -->

___


## Fields
{: #Fields .lua-content-section}
### activeTouch
{: #activeTouch .lua-content-item aria-label='Fields' }
#### integer .activeTouch
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/GenericButton/activeTouch.md" -->

___
### allowAnyTouch
{: #allowAnyTouch .lua-content-item aria-label='Fields' }
#### boolean .allowAnyTouch
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/GenericButton/allowAnyTouch.md" -->

___
### bActivated
{: #bActivated .lua-content-item aria-label='Fields' }
#### boolean .bActivated
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/GenericButton/bActivated.md" -->

___
### bActive
{: #bActive .lua-content-item aria-label='Fields' }
#### boolean .bActive
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/GenericButton/bActive.md" -->

___
### bFlashing
{: #bFlashing .lua-content-item aria-label='Fields' }
#### boolean .bFlashing
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/GenericButton/bFlashing.md" -->

___
### bHover
{: #bHover .lua-content-item aria-label='Fields' }
#### boolean .bHover
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/GenericButton/bHover.md" -->

___
### bRenderOff
{: #bRenderOff .lua-content-item aria-label='Fields' }
#### boolean .bRenderOff
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/GenericButton/bRenderOff.md" -->

___
### bRenderSelected
{: #bRenderSelected .lua-content-item aria-label='Fields' }
#### boolean .bRenderSelected
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/GenericButton/bRenderSelected.md" -->

___
### bSelected
{: #bSelected .lua-content-item aria-label='Fields' }
#### boolean .bSelected
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/GenericButton/bSelected.md" -->

___
### flashing
{: #flashing .lua-content-item aria-label='Fields' }
#### [AnimationTracker](../Hyperspace/AnimationTracker) .flashing
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/GenericButton/flashing.md" -->

___
### hitbox (Read-only)
{: #hitbox .lua-content-item aria-label='Fields' }
#### [Rect](../Hyperspace/Rect) .hitbox
{: aria-label='Fields' }
<!-- Content pulled from "lua-source-parts-inject/Hyperspace/GenericButton/hitbox.md" -->
Field is **read-only** but fields under this object may still be mutable.
<!-- End of content -->

___
### position (Read-only)
{: #position .lua-content-item aria-label='Fields' }
#### [Point](../Hyperspace/Point) .position
{: aria-label='Fields' }
<!-- Content pulled from "lua-source-parts-inject/Hyperspace/GenericButton/position.md" -->
Field is **read-only** but fields under this object may still be mutable.
<!-- End of content -->

___
### touchSelectable
{: #touchSelectable .lua-content-item aria-label='Fields' }
#### boolean .touchSelectable
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/GenericButton/touchSelectable.md" -->

___
