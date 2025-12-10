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
{: aria-label='Functions' }
#### void :AddSuperShield ([Point](../Hyperspace/Point) pos)
{: aria-label='Functions' }

______
### CollisionReal ()
{: aria-label='Functions' }
#### [CollisionResponse](../Hyperspace/CollisionResponse) :CollisionReal (number x, number y, [Damage](../Hyperspace/Damage) damage, boolean force)
{: aria-label='Functions' }

______
### InstantCharge ()
{: aria-label='Functions' }
#### void :InstantCharge ()
{: aria-label='Functions' }

______
### SetBaseEllipse ()
{: aria-label='Functions' }
#### void :SetBaseEllipse ([Ellipse](../Hyperspace/Ellipse) ellipse)
{: aria-label='Functions' }

______
### SetHackingLevel ()
{: aria-label='Functions' }
#### void :SetHackingLevel (integer hackingLevel)
{: aria-label='Functions' }

___


## Fields
### bBarrierMode
{: aria-label='Variables' }
#### boolean .bBarrierMode
{: aria-label='Variables' }

______
### bEnemyPresent
{: aria-label='Variables' }
#### boolean .bEnemyPresent
{: aria-label='Variables' }

______
### bExcessChargeHack
{: aria-label='Variables' }
#### boolean .bExcessChargeHack
{: aria-label='Variables' }

______
### baseShield
{: aria-label='Variables' }
#### [Ellipse](../Hyperspace/Ellipse) .baseShield
{: aria-label='Variables' }

______
### center
{: aria-label='Variables' }
#### [Point](../Hyperspace/Point) .center
{: aria-label='Variables' }

______
### chargeTime
{: aria-label='Variables' }
#### number .chargeTime
{: aria-label='Variables' }

______
### ellipseRatio
{: aria-label='Variables' }
#### number .ellipseRatio
{: aria-label='Variables' }

______
### iHighlightedSide
{: aria-label='Variables' }
#### integer .iHighlightedSide
{: aria-label='Variables' }

______
### lastHitShieldLevel
{: aria-label='Variables' }
#### integer .lastHitShieldLevel
{: aria-label='Variables' }

______
### lastHitTimer
{: aria-label='Variables' }
#### number .lastHitTimer
{: aria-label='Variables' }

______
### shieldHits
{: aria-label='Variables' }
#### vector\<[Shields.ShieldAnimation](../Hyperspace/Shields.ShieldAnimation)\> .shieldHits
{: aria-label='Variables' }

______
### shieldImage
{: aria-label='Variables' }
#### [GL_Texture](../Graphics/GL_Texture) .shieldImage
{: aria-label='Variables' }

______
### shieldImageName
{: aria-label='Variables' }
#### string .shieldImageName
{: aria-label='Variables' }

______
### shieldPrimitive
{: aria-label='Variables' }
#### [GL_Primitive](../Graphics/GL_Primitive) .shieldPrimitive
{: aria-label='Variables' }

______
### shields
{: aria-label='Variables' }
#### [Shield](../Hyperspace/Shield) .shields
{: aria-label='Variables' }

______
### shieldsDown
{: aria-label='Variables' }
#### [AnimationTracker](../Hyperspace/AnimationTracker) .shieldsDown
{: aria-label='Variables' }

______
### shieldsDownPoint
{: aria-label='Variables' }
#### [Pointf](../Hyperspace/Pointf) .shieldsDownPoint
{: aria-label='Variables' }

______
### shieldsUp
{: aria-label='Variables' }
#### [AnimationTracker](../Hyperspace/AnimationTracker) .shieldsUp
{: aria-label='Variables' }

______
### shields_shutdown
{: aria-label='Variables' }
#### boolean .shields_shutdown
{: aria-label='Variables' }

______
### superShieldDown
{: aria-label='Variables' }
#### boolean .superShieldDown
{: aria-label='Variables' }

______
### superShieldUp
{: aria-label='Variables' }
#### [AnimationTracker](../Hyperspace/AnimationTracker) .superShieldUp
{: aria-label='Variables' }

______
### superUpLoc
{: aria-label='Variables' }
#### [Point](../Hyperspace/Point) .superUpLoc
{: aria-label='Variables' }

___
