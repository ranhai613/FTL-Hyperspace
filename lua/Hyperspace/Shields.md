---
layout: lua
title: Shields
lang: en
---

# Class "Shields"

Extends: [ShipSystem](../Hyperspace/ShipSystem)


## Constructors
### Shields ()
{: aria-label='Constructors' }
#### [Shields](../Hyperspace/Shields) Shields (integer roomId, integer shipId, integer startingPower, string shieldFile)
{: aria-label='Constructors' }

___




## Methods
### AddSuperShield ()
{: aria-label='Methods' }
#### void :AddSuperShield ([Point](../Hyperspace/Point) pos)
{: aria-label='Methods' }

___
### CollisionReal ()
{: aria-label='Methods' }
#### [CollisionResponse](../Hyperspace/CollisionResponse) :CollisionReal (number x, number y, [Damage](../Hyperspace/Damage) damage, boolean force)
{: aria-label='Methods' }

___
### InstantCharge ()
{: aria-label='Methods' }
#### void :InstantCharge ()
{: aria-label='Methods' }

___
### SetBaseEllipse ()
{: aria-label='Methods' }
#### void :SetBaseEllipse ([Ellipse](../Hyperspace/Ellipse) ellipse)
{: aria-label='Methods' }

___
### SetHackingLevel ()
{: aria-label='Methods' }
#### void :SetHackingLevel (integer hackingLevel)
{: aria-label='Methods' }

___


## Fields
### bBarrierMode
{: aria-label='Fields' }
#### boolean .bBarrierMode
{: aria-label='Fields' }

___
### bEnemyPresent
{: aria-label='Fields' }
#### boolean .bEnemyPresent
{: aria-label='Fields' }

___
### bExcessChargeHack
{: aria-label='Fields' }
#### boolean .bExcessChargeHack
{: aria-label='Fields' }

___
### baseShield
{: aria-label='Fields' }
#### [Ellipse](../Hyperspace/Ellipse) .baseShield
{: aria-label='Fields' }

___
### center
{: aria-label='Fields' }
#### [Point](../Hyperspace/Point) .center
{: aria-label='Fields' }

___
### chargeTime
{: aria-label='Fields' }
#### number .chargeTime
{: aria-label='Fields' }

___
### ellipseRatio
{: aria-label='Fields' }
#### number .ellipseRatio
{: aria-label='Fields' }

___
### iHighlightedSide
{: aria-label='Fields' }
#### integer .iHighlightedSide
{: aria-label='Fields' }

___
### lastHitShieldLevel
{: aria-label='Fields' }
#### integer .lastHitShieldLevel
{: aria-label='Fields' }

___
### lastHitTimer
{: aria-label='Fields' }
#### number .lastHitTimer
{: aria-label='Fields' }

___
### shieldHits
{: aria-label='Fields' }
#### vector\<[Shields.ShieldAnimation](../Hyperspace/Shields.ShieldAnimation)\> .shieldHits
{: aria-label='Fields' }

___
### shieldImage
{: aria-label='Fields' }
#### [GL_Texture](../Graphics/GL_Texture) .shieldImage
{: aria-label='Fields' }

___
### shieldImageName
{: aria-label='Fields' }
#### string .shieldImageName
{: aria-label='Fields' }

___
### shieldPrimitive
{: aria-label='Fields' }
#### [GL_Primitive](../Graphics/GL_Primitive) .shieldPrimitive
{: aria-label='Fields' }

___
### shields
{: aria-label='Fields' }
#### [Shield](../Hyperspace/Shield) .shields
{: aria-label='Fields' }

___
### shieldsDown
{: aria-label='Fields' }
#### [AnimationTracker](../Hyperspace/AnimationTracker) .shieldsDown
{: aria-label='Fields' }

___
### shieldsDownPoint
{: aria-label='Fields' }
#### [Pointf](../Hyperspace/Pointf) .shieldsDownPoint
{: aria-label='Fields' }

___
### shieldsUp
{: aria-label='Fields' }
#### [AnimationTracker](../Hyperspace/AnimationTracker) .shieldsUp
{: aria-label='Fields' }

___
### shields_shutdown
{: aria-label='Fields' }
#### boolean .shields_shutdown
{: aria-label='Fields' }

___
### superShieldDown
{: aria-label='Fields' }
#### boolean .superShieldDown
{: aria-label='Fields' }

___
### superShieldUp
{: aria-label='Fields' }
#### [AnimationTracker](../Hyperspace/AnimationTracker) .superShieldUp
{: aria-label='Fields' }

___
### superUpLoc
{: aria-label='Fields' }
#### [Point](../Hyperspace/Point) .superUpLoc
{: aria-label='Fields' }

___
