---
layout: lua
title: BombProjectile
lang: en
---

# Class "BombProjectile"


Extends: [Projectile](../Hyperspace/Projectile) <- [Collideable](../Hyperspace/Collideable)


## Constructors
{: #Constructors .section}
### BombProjectile ()
{: #BombProjectile aria-label='Constructors' }
#### [BombProjectile](../Hyperspace/BombProjectile) BombProjectile ([Pointf](../Hyperspace/Pointf) _position, integer _ownerId, integer _targetId, [Pointf](../Hyperspace/Pointf) _target)
{: aria-label='Constructors' }

___





## Fields
{: #Fields .section}
<details markdown="1"><summary markdown="span">Inherited Fields</summary>


#### From [Projectile](Projectile)

| Type | Field |
| --- | --- |
| [Targetable](../Hyperspace/Targetable) | .[_targetable](Projectile#_targetable-) |
| boolean | .[bBroadcastTarget](Projectile#bBroadcastTarget-) |
| [GL_Color](../Graphics/GL_Color) | .[color](Projectile#color-) |
| integer | .[currentSpace](Projectile#currentSpace-) |
| [Damage](../Hyperspace/Damage) | .[damage](Projectile#damage-) |
| boolean | .[dead](Projectile#dead-) |
| [Animation](../Hyperspace/Animation) | .[death_animation](Projectile#death_animation-) |
| integer | .[destinationSpace](Projectile#destinationSpace-) |
| number | .[entryAngle](Projectile#entryAngle-) |
| [Projectile_Extend](../Hyperspace/Projectile_Extend) | .[extend](Projectile#extend-) |
| [AnimationTracker](../Hyperspace/AnimationTracker) | .[flashTracker](Projectile#flashTracker-) |
| [Animation](../Hyperspace/Animation) | .[flight_animation](Projectile#flight_animation-) |
| number | .[heading](Projectile#heading-) |
| string | .[hitShieldSound](Projectile#hitShieldSound-) |
| string | .[hitSolidSound](Projectile#hitSolidSound-) |
| boolean | .[hitTarget](Projectile#hitTarget-) |
| [Pointf](../Hyperspace/Pointf) | .[last_position](Projectile#last_position-) |
| number | .[lifespan](Projectile#lifespan-) |
| boolean | .[missed](Projectile#missed-) |
| integer | .[ownerId](Projectile#ownerId-) |
| boolean | .[passedTarget](Projectile#passedTarget-) |
| [Pointf](../Hyperspace/Pointf) | .[position](Projectile#position-) |
| uint | .[selfId](Projectile#selfId-) |
| [Pointf](../Hyperspace/Pointf) | .[speed](Projectile#speed-) |
| number | .[speed_magnitude](Projectile#speed_magnitude-) |
| boolean | .[startedDeath](Projectile#startedDeath-) |
| [Pointf](../Hyperspace/Pointf) | .[target](Projectile#target-) |
| integer | .[targetId](Projectile#targetId-) |

</details>
___
### bMissed
{: #bMissed aria-label='Fields' }
#### boolean .bMissed
{: aria-label='Fields' }

___
### bSuperShield
{: #bSuperShield aria-label='Fields' }
#### boolean .bSuperShield
{: aria-label='Fields' }

___
### explosiveDelay
{: #explosiveDelay aria-label='Fields' }
#### number .explosiveDelay
{: aria-label='Fields' }

___
### missMessage
{: #missMessage aria-label='Fields' }
#### DamageMessage .missMessage
{: aria-label='Fields' }

___
### superShieldBypass
{: #superShieldBypass aria-label='Fields' }
#### boolean .superShieldBypass
{: aria-label='Fields' }

___
