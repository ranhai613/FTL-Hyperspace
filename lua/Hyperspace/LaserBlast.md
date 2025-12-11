---
layout: lua
title: LaserBlast
lang: en
---

# Class "LaserBlast"


Extends: [Projectile](../Hyperspace/Projectile) <- [Collideable](../Hyperspace/Collideable)

Subclasses: [PDSFire](../Hyperspace/PDSFire)


## Constructors
{: #Constructors .section}
### LaserBlast ()
{: #LaserBlast aria-label='Constructors' }
#### [LaserBlast](../Hyperspace/LaserBlast) LaserBlast ([Pointf](../Hyperspace/Pointf) _position, integer _ownerId, integer _targetId, [Pointf](../Hyperspace/Pointf) _target)
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
### movingTarget
{: #movingTarget aria-label='Fields' }
#### [Targetable](../Hyperspace/Targetable) .movingTarget
{: aria-label='Fields' }

___
### spinAngle
{: #spinAngle aria-label='Fields' }
#### number .spinAngle
{: aria-label='Fields' }

___
### spinSpeed
{: #spinSpeed aria-label='Fields' }
#### number .spinSpeed
{: aria-label='Fields' }

___
