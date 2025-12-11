---
layout: lua
title: SpaceDrone
lang: en
---

# Class "SpaceDrone"


Extends: [Drone](../Hyperspace/Drone)

Subclasses: [BoarderPodDrone](../Hyperspace/BoarderPodDrone), [CombatDrone](../Hyperspace/CombatDrone), [DefenseDrone](../Hyperspace/DefenseDrone), [HackingDrone](../Hyperspace/HackingDrone)





## Methods
{: #Methods .section}
<details markdown="1"><summary markdown="span">Inherited Methods</summary>


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
| void | :[OnLoop](Drone#OnLoop) () |
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

</details>
___
### CollisionMoving ()
{: #CollisionMoving aria-label='Methods' }
#### [CollisionResponse](../Hyperspace/CollisionResponse) :CollisionMoving ([Pointf](../Hyperspace/Pointf) start, [Pointf](../Hyperspace/Pointf) finish, [Damage](../Hyperspace/Damage) damage, boolean raytrace)
{: aria-label='Methods' }

___
### DamageArea ()
{: #DamageArea aria-label='Methods' }
#### boolean :DamageArea ([Pointf](../Hyperspace/Pointf) pos, [Damage](../Hyperspace/Damage) damage, boolean unk)
{: aria-label='Methods' }

___
### DamageBeam ()
{: #DamageBeam aria-label='Methods' }
#### boolean :DamageBeam ([Pointf](../Hyperspace/Pointf) pos1, [Pointf](../Hyperspace/Pointf) pos2, [Damage](../Hyperspace/Damage) damage)
{: aria-label='Methods' }

___
### GetBoardingDrone ()
{: #GetBoardingDrone aria-label='Methods' }
#### BoarderDrone :GetBoardingDrone ()
{: aria-label='Methods' }

___
### GetNextProjectile ()
{: #GetNextProjectile aria-label='Methods' }
#### [Projectile](../Hyperspace/Projectile) :GetNextProjectile ()
{: aria-label='Methods' }

___
### GetOwnerId ()
{: #GetOwnerId aria-label='Methods' }
#### integer :GetOwnerId ()
{: aria-label='Methods' }

___
### GetRandomTargettingPoint ()
{: #GetRandomTargettingPoint aria-label='Methods' }
#### [Pointf](../Hyperspace/Pointf) :GetRandomTargettingPoint (boolean unk)
{: aria-label='Methods' }

___
### GetSelfId ()
{: #GetSelfId aria-label='Methods' }
#### integer :GetSelfId ()
{: aria-label='Methods' }

___
### GetShieldShape ()
{: #GetShieldShape aria-label='Methods' }
#### [Ellipse](../Hyperspace/Ellipse) :GetShieldShape ([SpaceDrone](../Hyperspace/SpaceDrone) drone)
{: aria-label='Methods' }

___
### GetSpaceId ()
{: #GetSpaceId aria-label='Methods' }
#### integer :GetSpaceId ()
{: aria-label='Methods' }

___
### GetSpeed ()
{: #GetSpeed aria-label='Methods' }
#### [Pointf](../Hyperspace/Pointf) :GetSpeed ()
{: aria-label='Methods' }

___
### GetTooltip ()
{: #GetTooltip aria-label='Methods' }
#### string :GetTooltip ([SpaceDrone](../Hyperspace/SpaceDrone) drone)
{: aria-label='Methods' }

___
### GetWeaponCooldown ()
{: #GetWeaponCooldown aria-label='Methods' }
#### number :GetWeaponCooldown ()
{: aria-label='Methods' }

___
### GetWorldCenterPoint ()
{: #GetWorldCenterPoint aria-label='Methods' }
#### [Pointf](../Hyperspace/Pointf) :GetWorldCenterPoint ()
{: aria-label='Methods' }

___
### HasTarget ()
{: #HasTarget aria-label='Methods' }
#### boolean :HasTarget ()
{: aria-label='Methods' }

___
### HideUnderOwner ()
{: #HideUnderOwner aria-label='Methods' }
#### boolean :HideUnderOwner ()
{: aria-label='Methods' }

___
### MouseMove ()
{: #MouseMove aria-label='Methods' }
#### void :MouseMove (integer mX, integer mY)
{: aria-label='Methods' }

___
### OnRender ()
{: #OnRender aria-label='Methods' }
#### void :OnRender (integer space)
{: aria-label='Methods' }

___
### PickDestination ()
{: #PickDestination aria-label='Methods' }
#### void :PickDestination ()
{: aria-label='Methods' }

___
### PickTarget ()
{: #PickTarget aria-label='Methods' }
#### void :PickTarget ()
{: aria-label='Methods' }

___
### RandomizeStartingPosition ()
{: #RandomizeStartingPosition aria-label='Methods' }
#### void :RandomizeStartingPosition ()
{: aria-label='Methods' }

___
### RenderDrone ()
{: #RenderDrone aria-label='Methods' }
#### void :RenderDrone ()
{: aria-label='Methods' }

___
### SetCurrentLocation ()
{: #SetCurrentLocation aria-label='Methods' }
#### void :SetCurrentLocation ([Pointf](../Hyperspace/Pointf) pos)
{: aria-label='Methods' }

___
### SetDeployed ()
{: #SetDeployed aria-label='Methods' }
#### void :SetDeployed (boolean deployed)
{: aria-label='Methods' }

___
### SetMovementTarget ()
{: #SetMovementTarget aria-label='Methods' }
#### void :SetMovementTarget ([Targetable](../Hyperspace/Targetable) target)
{: aria-label='Methods' }

___
### SetWeaponTarget ()
{: #SetWeaponTarget aria-label='Methods' }
#### void :SetWeaponTarget ([Targetable](../Hyperspace/Targetable) target)
{: aria-label='Methods' }

___
### UpdateAimingAngle ()
{: #UpdateAimingAngle aria-label='Methods' }
#### number :UpdateAimingAngle ([Pointf](../Hyperspace/Pointf) location, number percentage, number forceDesired)
{: aria-label='Methods' }

___
### ValidTarget ()
{: #ValidTarget aria-label='Methods' }
#### boolean :ValidTarget ()
{: aria-label='Methods' }

___
### ValidTargetObject ()
{: #ValidTargetObject aria-label='Methods' }
#### boolean :ValidTargetObject ([Targetable](../Hyperspace/Targetable) target)
{: aria-label='Methods' }

___


## Fields
{: #Fields .section}
<details markdown="1"><summary markdown="span">Inherited Fields</summary>


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

</details>
___
### _collideable
{: #_collideable aria-label='Fields' }
#### [Collideable](../Hyperspace/Collideable) ._collideable
{: aria-label='Fields' }

___
### _targetable
{: #_targetable aria-label='Fields' }
#### [Targetable](../Hyperspace/Targetable) ._targetable
{: aria-label='Fields' }

___
### additionalPause
{: #additionalPause aria-label='Fields' }
#### number .additionalPause
{: aria-label='Fields' }

___
### aimingAngle
{: #aimingAngle aria-label='Fields' }
#### number .aimingAngle
{: aria-label='Fields' }

___
### bDisrupted
{: #bDisrupted aria-label='Fields' }
#### boolean .bDisrupted
{: aria-label='Fields' }

___
### bFire
{: #bFire aria-label='Fields' }
#### boolean .bFire
{: aria-label='Fields' }

___
### bLoadedPosition
{: #bLoadedPosition aria-label='Fields' }
#### boolean .bLoadedPosition
{: aria-label='Fields' }

___
### beamCurrentTarget
{: #beamCurrentTarget aria-label='Fields' }
#### [Pointf](../Hyperspace/Pointf) .beamCurrentTarget
{: aria-label='Fields' }

___
### beamFinalTarget
{: #beamFinalTarget aria-label='Fields' }
#### [Pointf](../Hyperspace/Pointf) .beamFinalTarget
{: aria-label='Fields' }

___
### beamSpeed
{: #beamSpeed aria-label='Fields' }
#### number .beamSpeed
{: aria-label='Fields' }

___
### currentLocation
{: #currentLocation aria-label='Fields' }
#### [Pointf](../Hyperspace/Pointf) .currentLocation
{: aria-label='Fields' }

___
### currentSpace
{: #currentSpace aria-label='Fields' }
#### integer .currentSpace
{: aria-label='Fields' }

___
### current_angle
{: #current_angle aria-label='Fields' }
#### number .current_angle
{: aria-label='Fields' }

___
### deployedLastFrame
{: #deployedLastFrame aria-label='Fields' }
#### boolean .deployedLastFrame
{: aria-label='Fields' }

___
### desiredAimingAngle
{: #desiredAimingAngle aria-label='Fields' }
#### number .desiredAimingAngle
{: aria-label='Fields' }

___
### destinationLocation
{: #destinationLocation aria-label='Fields' }
#### [Pointf](../Hyperspace/Pointf) .destinationLocation
{: aria-label='Fields' }

___
### destinationSpace
{: #destinationSpace aria-label='Fields' }
#### integer .destinationSpace
{: aria-label='Fields' }

___
### explosion
{: #explosion aria-label='Fields' }
#### [Animation](../Hyperspace/Animation) .explosion
{: aria-label='Fields' }

___
### hackAngle
{: #hackAngle aria-label='Fields' }
#### number .hackAngle
{: aria-label='Fields' }

___
### hackSparks
{: #hackSparks aria-label='Fields' }
#### [Animation](../Hyperspace/Animation) .hackSparks
{: aria-label='Fields' }

___
### ionStun
{: #ionStun aria-label='Fields' }
#### number .ionStun
{: aria-label='Fields' }

___
### lastAimingAngle
{: #lastAimingAngle aria-label='Fields' }
#### number .lastAimingAngle
{: aria-label='Fields' }

___
### lastLocation
{: #lastLocation aria-label='Fields' }
#### [Pointf](../Hyperspace/Pointf) .lastLocation
{: aria-label='Fields' }

___
### lifespan
{: #lifespan aria-label='Fields' }
#### integer .lifespan
{: aria-label='Fields' }

___
### message
{: #message aria-label='Fields' }
#### DamageMessage .message
{: aria-label='Fields' }

___
### movementTarget
{: #movementTarget aria-label='Fields' }
#### [Targetable](../Hyperspace/Targetable) .movementTarget
{: aria-label='Fields' }

___
### pause
{: #pause aria-label='Fields' }
#### number .pause
{: aria-label='Fields' }

___
### pointTarget
{: #pointTarget aria-label='Fields' }
#### [Pointf](../Hyperspace/Pointf) .pointTarget
{: aria-label='Fields' }

___
### poweredLastFrame
{: #poweredLastFrame aria-label='Fields' }
#### boolean .poweredLastFrame
{: aria-label='Fields' }

___
### speedVector
{: #speedVector aria-label='Fields' }
#### [Pointf](../Hyperspace/Pointf) .speedVector
{: aria-label='Fields' }

___
### targetLocation
{: #targetLocation aria-label='Fields' }
#### [Pointf](../Hyperspace/Pointf) .targetLocation
{: aria-label='Fields' }

___
### targetSpeed
{: #targetSpeed aria-label='Fields' }
#### [Pointf](../Hyperspace/Pointf) .targetSpeed
{: aria-label='Fields' }

___
### weaponBlueprint (Read-only)
{: #weaponBlueprint aria-label='Fields' }
#### [WeaponBlueprint](../Hyperspace/WeaponBlueprint) .weaponBlueprint
{: aria-label='Fields' }
**Read-only**

___
### weaponCooldown
{: #weaponCooldown aria-label='Fields' }
#### number .weaponCooldown
{: aria-label='Fields' }

___
### weaponTarget
{: #weaponTarget aria-label='Fields' }
#### [Targetable](../Hyperspace/Targetable) .weaponTarget
{: aria-label='Fields' }

___
### weapon_animation
{: #weapon_animation aria-label='Fields' }
#### [Animation](../Hyperspace/Animation) .weapon_animation
{: aria-label='Fields' }

___
