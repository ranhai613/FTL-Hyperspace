---
layout: lua
title: ShipManager
lang: en
---

# Class "ShipManager"


Extends: [ShipObject](../Hyperspace/ShipObject)


## Constructors
{: #Constructors .section}
### ShipManager ()
{: #ShipManager aria-label='Constructors' }
#### [ShipManager](../Hyperspace/ShipManager) ShipManager (integer shipId)
{: aria-label='Constructors' }

___




## Methods
{: #Methods .section}
<details markdown="1"><summary markdown="span">Inherited Methods</summary>


#### From [ShipObject](ShipObject)

| Return Type | Method |
| --- | --- |
| boolean | :[AddAugmentation](ShipObject#AddAugmentation) (string augment) |
| void | :[ClearShipInfo](ShipObject#ClearShipInfo) () |
| integer | :[GetAugmentationCount](ShipObject#GetAugmentationCount) () |
| vector\<string\> | :[GetAugmentationList](ShipObject#GetAugmentationList) () |
| number | :[GetAugmentationValue](ShipObject#GetAugmentationValue) (string augment) |
| integer | :[HasAugmentation](ShipObject#HasAugmentation) (string augment) |
| integer | :[HasEquipment](ShipObject#HasEquipment) (string equip) |
| integer | :[HasEquipment](ShipObject#HasEquipment) (string equipmentName, boolean checkCargo=false) |
| void | :[RemoveAugmentation](ShipObject#RemoveAugmentation) (string augment) |

</details>
___
### AddCrewMemberFromBlueprint ()
{: #AddCrewMemberFromBlueprint aria-label='Methods' }
#### [CrewMember](../Hyperspace/CrewMember) :AddCrewMemberFromBlueprint ([CrewBlueprint](../Hyperspace/CrewBlueprint) bp, integer slot, boolean init, integer roomId, boolean intruder)
{: aria-label='Methods' }

___
### AddCrewMemberFromString ()
{: #AddCrewMemberFromString aria-label='Methods' }
#### [CrewMember](../Hyperspace/CrewMember) :AddCrewMemberFromString (string name, string race, boolean intruder, integer roomId, boolean init, boolean male)
{: aria-label='Methods' }

___
### AddDrone ()
{: #AddDrone aria-label='Methods' }
#### [Drone](../Hyperspace/Drone) :AddDrone ([DroneBlueprint](../Hyperspace/DroneBlueprint) bp, integer slot)
{: aria-label='Methods' }

___
### AddInitialCrew ()
{: #AddInitialCrew aria-label='Methods' }
#### void :AddInitialCrew (vector\<[CrewBlueprint](../Hyperspace/CrewBlueprint)\> blueprints)
{: aria-label='Methods' }

___
### AddSystem ()
{: #AddSystem aria-label='Methods' }
#### integer :AddSystem (integer systemId)
{: aria-label='Methods' }

___
### AddWeapon ()
{: #AddWeapon aria-label='Methods' }
#### integer :AddWeapon ([WeaponBlueprint](../Hyperspace/WeaponBlueprint) bp, integer slot)
{: aria-label='Methods' }

___
### CanFitSubsystem ()
{: #CanFitSubsystem aria-label='Methods' }
#### boolean :CanFitSubsystem (integer systemId)
{: aria-label='Methods' }

___
### CanFitSystem ()
{: #CanFitSystem aria-label='Methods' }
#### boolean :CanFitSystem (integer systemId)
{: aria-label='Methods' }

___
### CanUpgrade ()
{: #CanUpgrade aria-label='Methods' }
#### integer :CanUpgrade (integer systemId, integer amount)
{: aria-label='Methods' }

___
### ClearStatusAll ()
{: #ClearStatusAll aria-label='Methods' }
#### void :ClearStatusAll ()
{: aria-label='Methods' }

___
### ClearStatusSystem ()
{: #ClearStatusSystem aria-label='Methods' }
#### void :ClearStatusSystem (integer system)
{: aria-label='Methods' }

___
### CountCrew ()
{: #CountCrew aria-label='Methods' }
#### integer :CountCrew (boolean boarders)
{: aria-label='Methods' }
return count of crew on this ship, true for boarders false for regular crewmembers.

___
### CountCrewShipId ()
{: #CountCrewShipId aria-label='Methods' }
#### integer :CountCrewShipId (integer roomId, integer shipId)
{: aria-label='Methods' }
Counts crew in a room. shipId corresponds to which ship owns the crewmembers, 0 being the player and 1 being the enemy.

___
### CreateSpaceDrone ()
{: #CreateSpaceDrone aria-label='Methods' }
#### [SpaceDrone](../Hyperspace/SpaceDrone) :CreateSpaceDrone ([DroneBlueprint](../Hyperspace/DroneBlueprint) bp)
{: aria-label='Methods' }

___
### DamageArea ()
{: #DamageArea aria-label='Methods' }
#### boolean :DamageArea ([Pointf](../Hyperspace/Pointf) location, [Damage](../Hyperspace/Damage) dmg, boolean forceHit)
{: aria-label='Methods' }

___
### DamageBeam ()
{: #DamageBeam aria-label='Methods' }
#### boolean :DamageBeam ([Pointf](../Hyperspace/Pointf) location1, [Pointf](../Hyperspace/Pointf) location2, [Damage](../Hyperspace/Damage) dmg)
{: aria-label='Methods' }

___
### DamageHull ()
{: #DamageHull aria-label='Methods' }
#### integer :DamageHull (integer dmg, boolean force)
{: aria-label='Methods' }
It directly damages the hull? What's more to say, I think negative numbers heal the hull. Could be cool for some random lifesaving or lifetaking mechanics that run mid-battle instead of during an event. Imagine if you could dump all power into hull integrity or something and lose 10% power for the rest of the fight but gain 10% hull, could be fun!
`force` ignores whether or not the ship is jumping. If it is false and the ship is jumping, the damage will not be applied.

___
### DamageSystem ()
{: #DamageSystem aria-label='Methods' }
#### void :DamageSystem (integer systemId, [Damage](../Hyperspace/Damage) damage)
{: aria-label='Methods' }

___
### DoSensorsProvide ()
{: #DoSensorsProvide aria-label='Methods' }
#### boolean :DoSensorsProvide (integer vision)
{: aria-label='Methods' }
`vision` is the sensor level.

___
### DoorsFunction ()
{: #DoorsFunction aria-label='Methods' }
#### boolean :DoorsFunction ()
{: aria-label='Methods' }
Do the doors work or not

___
### FindCrew ()
{: #FindCrew aria-label='Methods' }
#### [CrewMember](../Hyperspace/CrewMember) :FindCrew ([CrewBlueprint](../Hyperspace/CrewBlueprint) bp)
{: aria-label='Methods' }

___
### ForceDecreaseSystemPower ()
{: #ForceDecreaseSystemPower aria-label='Methods' }
#### boolean :ForceDecreaseSystemPower (integer sys)
{: aria-label='Methods' }

___
### GetAvailablePower ()
{: #GetAvailablePower aria-label='Methods' }
#### pair\<integer, integer\> :GetAvailablePower ()
{: aria-label='Methods' }
First element of the pair is the maximum reactor power, the second element is the available reactor power.

___
### GetCrewmember ()
{: #GetCrewmember aria-label='Methods' }
#### [CrewMember](../Hyperspace/CrewMember) :GetCrewmember (integer slot, boolean present)
{: aria-label='Methods' }

___
### GetDodgeFactor ()
{: #GetDodgeFactor aria-label='Methods' }
#### integer :GetDodgeFactor ()
{: aria-label='Methods' }

___
### GetDodged ()
{: #GetDodged aria-label='Methods' }
#### boolean :GetDodged ()
{: aria-label='Methods' }
Calculates whether a projectile should be dodged or not.
Note: 5 calls of this method that return false while the player has fully upgraded, fully powered engines will unlock the achievement 'Astronomically Low Odds'.

___
### GetDroneCount ()
{: #GetDroneCount aria-label='Methods' }
#### integer :GetDroneCount ()
{: aria-label='Methods' }
Returns the number of drone parts the ship has.

___
### GetDroneList ()
{: #GetDroneList aria-label='Methods' }
#### vector\<[Drone](../Hyperspace/Drone)\> :GetDroneList ()
{: aria-label='Methods' }
Returns the list of Drones for this ship, the `std::vector` it returns can be accessed like an array in Lua

___
### GetFire ()
{: #GetFire aria-label='Methods' }
#### [Fire](../Hyperspace/Fire) :GetFire (integer unknown, integer unknown)
{: aria-label='Methods' }

___
### GetFireAtPoint ()
{: #GetFireAtPoint aria-label='Methods' }
#### [Fire](../Hyperspace/Fire) :GetFireAtPoint (number unknown, number unknown)
{: aria-label='Methods' }

___
### GetFireAtPoint ()
{: #GetFireAtPoint aria-label='Methods' }
#### [Fire](../Hyperspace/Fire) :GetFireAtPoint ([Point](../Hyperspace/Point) unknown)
{: aria-label='Methods' }

___
### GetFireAtPoint ()
{: #GetFireAtPoint aria-label='Methods' }
#### [Fire](../Hyperspace/Fire) :GetFireAtPoint ([Pointf](../Hyperspace/Pointf) unknown)
{: aria-label='Methods' }

___
### GetFireCount ()
{: #GetFireCount aria-label='Methods' }
#### integer :GetFireCount (integer roomId)
{: aria-label='Methods' }

___
### GetMissileCount ()
{: #GetMissileCount aria-label='Methods' }
#### integer :GetMissileCount ()
{: aria-label='Methods' }

___
### GetOxygenPercentage ()
{: #GetOxygenPercentage aria-label='Methods' }
#### integer :GetOxygenPercentage ()
{: aria-label='Methods' }

___
### GetRandomRoomCenter ()
{: #GetRandomRoomCenter aria-label='Methods' }
#### [Pointf](../Hyperspace/Pointf) :GetRandomRoomCenter ()
{: aria-label='Methods' }
Chooses a random room on the ship and returns the center point of that room

___
### GetRoomCenter ()
{: #GetRoomCenter aria-label='Methods' }
#### [Pointf](../Hyperspace/Pointf) :GetRoomCenter (integer roomId)
{: aria-label='Methods' }
Gets the room center point of a specific room id.

___
### GetSelectedCrewPoint ()
{: #GetSelectedCrewPoint aria-label='Methods' }
#### [CrewMember](../Hyperspace/CrewMember) :GetSelectedCrewPoint (integer x, integer y, boolean intruder)
{: aria-label='Methods' }

___
### GetShieldPower ()
{: #GetShieldPower aria-label='Methods' }
#### [ShieldPower](../Hyperspace/ShieldPower) :GetShieldPower ()
{: aria-label='Methods' }

___
### GetSystem ()
{: #GetSystem aria-label='Methods' }
#### [ShipSystem](../Hyperspace/ShipSystem) :GetSystem (integer systemId)
{: aria-label='Methods' }
You can also just access the system directly with fields below if it's one of the vanilla systems like `oxygenSystem` `medbaySystem` etc... but custom systems like Temporal currently need to be accessed by id.

___
### GetSystemInRoom ()
{: #GetSystemInRoom aria-label='Methods' }
#### [ShipSystem](../Hyperspace/ShipSystem) :GetSystemInRoom (integer roomId)
{: aria-label='Methods' }
Returns the system in a specific room id. If there is no system in the room, returns 0.

___
### GetSystemPower ()
{: #GetSystemPower aria-label='Methods' }
#### integer :GetSystemPower (integer systemId)
{: aria-label='Methods' }
How much power is assigned to this system

___
### GetSystemPowerMax ()
{: #GetSystemPowerMax aria-label='Methods' }
#### integer :GetSystemPowerMax (integer systemId)
{: aria-label='Methods' }
What is the max power level of this system, functionally this is the same as the system's "level"

___
### GetSystemRoom ()
{: #GetSystemRoom aria-label='Methods' }
#### integer :GetSystemRoom (integer sysId)
{: aria-label='Methods' }
Find what roomId a system is in, could be useful for AI targeting mechanics or some cheesy player weapon that can only attack one system or something.

___
### GetTooltip ()
{: #GetTooltip aria-label='Methods' }
#### string :GetTooltip (integer x, integer y)
{: aria-label='Methods' }

___
### GetWeaponList ()
{: #GetWeaponList aria-label='Methods' }
#### vector\<[ProjectileFactory](../Hyperspace/ProjectileFactory)\> :GetWeaponList ()
{: aria-label='Methods' }
Return a vector of weapons on this ship, can be treated like an array in Lua.

___
### HasSystem ()
{: #HasSystem aria-label='Methods' }
#### boolean :HasSystem (integer systemId)
{: aria-label='Methods' }
Does the ship have a specific system, true/false

___
### InstantPowerShields ()
{: #InstantPowerShields aria-label='Methods' }
#### void :InstantPowerShields ()
{: aria-label='Methods' }

___
### IsCrewFull ()
{: #IsCrewFull aria-label='Methods' }
#### boolean :IsCrewFull ()
{: aria-label='Methods' }

___
### IsCrewOverFull ()
{: #IsCrewOverFull aria-label='Methods' }
#### boolean :IsCrewOverFull ()
{: aria-label='Methods' }

___
### IsSystemHacked ()
{: #IsSystemHacked aria-label='Methods' }
#### integer :IsSystemHacked (integer systemId)
{: aria-label='Methods' }
Returns the "hacking level" of the system. 0 means there is no hacking drone on the system, 1 means there is a hacking drone attached but is not currently being hacked, 2 means there is a hacking drone and the system is being hacked.

___
### ModifyDroneCount ()
{: #ModifyDroneCount aria-label='Methods' }
#### void :ModifyDroneCount (integer drones)
{: aria-label='Methods' }

___
### ModifyMissileCount ()
{: #ModifyMissileCount aria-label='Methods' }
#### void :ModifyMissileCount (integer missiles)
{: aria-label='Methods' }

___
### ModifyScrapCount ()
{: #ModifyScrapCount aria-label='Methods' }
#### void :ModifyScrapCount (integer scrap, boolean income)
{: aria-label='Methods' }
`income` determines whether or not augments should be activated (e.g. Scrap Recovery Arm and Repair Arm).

___
### OnInit ()
{: #OnInit aria-label='Methods' }
#### integer :OnInit ([ShipBlueprint](../Hyperspace/ShipBlueprint) bp, integer shipLevel)
{: aria-label='Methods' }

___
### PrepareSuperBarrage ()
{: #PrepareSuperBarrage aria-label='Methods' }
#### void :PrepareSuperBarrage ()
{: aria-label='Methods' }
I do not know if this is safe to call

___
### PrepareSuperDrones ()
{: #PrepareSuperDrones aria-label='Methods' }
#### void :PrepareSuperDrones ()
{: aria-label='Methods' }
I do not know if this is safe to call

___
### RemoveItem ()
{: #RemoveItem aria-label='Methods' }
#### void :RemoveItem (string name, boolean checkCargo=false)
{: aria-label='Methods' }
Remove an item by name (equivalent to removing via an event).
checkCargo indicates if items will be removed from cargo if not present in weapon/drone system.

___
### RemoveItem ()
{: #RemoveItem aria-label='Methods' }
#### void :RemoveItem (string name)
{: aria-label='Methods' }

___
### RemoveSystem ()
{: #RemoveSystem aria-label='Methods' }
#### void :RemoveSystem (integer systemId)
{: aria-label='Methods' }

___
### ResetScrapLevel ()
{: #ResetScrapLevel aria-label='Methods' }
#### void :ResetScrapLevel ()
{: aria-label='Methods' }

___
### RestoreCrewPositions ()
{: #RestoreCrewPositions aria-label='Methods' }
#### boolean :RestoreCrewPositions ()
{: aria-label='Methods' }
Same as hitting the button to return crew to their original positions.

___
### SelectRandomCrew ()
{: #SelectRandomCrew aria-label='Methods' }
#### [CrewBlueprint](../Hyperspace/CrewBlueprint) :SelectRandomCrew (integer seed, string racePref)
{: aria-label='Methods' }
Select random crew from the ship *for ~~execution~~ selection of your diabolical plans*.
Not sure why there is a seed option, not sure if you should give it a fixed number or call `Hyperspace.random32()` for a nice random number.

___
### SetDestroyed ()
{: #SetDestroyed aria-label='Methods' }
#### void :SetDestroyed ()
{: aria-label='Methods' }
*Blow up the damn ship Jean-Luc!*

___
### SetSystemPowerLoss ()
{: #SetSystemPowerLoss aria-label='Methods' }
#### void :SetSystemPowerLoss (integer systemId, integer powerLoss)
{: aria-label='Methods' }
Sets a power loss level, like from an event except can be done at any time regardless of an event.

___
### StartFire ()
{: #StartFire aria-label='Methods' }
#### void :StartFire (integer roomId)
{: aria-label='Methods' }
Yeah, it does *exactly what you think it does* [you monster](https://gfycat.com/complexcarefulant).

___
### SystemFunctions ()
{: #SystemFunctions aria-label='Methods' }
#### boolean :SystemFunctions (integer systemId)
{: aria-label='Methods' }
Returns whether the system has any power assigned to it.

___
### TeleportCrew ()
{: #TeleportCrew aria-label='Methods' }
#### vector\<[CrewMember](../Hyperspace/CrewMember)\> :TeleportCrew (integer roomId, boolean intruders)
{: aria-label='Methods' }
Teleport crew & get back the list of CrewMembers.
I think there might be something more you need to do to give them a destination so they don't simply get teleport-ed to space, *unless you know... that was the intention*.

___


## Fields
{: #Fields .section}
<details markdown="1"><summary markdown="span">Inherited Fields</summary>


#### From [ShipObject](ShipObject)

| Type | Field |
| --- | --- |
| integer | .[iShipId](ShipObject#iShipId-) |

</details>
___
### _targetable (Read-only)
{: #_targetable aria-label='Fields' }
#### [Targetable](../Hyperspace/Targetable) ._targetable
{: aria-label='Fields' }
**Read-only**

___
### artillerySystems (Read-only)
{: #artillerySystems aria-label='Fields' }
#### vector\<[ArtillerySystem](../Hyperspace/ArtillerySystem)\> .artillerySystems
{: aria-label='Fields' }
Array (vector) of artillery systems on this ship, you will need to check for length
**Note:** Unlike Lua arrays, because this is a C vector internally it will start at index `0` not index `1` so `.artillerySystems[0]` is the first artillery system.
Field is **read-only** but fields under this object may still be mutable.

___
### bAutomated
{: #bAutomated aria-label='Fields' }
#### boolean .bAutomated
{: aria-label='Fields' }
**read-only**

___
### bContainsPlayerCrew (Read-only)
{: #bContainsPlayerCrew aria-label='Fields' }
#### boolean .bContainsPlayerCrew
{: aria-label='Fields' }
**read-only**

___
### bDestroyed (Read-only)
{: #bDestroyed aria-label='Fields' }
#### boolean .bDestroyed
{: aria-label='Fields' }
**Since 1.4.0**

___
### bHighlightCrew
{: #bHighlightCrew aria-label='Fields' }
#### boolean .bHighlightCrew
{: aria-label='Fields' }

___
### bInvincible
{: #bInvincible aria-label='Fields' }
#### boolean .bInvincible
{: aria-label='Fields' }

___
### bJumping (Read-only)
{: #bJumping aria-label='Fields' }
#### boolean .bJumping
{: aria-label='Fields' }
**read-only**

___
### bShowRoom
{: #bShowRoom aria-label='Fields' }
#### boolean .bShowRoom
{: aria-label='Fields' }

___
### batterySystem (Read-only)
{: #batterySystem aria-label='Fields' }
#### [BatterySystem](../Hyperspace/BatterySystem) .batterySystem
{: aria-label='Fields' }
Field is **read-only** but fields under this object may still be mutable.

___
### cloakSystem (Read-only)
{: #cloakSystem aria-label='Fields' }
#### [CloakingSystem](../Hyperspace/CloakingSystem) .cloakSystem
{: aria-label='Fields' }
Field is **read-only** but fields under this object may still be mutable.

___
### cloneSystem (Read-only)
{: #cloneSystem aria-label='Fields' }
#### [CloneSystem](../Hyperspace/CloneSystem) .cloneSystem
{: aria-label='Fields' }
**Note:** shares system with Medbay system and both cannot exist at the same time
Field is **read-only** but fields under this object may still be mutable.

___
### crewCounts (Read-only)
{: #crewCounts aria-label='Fields' }
#### vector\<vector\<integer\>\> .crewCounts
{: aria-label='Fields' }
Note: Double vector, both indices start at 0
Field is **read-only** but fields under this object may still be mutable.

___
### currentScrap (Read-only)
{: #currentScrap aria-label='Fields' }
#### integer .currentScrap
{: aria-label='Fields' }
**read-only** use the modify method if you really want to change this

___
### current_target (Read-only)
{: #current_target aria-label='Fields' }
#### [ShipManager](../Hyperspace/ShipManager) .current_target
{: aria-label='Fields' }

___
### damageCloaked
{: #damageCloaked aria-label='Fields' }
#### integer .damageCloaked
{: aria-label='Fields' }

___
### droneSystem (Read-only)
{: #droneSystem aria-label='Fields' }
#### [DroneSystem](../Hyperspace/DroneSystem) .droneSystem
{: aria-label='Fields' }
Field is **read-only** but fields under this object may still be mutable.

___
### enemyDamagedUncloaked
{: #enemyDamagedUncloaked aria-label='Fields' }
#### boolean .enemyDamagedUncloaked
{: aria-label='Fields' }

___
### engineSystem (Read-only)
{: #engineSystem aria-label='Fields' }
#### [EngineSystem](../Hyperspace/EngineSystem) .engineSystem
{: aria-label='Fields' }
Field is **read-only** but fields under this object may still be mutable.

___
### extend (Read-only)
{: #extend aria-label='Fields' }
#### [ShipManager_Extend](../Hyperspace/ShipManager_Extend) .extend
{: aria-label='Fields' }
**Since 1.4.0**

___
### failedDodgeCounter
{: #failedDodgeCounter aria-label='Fields' }
#### integer .failedDodgeCounter
{: aria-label='Fields' }

___
### fireSpreader
{: #fireSpreader aria-label='Fields' }
#### [Spreader_Fire](../Hyperspace/Spreader_Fire) .fireSpreader
{: aria-label='Fields' }

___
### fuel_count
{: #fuel_count aria-label='Fields' }
#### integer .fuel_count
{: aria-label='Fields' }
Unlike other resources, fuel is mutable and should be modified directly instead of with a modify method

___
### hackingSystem (Read-only)
{: #hackingSystem aria-label='Fields' }
#### [HackingSystem](../Hyperspace/HackingSystem) .hackingSystem
{: aria-label='Fields' }
Field is **read-only** but fields under this object may still be mutable.

___
### iCustomizeMode (Read-only)
{: #iCustomizeMode aria-label='Fields' }
#### integer .iCustomizeMode
{: aria-label='Fields' }
**read-only**
2 while in the hangar, 0 while in a run

___
### iIntruderCount (Read-only)
{: #iIntruderCount aria-label='Fields' }
#### integer .iIntruderCount
{: aria-label='Fields' }
**read-only**

___
### iLastDamage (Read-only)
{: #iLastDamage aria-label='Fields' }
#### integer .iLastDamage
{: aria-label='Fields' }
**read-only** (not sure if it's safe to make this editable)

___
### jump_timer (Read-only)
{: #jump_timer aria-label='Fields' }
#### pair\<number, number\> .jump_timer
{: aria-label='Fields' }
**read-only** (not sure if it's safe to make this editable)

___
### lastEngineStatus (Read-only)
{: #lastEngineStatus aria-label='Fields' }
#### boolean .lastEngineStatus
{: aria-label='Fields' }
**read-only**

___
### lastJumpReady (Read-only)
{: #lastJumpReady aria-label='Fields' }
#### boolean .lastJumpReady
{: aria-label='Fields' }
**read-only**

___
### medbaySystem (Read-only)
{: #medbaySystem aria-label='Fields' }
#### [MedbaySystem](../Hyperspace/MedbaySystem) .medbaySystem
{: aria-label='Fields' }
**Note:** shares system with Clonebay system and both cannot exist at the same time
Field is **read-only** but fields under this object may still be mutable.

___
### mindSystem (Read-only)
{: #mindSystem aria-label='Fields' }
#### [MindSystem](../Hyperspace/MindSystem) .mindSystem
{: aria-label='Fields' }
Field is **read-only** but fields under this object may still be mutable.

___
### myBlueprint (Read-only)
{: #myBlueprint aria-label='Fields' }
#### [ShipBlueprint](../Hyperspace/ShipBlueprint) .myBlueprint
{: aria-label='Fields' }
**read-only**

___
### oxygenSystem (Read-only)
{: #oxygenSystem aria-label='Fields' }
#### [OxygenSystem](../Hyperspace/OxygenSystem) .oxygenSystem
{: aria-label='Fields' }
Field is **read-only** but fields under this object may still be mutable.

___
### shieldSystem (Read-only)
{: #shieldSystem aria-label='Fields' }
#### [Shields](../Hyperspace/Shields) .shieldSystem
{: aria-label='Fields' }
Field is **read-only** but fields under this object may still be mutable.

___
### ship (Read-only)
{: #ship aria-label='Fields' }
#### [Ship](../Hyperspace/Ship) .ship
{: aria-label='Fields' }
Field is **read-only** but fields under this object may still be mutable.

___
### shipLevel (Read-only)
{: #shipLevel aria-label='Fields' }
#### integer .shipLevel
{: aria-label='Fields' }
**read-only**

___
### spaceDrones
{: #spaceDrones aria-label='Fields' }
#### vector\<[SpaceDrone](../Hyperspace/SpaceDrone)\> .spaceDrones
{: aria-label='Fields' }

___
### superBarrage
{: #superBarrage aria-label='Fields' }
#### vector\<[Projectile](../Hyperspace/Projectile)\> .superBarrage
{: aria-label='Fields' }
Note: Vectors start at index 0, unlike normal arrays in Lua

___
### superDrones
{: #superDrones aria-label='Fields' }
#### vector\<[SpaceDrone](../Hyperspace/SpaceDrone)\> .superDrones
{: aria-label='Fields' }
Note: Vectors start at index 0, unlike normal arrays in Lua

___
### teleportSystem (Read-only)
{: #teleportSystem aria-label='Fields' }
#### [TeleportSystem](../Hyperspace/TeleportSystem) .teleportSystem
{: aria-label='Fields' }
Field is **read-only** but fields under this object may still be mutable.

___
### tempDroneCount (Read-only)
{: #tempDroneCount aria-label='Fields' }
#### integer .tempDroneCount
{: aria-label='Fields' }
**read-only**

___
### tempMissileCount (Read-only)
{: #tempMissileCount aria-label='Fields' }
#### integer .tempMissileCount
{: aria-label='Fields' }
**read-only**

___
### tempVision (Read-only)
{: #tempVision aria-label='Fields' }
#### vector\<boolean\> .tempVision
{: aria-label='Fields' }
**read-only**
Note: Vectors start at index 0, unlike normal arrays in Lua

___
### vCrewList (Read-only)
{: #vCrewList aria-label='Fields' }
#### vector\<[CrewMember](../Hyperspace/CrewMember)\> .vCrewList
{: aria-label='Fields' }
Array (vector) of crew members on this ship
**Note:** Vectors are 0 indexed unlike lua's normal arrays
Field is **read-only** but fields under this object may still be mutable.

___
### vSystemList (Read-only)
{: #vSystemList aria-label='Fields' }
#### vector\<[ShipSystem](../Hyperspace/ShipSystem)\> .vSystemList
{: aria-label='Fields' }
**Read-only** currently, however we might need to explore if this would be a safe way to remove a system
Fields under this object may still be mutable (see their docs).
Holds a vector (array in lua) of ship systems that you can iterate over

___
### weaponSystem (Read-only)
{: #weaponSystem aria-label='Fields' }
#### [WeaponSystem](../Hyperspace/WeaponSystem) .weaponSystem
{: aria-label='Fields' }
Field is **read-only** but fields under this object may still be mutable.

___
