---
layout: lua
title: ShipRepairDrone
lang: en
---

# Class "ShipRepairDrone"


Extends: [CombatDrone](../Hyperspace/CombatDrone) <- [SpaceDrone](../Hyperspace/SpaceDrone) <- [Drone](../Hyperspace/Drone)






## Fields
{: #Fields .section}
<details markdown="1"><summary markdown="span">Inherited Fields</summary>


#### From [CombatDrone](CombatDrone)

| Type | Field |
| --- | --- |
| CachedImage | .[drone_image_charging](CombatDrone#drone_image_charging-) |
| CachedImage | .[drone_image_off](CombatDrone#drone_image_off-) |
| CachedImage | .[drone_image_on](CombatDrone#drone_image_on-) |
| CachedImage | .[engine_image](CombatDrone#engine_image-) |
| number | .[heading](CombatDrone#heading-) |
| [Pointf](../Hyperspace/Pointf) | .[lastDestination](CombatDrone#lastDestination-) |
| number | .[oldHeading](CombatDrone#oldHeading-) |
| number | .[progressToDestination](CombatDrone#progressToDestination-) |

#### From [Drone](Drone)

| Type | Field |
| --- | --- |
| boolean | .[bDead](Drone#bDead-) |
| [DroneBlueprint](../Hyperspace/DroneBlueprint) | .[blueprint](Drone#blueprint-) |
| boolean | .[deployed](Drone#deployed-) |
| number | .[destroyedTimer](Drone#destroyedTimer-) |
| number | .[hackTime](Drone#hackTime-) |
| integer | .[iBonusPower](Drone#iBonusPower-) |
| integer | .[iHackLevel](Drone#iHackLevel-) |
| integer | .[iShipId](Drone#iShipId-) |
| integer | .[powerRequired](Drone#powerRequired-) |
| boolean | .[powered](Drone#powered-) |
| boolean | .[poweredAtLocation](Drone#poweredAtLocation-) |
| integer | .[selfId](Drone#selfId-) |
| integer | .[type](Drone#type-) |

#### From [SpaceDrone](SpaceDrone)

| Type | Field |
| --- | --- |
| [Collideable](../Hyperspace/Collideable) | .[_collideable](SpaceDrone#_collideable-) |
| [Targetable](../Hyperspace/Targetable) | .[_targetable](SpaceDrone#_targetable-) |
| number | .[additionalPause](SpaceDrone#additionalPause-) |
| number | .[aimingAngle](SpaceDrone#aimingAngle-) |
| boolean | .[bDisrupted](SpaceDrone#bDisrupted-) |
| boolean | .[bFire](SpaceDrone#bFire-) |
| boolean | .[bLoadedPosition](SpaceDrone#bLoadedPosition-) |
| [Pointf](../Hyperspace/Pointf) | .[beamCurrentTarget](SpaceDrone#beamCurrentTarget-) |
| [Pointf](../Hyperspace/Pointf) | .[beamFinalTarget](SpaceDrone#beamFinalTarget-) |
| number | .[beamSpeed](SpaceDrone#beamSpeed-) |
| [Pointf](../Hyperspace/Pointf) | .[currentLocation](SpaceDrone#currentLocation-) |
| integer | .[currentSpace](SpaceDrone#currentSpace-) |
| number | .[current_angle](SpaceDrone#current_angle-) |
| boolean | .[deployedLastFrame](SpaceDrone#deployedLastFrame-) |
| number | .[desiredAimingAngle](SpaceDrone#desiredAimingAngle-) |
| [Pointf](../Hyperspace/Pointf) | .[destinationLocation](SpaceDrone#destinationLocation-) |
| integer | .[destinationSpace](SpaceDrone#destinationSpace-) |
| [Animation](../Hyperspace/Animation) | .[explosion](SpaceDrone#explosion-) |
| number | .[hackAngle](SpaceDrone#hackAngle-) |
| [Animation](../Hyperspace/Animation) | .[hackSparks](SpaceDrone#hackSparks-) |
| number | .[ionStun](SpaceDrone#ionStun-) |
| number | .[lastAimingAngle](SpaceDrone#lastAimingAngle-) |
| [Pointf](../Hyperspace/Pointf) | .[lastLocation](SpaceDrone#lastLocation-) |
| integer | .[lifespan](SpaceDrone#lifespan-) |
| DamageMessage | .[message](SpaceDrone#message-) |
| [Targetable](../Hyperspace/Targetable) | .[movementTarget](SpaceDrone#movementTarget-) |
| number | .[pause](SpaceDrone#pause-) |
| [Pointf](../Hyperspace/Pointf) | .[pointTarget](SpaceDrone#pointTarget-) |
| boolean | .[poweredLastFrame](SpaceDrone#poweredLastFrame-) |
| [Pointf](../Hyperspace/Pointf) | .[speedVector](SpaceDrone#speedVector-) |
| [Pointf](../Hyperspace/Pointf) | .[targetLocation](SpaceDrone#targetLocation-) |
| [Pointf](../Hyperspace/Pointf) | .[targetSpeed](SpaceDrone#targetSpeed-) |
| [WeaponBlueprint](../Hyperspace/WeaponBlueprint) | .[weaponBlueprint](SpaceDrone#weaponBlueprint-) |
| number | .[weaponCooldown](SpaceDrone#weaponCooldown-) |
| [Targetable](../Hyperspace/Targetable) | .[weaponTarget](SpaceDrone#weaponTarget-) |
| [Animation](../Hyperspace/Animation) | .[weapon_animation](SpaceDrone#weapon_animation-) |

</details>
___
### repairBeam
{: #repairBeam aria-label='Fields' }
#### CachedImage .repairBeam
{: aria-label='Fields' }

___
### repairBeams
{: #repairBeams aria-label='Fields' }
#### vector\<number\> .repairBeams
{: aria-label='Fields' }

___
