---
layout: lua
title: Asteroid
lang: en
---

# Class "Asteroid"


Extends: [Projectile](../Hyperspace/Projectile) <- [Collideable](../Hyperspace/Collideable)


## Constructors
{: #Constructors .section}
### Asteroid ()
{: #Asteroid aria-label='Constructors' }
#### [Asteroid](../Hyperspace/Asteroid) Asteroid ([Pointf](../Hyperspace/Pointf) pos, integer destinationSpace)
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
### angle
{: #angle aria-label='Fields' }
#### number .angle
{: aria-label='Fields' }

___
### imageId
{: #imageId aria-label='Fields' }
#### [GL_Texture](../Graphics/GL_Texture) .imageId
{: aria-label='Fields' }

___
