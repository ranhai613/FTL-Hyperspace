---
layout: lua
title: PDSFire
lang: en
---

# Class "PDSFire"


Extends: [LaserBlast](../Hyperspace/LaserBlast) <- [Projectile](../Hyperspace/Projectile) <- [Collideable](../Hyperspace/Collideable)


## Constructors
{: #Constructors .section}
### PDSFire ()
{: #PDSFire aria-label='Constructors' }
#### [PDSFire](../Hyperspace/PDSFire) PDSFire ([Point](../Hyperspace/Point) pos, integer destinationSpace, [Pointf](../Hyperspace/Pointf) destination)
{: aria-label='Constructors' }

___





## Fields
{: #Fields .section}
<details markdown="1"><summary markdown="span">Inherited Fields</summary>


#### From [LaserBlast](LaserBlast)

| Type | Field |
| --- | --- |
| [Targetable](../Hyperspace/Targetable) | .[movingTarget](LaserBlast#movingTarget-) |
| number | .[spinAngle](LaserBlast#spinAngle-) |
| number | .[spinSpeed](LaserBlast#spinSpeed-) |

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
| integer | .[ownerId](Projectile#ownerId-) |
| [Pointf](../Hyperspace/Pointf) | .[position](Projectile#position-) |
| uint | .[selfId](Projectile#selfId-) |
| [Pointf](../Hyperspace/Pointf) | .[speed](Projectile#speed-) |
| number | .[speed_magnitude](Projectile#speed_magnitude-) |
| boolean | .[startedDeath](Projectile#startedDeath-) |
| [Pointf](../Hyperspace/Pointf) | .[target](Projectile#target-) |
| integer | .[targetId](Projectile#targetId-) |

</details>
___
### currentScale
{: #currentScale aria-label='Fields' }
#### number .currentScale
{: aria-label='Fields' }

___
### explosionAnimation
{: #explosionAnimation aria-label='Fields' }
#### [Animation](../Hyperspace/Animation) .explosionAnimation
{: aria-label='Fields' }

___
### missed
{: #missed aria-label='Fields' }
#### boolean .missed
{: aria-label='Fields' }

___
### passedTarget
{: #passedTarget aria-label='Fields' }
#### boolean .passedTarget
{: aria-label='Fields' }

___
### startPoint
{: #startPoint aria-label='Fields' }
#### [Pointf](../Hyperspace/Pointf) .startPoint
{: aria-label='Fields' }

___
