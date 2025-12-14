---
layout: lua
title: HackingDrone
lang: en
category: Class
---

# Class "HackingDrone"


Extends: [SpaceDrone](../Hyperspace/SpaceDrone) <- [Drone](../Hyperspace/Drone)


## Constructors
{: #Constructors .lua-content-section}
### HackingDrone ()
{: #HackingDrone .lua-content-item aria-label='Constructors' }
#### [HackingDrone](../Hyperspace/HackingDrone) HackingDrone ()
{: aria-label='Constructors' }

___




## Methods
{: #Methods .lua-content-section}
<details markdown="1"><summary id="InheritedMethods" class="lua-content-item" markdown="span">Inherited Methods</summary>


#### From [Drone](Drone)

| Return Type | Method |
| --- | --- |
| void | :[BlowUp](Drone#BlowUp) (boolean silent) |
| boolean | :[CanBeDeployed](Drone#CanBeDeployed) () |
| boolean | :[CanBeRecovered](Drone#CanBeRecovered) () |
| boolean | :[Destroyed](Drone#Destroyed) () |
| boolean | :[GetDeployed](Drone#GetDeployed) () |
| integer | :[GetDroneHealth](Drone#GetDroneHealth) () |
| [Slot](../Hyperspace/Slot) | :[GetDroneSlot](Drone#GetDroneSlot) ([Drone](../Hyperspace/Drone) drone) |
| string | :[GetName](Drone#GetName) ([Drone](../Hyperspace/Drone) drone) |
| boolean | :[GetPowered](Drone#GetPowered) () |
| integer | :[GetRequiredPower](Drone#GetRequiredPower) () |
| boolean | :[GetStunned](Drone#GetStunned) () |
| [Point](../Hyperspace/Point) | :[GetWorldLocation](Drone#GetWorldLocation) () |
| void | :[LoadState](Drone#LoadState) (integer fh) |
| boolean | :[NeedsRoom](Drone#NeedsRoom) () |
| void | :[OnDestroy](Drone#OnDestroy) () |
| void | :[OnInit](Drone#OnInit) () |
| boolean | :[RecallOnJump](Drone#RecallOnJump) () |
| void | :[RenderIcon](Drone#RenderIcon) () |
| void | :[SaveState](Drone#SaveState) (integer fh) |
| void | :[SetCurrentShip](Drone#SetCurrentShip) (integer shipId) |
| void | :[SetDestroyed](Drone#SetDestroyed) (boolean dead, boolean setTimer) |
| void | :[SetHacked](Drone#SetHacked) (integer level) |
| void | :[SetInstantPowered](Drone#SetInstantPowered) () |
| void | :[SetPowered](Drone#SetPowered) (boolean _powered) |
| void | :[SetSlot](Drone#SetSlot) (integer room, integer slot) |
| void | :[SetWorldLocation](Drone#SetWorldLocation) ([Point](../Hyperspace/Point) point) |

#### From [SpaceDrone](SpaceDrone)

| Return Type | Method |
| --- | --- |
| boolean | :[DamageArea](SpaceDrone#DamageArea) ([Pointf](../Hyperspace/Pointf) pos, [Damage](../Hyperspace/Damage) damage, boolean unk) |
| boolean | :[DamageBeam](SpaceDrone#DamageBeam) ([Pointf](../Hyperspace/Pointf) pos1, [Pointf](../Hyperspace/Pointf) pos2, [Damage](../Hyperspace/Damage) damage) |
| BoarderDrone | :[GetBoardingDrone](SpaceDrone#GetBoardingDrone) () |
| [Projectile](../Hyperspace/Projectile) | :[GetNextProjectile](SpaceDrone#GetNextProjectile) () |
| integer | :[GetOwnerId](SpaceDrone#GetOwnerId) () |
| [Pointf](../Hyperspace/Pointf) | :[GetRandomTargettingPoint](SpaceDrone#GetRandomTargettingPoint) (boolean unk) |
| integer | :[GetSelfId](SpaceDrone#GetSelfId) () |
| [Ellipse](../Hyperspace/Ellipse) | :[GetShieldShape](SpaceDrone#GetShieldShape) ([SpaceDrone](../Hyperspace/SpaceDrone) drone) |
| integer | :[GetSpaceId](SpaceDrone#GetSpaceId) () |
| [Pointf](../Hyperspace/Pointf) | :[GetSpeed](SpaceDrone#GetSpeed) () |
| string | :[GetTooltip](SpaceDrone#GetTooltip) ([SpaceDrone](../Hyperspace/SpaceDrone) drone) |
| number | :[GetWeaponCooldown](SpaceDrone#GetWeaponCooldown) () |
| [Pointf](../Hyperspace/Pointf) | :[GetWorldCenterPoint](SpaceDrone#GetWorldCenterPoint) () |
| boolean | :[HasTarget](SpaceDrone#HasTarget) () |
| boolean | :[HideUnderOwner](SpaceDrone#HideUnderOwner) () |
| void | :[MouseMove](SpaceDrone#MouseMove) (integer mX, integer mY) |
| void | :[OnRender](SpaceDrone#OnRender) (integer space) |
| void | :[PickDestination](SpaceDrone#PickDestination) () |
| void | :[PickTarget](SpaceDrone#PickTarget) () |
| void | :[RandomizeStartingPosition](SpaceDrone#RandomizeStartingPosition) () |
| void | :[RenderDrone](SpaceDrone#RenderDrone) () |
| void | :[SetCurrentLocation](SpaceDrone#SetCurrentLocation) ([Pointf](../Hyperspace/Pointf) pos) |
| void | :[SetDeployed](SpaceDrone#SetDeployed) (boolean deployed) |
| void | :[SetWeaponTarget](SpaceDrone#SetWeaponTarget) ([Targetable](../Hyperspace/Targetable) target) |
| number | :[UpdateAimingAngle](SpaceDrone#UpdateAimingAngle) ([Pointf](../Hyperspace/Pointf) location, number percentage, number forceDesired) |
| boolean | :[ValidTarget](SpaceDrone#ValidTarget) () |
| boolean | :[ValidTargetObject](SpaceDrone#ValidTargetObject) ([Targetable](../Hyperspace/Targetable) target) |

</details>

___
### CollisionMoving ()
{: #CollisionMoving .lua-content-item aria-label='Methods' }
#### [CollisionResponse](../Hyperspace/CollisionResponse) :CollisionMoving ([Pointf](../Hyperspace/Pointf) start, [Pointf](../Hyperspace/Pointf) finish, [Damage](../Hyperspace/Damage) damage, boolean raytrace)
{: aria-label='Methods' }

___
### OnLoop ()
{: #OnLoop .lua-content-item aria-label='Methods' }
#### void :OnLoop ()
{: aria-label='Methods' }

___
### SetMovementTarget ()
{: #SetMovementTarget .lua-content-item aria-label='Methods' }
#### void :SetMovementTarget ([Targetable](../Hyperspace/Targetable) target)
{: aria-label='Methods' }

___


## Fields
{: #Fields .lua-content-section}
<details markdown="1"><summary id="InheritedFields" class="lua-content-item" markdown="span">Inherited Fields</summary>


#### From [Drone](Drone)

| Type | Field |
| --- | --- |
| boolean | .[bDead](Drone#bDead) |
| [DroneBlueprint](../Hyperspace/DroneBlueprint) | .[blueprint](Drone#blueprint) |
| boolean | .[deployed](Drone#deployed) |
| number | .[destroyedTimer](Drone#destroyedTimer) |
| number | .[hackTime](Drone#hackTime) |
| integer | .[iBonusPower](Drone#iBonusPower) |
| integer | .[iHackLevel](Drone#iHackLevel) |
| integer | .[iShipId](Drone#iShipId) |
| integer | .[powerRequired](Drone#powerRequired) |
| boolean | .[powered](Drone#powered) |
| boolean | .[poweredAtLocation](Drone#poweredAtLocation) |
| integer | .[selfId](Drone#selfId) |
| integer | .[type](Drone#type) |

#### From [SpaceDrone](SpaceDrone)

| Type | Field |
| --- | --- |
| [Collideable](../Hyperspace/Collideable) | .[_collideable](SpaceDrone#_collideable) |
| [Targetable](../Hyperspace/Targetable) | .[_targetable](SpaceDrone#_targetable) |
| number | .[additionalPause](SpaceDrone#additionalPause) |
| number | .[aimingAngle](SpaceDrone#aimingAngle) |
| boolean | .[bDisrupted](SpaceDrone#bDisrupted) |
| boolean | .[bFire](SpaceDrone#bFire) |
| boolean | .[bLoadedPosition](SpaceDrone#bLoadedPosition) |
| [Pointf](../Hyperspace/Pointf) | .[beamCurrentTarget](SpaceDrone#beamCurrentTarget) |
| [Pointf](../Hyperspace/Pointf) | .[beamFinalTarget](SpaceDrone#beamFinalTarget) |
| number | .[beamSpeed](SpaceDrone#beamSpeed) |
| [Pointf](../Hyperspace/Pointf) | .[currentLocation](SpaceDrone#currentLocation) |
| integer | .[currentSpace](SpaceDrone#currentSpace) |
| number | .[current_angle](SpaceDrone#current_angle) |
| boolean | .[deployedLastFrame](SpaceDrone#deployedLastFrame) |
| number | .[desiredAimingAngle](SpaceDrone#desiredAimingAngle) |
| [Pointf](../Hyperspace/Pointf) | .[destinationLocation](SpaceDrone#destinationLocation) |
| integer | .[destinationSpace](SpaceDrone#destinationSpace) |
| number | .[hackAngle](SpaceDrone#hackAngle) |
| [Animation](../Hyperspace/Animation) | .[hackSparks](SpaceDrone#hackSparks) |
| number | .[ionStun](SpaceDrone#ionStun) |
| number | .[lastAimingAngle](SpaceDrone#lastAimingAngle) |
| [Pointf](../Hyperspace/Pointf) | .[lastLocation](SpaceDrone#lastLocation) |
| integer | .[lifespan](SpaceDrone#lifespan) |
| DamageMessage | .[message](SpaceDrone#message) |
| [Targetable](../Hyperspace/Targetable) | .[movementTarget](SpaceDrone#movementTarget) |
| number | .[pause](SpaceDrone#pause) |
| [Pointf](../Hyperspace/Pointf) | .[pointTarget](SpaceDrone#pointTarget) |
| boolean | .[poweredLastFrame](SpaceDrone#poweredLastFrame) |
| [Pointf](../Hyperspace/Pointf) | .[speedVector](SpaceDrone#speedVector) |
| table | .[table](SpaceDrone#table) |
| [Pointf](../Hyperspace/Pointf) | .[targetLocation](SpaceDrone#targetLocation) |
| [Pointf](../Hyperspace/Pointf) | .[targetSpeed](SpaceDrone#targetSpeed) |
| [WeaponBlueprint](../Hyperspace/WeaponBlueprint) | .[weaponBlueprint](SpaceDrone#weaponBlueprint) |
| number | .[weaponCooldown](SpaceDrone#weaponCooldown) |
| [Targetable](../Hyperspace/Targetable) | .[weaponTarget](SpaceDrone#weaponTarget) |
| [Animation](../Hyperspace/Animation) | .[weapon_animation](SpaceDrone#weapon_animation) |

</details>

___
### arrived
{: #arrived .lua-content-item aria-label='Fields' }
#### boolean .arrived
{: aria-label='Fields' }

___
### droneImage_off
{: #droneImage_off .lua-content-item aria-label='Fields' }
#### [GL_Texture](../Graphics/GL_Texture) .droneImage_off
{: aria-label='Fields' }

___
### droneImage_on
{: #droneImage_on .lua-content-item aria-label='Fields' }
#### [GL_Texture](../Graphics/GL_Texture) .droneImage_on
{: aria-label='Fields' }

___
### explosion
{: #explosion .lua-content-item aria-label='Fields' }
#### [Animation](../Hyperspace/Animation) .explosion
{: aria-label='Fields' }

___
### extending
{: #extending .lua-content-item aria-label='Fields' }
#### [Animation](../Hyperspace/Animation) .extending
{: aria-label='Fields' }

___
### finalDestination
{: #finalDestination .lua-content-item aria-label='Fields' }
#### [Pointf](../Hyperspace/Pointf) .finalDestination
{: aria-label='Fields' }

___
### finishedSetup
{: #finishedSetup .lua-content-item aria-label='Fields' }
#### boolean .finishedSetup
{: aria-label='Fields' }

___
### flashTracker
{: #flashTracker .lua-content-item aria-label='Fields' }
#### [AnimationTracker](../Hyperspace/AnimationTracker) .flashTracker
{: aria-label='Fields' }

___
### flying
{: #flying .lua-content-item aria-label='Fields' }
#### [Animation](../Hyperspace/Animation) .flying
{: aria-label='Fields' }

___
### lightImage
{: #lightImage .lua-content-item aria-label='Fields' }
#### [GL_Texture](../Graphics/GL_Texture) .lightImage
{: aria-label='Fields' }

___
### prefRoom
{: #prefRoom .lua-content-item aria-label='Fields' }
#### integer .prefRoom
{: aria-label='Fields' }

___
### startingPosition
{: #startingPosition .lua-content-item aria-label='Fields' }
#### [Pointf](../Hyperspace/Pointf) .startingPosition
{: aria-label='Fields' }

___
