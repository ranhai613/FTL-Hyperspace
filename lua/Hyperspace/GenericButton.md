---
layout: lua
title: GenericButton
lang: en
---

# Class "GenericButton"



Subclasses: [Button](../Hyperspace/Button), [TextButton](../Hyperspace/TextButton), [TextButton0](../Hyperspace/TextButton0)





## Methods
{: #Methods .lua-content-section}
### MouseMove ()
{: #MouseMove .lua-content-item aria-label='Methods' }
#### void :MouseMove (integer x, integer y, boolean silent)
{: aria-label='Methods' }

___
### OnClick ()
{: #OnClick .lua-content-item aria-label='Methods' }
#### void :OnClick ()
{: aria-label='Methods' }

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
### OnRightClick ()
{: #OnRightClick .lua-content-item aria-label='Methods' }
#### void :OnRightClick ()
{: aria-label='Methods' }

___
### OnTouch ()
{: #OnTouch .lua-content-item aria-label='Methods' }
#### void :OnTouch ()
{: aria-label='Methods' }

___
### Reset ()
{: #Reset .lua-content-item aria-label='Methods' }
#### void :Reset ()
{: aria-label='Methods' }

___
### ResetPrimitives ()
{: #ResetPrimitives .lua-content-item aria-label='Methods' }
#### void :ResetPrimitives ()
{: aria-label='Methods' }

___
### SetActive ()
{: #SetActive .lua-content-item aria-label='Methods' }
#### void :SetActive (boolean active)
{: aria-label='Methods' }

___
### SetHitBox ()
{: #SetHitBox .lua-content-item aria-label='Methods' }
#### void :SetHitBox ([Rect](../Hyperspace/Rect) rect)
{: aria-label='Methods' }

___
### SetLocation ()
{: #SetLocation .lua-content-item aria-label='Methods' }
#### void :SetLocation ([Point](../Hyperspace/Point) pos)
{: aria-label='Methods' }

___


## Fields
{: #Fields .lua-content-section}
### activeTouch
{: #activeTouch .lua-content-item aria-label='Fields' }
#### integer .activeTouch
{: aria-label='Fields' }

___
### allowAnyTouch
{: #allowAnyTouch .lua-content-item aria-label='Fields' }
#### boolean .allowAnyTouch
{: aria-label='Fields' }

___
### bActivated
{: #bActivated .lua-content-item aria-label='Fields' }
#### boolean .bActivated
{: aria-label='Fields' }

___
### bActive
{: #bActive .lua-content-item aria-label='Fields' }
#### boolean .bActive
{: aria-label='Fields' }

___
### bFlashing
{: #bFlashing .lua-content-item aria-label='Fields' }
#### boolean .bFlashing
{: aria-label='Fields' }

___
### bHover
{: #bHover .lua-content-item aria-label='Fields' }
#### boolean .bHover
{: aria-label='Fields' }

___
### bRenderOff
{: #bRenderOff .lua-content-item aria-label='Fields' }
#### boolean .bRenderOff
{: aria-label='Fields' }

___
### bRenderSelected
{: #bRenderSelected .lua-content-item aria-label='Fields' }
#### boolean .bRenderSelected
{: aria-label='Fields' }

___
### bSelected
{: #bSelected .lua-content-item aria-label='Fields' }
#### boolean .bSelected
{: aria-label='Fields' }

___
### flashing
{: #flashing .lua-content-item aria-label='Fields' }
#### [AnimationTracker](../Hyperspace/AnimationTracker) .flashing
{: aria-label='Fields' }

___
### hitbox (Read-only)
{: #hitbox .lua-content-item aria-label='Fields' }
#### [Rect](../Hyperspace/Rect) .hitbox
{: aria-label='Fields' }
Field is **read-only** but fields under this object may still be mutable.

___
### position (Read-only)
{: #position .lua-content-item aria-label='Fields' }
#### [Point](../Hyperspace/Point) .position
{: aria-label='Fields' }
Field is **read-only** but fields under this object may still be mutable.

___
### touchSelectable
{: #touchSelectable .lua-content-item aria-label='Fields' }
#### boolean .touchSelectable
{: aria-label='Fields' }

___
