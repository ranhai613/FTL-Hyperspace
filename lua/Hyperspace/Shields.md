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

______
### CollisionReal ()
{: aria-label='Methods' }
#### [CollisionResponse](../Hyperspace/CollisionResponse) :CollisionReal (number x, number y, [Damage](../Hyperspace/Damage) damage, boolean force)
{: aria-label='Methods' }

______
### InstantCharge ()
{: aria-label='Methods' }
#### void :InstantCharge ()
{: aria-label='Methods' }

______
### SetBaseEllipse ()
{: aria-label='Methods' }
#### void :SetBaseEllipse ([Ellipse](../Hyperspace/Ellipse) ellipse)
{: aria-label='Methods' }

______
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

______
### bEnemyPresent
{: aria-label='Fields' }
#### boolean .bEnemyPresent
{: aria-label='Fields' }

______
### bExcessChargeHack
{: aria-label='Fields' }
#### boolean .bExcessChargeHack
{: aria-label='Fields' }

______
### baseShield
{: aria-label='Fields' }
#### [Ellipse](../Hyperspace/Ellipse) .baseShield
{: aria-label='Fields' }

______
### center
{: aria-label='Fields' }
#### [Point](../Hyperspace/Point) .center
{: aria-label='Fields' }

______
### chargeTime
{: aria-label='Fields' }
#### number .chargeTime
{: aria-label='Fields' }

______
### ellipseRatio
{: aria-label='Fields' }
#### number .ellipseRatio
{: aria-label='Fields' }

______
### iHighlightedSide
{: aria-label='Fields' }
#### integer .iHighlightedSide
{: aria-label='Fields' }

______
### lastHitShieldLevel
{: aria-label='Fields' }
#### integer .lastHitShieldLevel
{: aria-label='Fields' }

______
### lastHitTimer
{: aria-label='Fields' }
#### number .lastHitTimer
{: aria-label='Fields' }

______
### shieldHits
{: aria-label='Fields' }
#### vector\<[Shields.ShieldAnimation](../Hyperspace/Shields.ShieldAnimation)\> .shieldHits
{: aria-label='Fields' }

______
### shieldImage
{: aria-label='Fields' }
#### [GL_Texture](../Graphics/GL_Texture) .shieldImage
{: aria-label='Fields' }

______
### shieldImageName
{: aria-label='Fields' }
#### string .shieldImageName
{: aria-label='Fields' }

______
### shieldPrimitive
{: aria-label='Fields' }
#### [GL_Primitive](../Graphics/GL_Primitive) .shieldPrimitive
{: aria-label='Fields' }

______
### shields
{: aria-label='Fields' }
#### [Shield](../Hyperspace/Shield) .shields
{: aria-label='Fields' }

______
### shieldsDown
{: aria-label='Fields' }
#### [AnimationTracker](../Hyperspace/AnimationTracker) .shieldsDown
{: aria-label='Fields' }

______
### shieldsDownPoint
{: aria-label='Fields' }
#### [Pointf](../Hyperspace/Pointf) .shieldsDownPoint
{: aria-label='Fields' }

______
### shieldsUp
{: aria-label='Fields' }
#### [AnimationTracker](../Hyperspace/AnimationTracker) .shieldsUp
{: aria-label='Fields' }

______
### shields_shutdown
{: aria-label='Fields' }
#### boolean .shields_shutdown
{: aria-label='Fields' }

______
### superShieldDown
{: aria-label='Fields' }
#### boolean .superShieldDown
{: aria-label='Fields' }

______
### superShieldUp
{: aria-label='Fields' }
#### [AnimationTracker](../Hyperspace/AnimationTracker) .superShieldUp
{: aria-label='Fields' }

______
### superUpLoc
{: aria-label='Fields' }
#### [Point](../Hyperspace/Point) .superUpLoc
{: aria-label='Fields' }

___
