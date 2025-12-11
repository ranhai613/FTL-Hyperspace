---
layout: lua
title: ShipManager
lang: en
---

# Class "ShipManager"

Extends: [ShipObject](../Hyperspace/ShipObject)


## Constructors
### ShipManager ()
{: aria-label='Constructors' }
#### [ShipManager](../Hyperspace/ShipManager) ShipManager (integer shipId)
{: aria-label='Constructors' }

___




## Methods
### AddCrewMemberFromBlueprint ()
{: aria-label='Methods' }
#### [CrewMember](../Hyperspace/CrewMember) :AddCrewMemberFromBlueprint ([CrewBlueprint](../Hyperspace/CrewBlueprint) bp, integer slot, boolean init, integer roomId, boolean intruder)
{: aria-label='Methods' }

______
### AddCrewMemberFromString ()
{: aria-label='Methods' }
#### [CrewMember](../Hyperspace/CrewMember) :AddCrewMemberFromString (string name, string race, boolean intruder, integer roomId, boolean init, boolean male)
{: aria-label='Methods' }

______
### AddDrone ()
{: aria-label='Methods' }
#### [Drone](../Hyperspace/Drone) :AddDrone ([DroneBlueprint](../Hyperspace/DroneBlueprint) bp, integer slot)
{: aria-label='Methods' }

______
### AddInitialCrew ()
{: aria-label='Methods' }
#### void :AddInitialCrew (vector\<[CrewBlueprint](../Hyperspace/CrewBlueprint)\> blueprints)
{: aria-label='Methods' }

______
### AddSystem ()
{: aria-label='Methods' }
#### integer :AddSystem (integer systemId)
{: aria-label='Methods' }

______
### AddWeapon ()
{: aria-label='Methods' }
#### integer :AddWeapon ([WeaponBlueprint](../Hyperspace/WeaponBlueprint) bp, integer slot)
{: aria-label='Methods' }

______
### CanFitSubsystem ()
{: aria-label='Methods' }
#### boolean :CanFitSubsystem (integer systemId)
{: aria-label='Methods' }

______
### CanFitSystem ()
{: aria-label='Methods' }
#### boolean :CanFitSystem (integer systemId)
{: aria-label='Methods' }

______
### CanUpgrade ()
{: aria-label='Methods' }
#### integer :CanUpgrade (integer systemId, integer amount)
{: aria-label='Methods' }

______
### ClearStatusAll ()
{: aria-label='Methods' }
#### void :ClearStatusAll ()
{: aria-label='Methods' }

______
### ClearStatusSystem ()
{: aria-label='Methods' }
#### void :ClearStatusSystem (integer system)
{: aria-label='Methods' }

______
### CountCrew ()
{: aria-label='Methods' }
#### integer :CountCrew (boolean boarders)
{: aria-label='Methods' }
return count of crew on this ship, true for boarders false for regular crewmembers.

______
### CountCrewShipId ()
{: aria-label='Methods' }
#### integer :CountCrewShipId (integer roomId, integer shipId)
{: aria-label='Methods' }
Counts crew in a room. shipId corresponds to which ship owns the crewmembers, 0 being the player and 1 being the enemy.

______
### CreateSpaceDrone ()
{: aria-label='Methods' }
#### [SpaceDrone](../Hyperspace/SpaceDrone) :CreateSpaceDrone ([DroneBlueprint](../Hyperspace/DroneBlueprint) bp)
{: aria-label='Methods' }

______
### DamageArea ()
{: aria-label='Methods' }
#### boolean :DamageArea ([Pointf](../Hyperspace/Pointf) location, [Damage](../Hyperspace/Damage) dmg, boolean forceHit)
{: aria-label='Methods' }

______
### DamageBeam ()
{: aria-label='Methods' }
#### boolean :DamageBeam ([Pointf](../Hyperspace/Pointf) location1, [Pointf](../Hyperspace/Pointf) location2, [Damage](../Hyperspace/Damage) dmg)
{: aria-label='Methods' }

______
### DamageHull ()
{: aria-label='Methods' }
#### integer :DamageHull (integer dmg, boolean force)
{: aria-label='Methods' }
It directly damages the hull? What's more to say, I think negative numbers heal the hull. Could be cool for some random lifesaving or lifetaking mechanics that run mid-battle instead of during an event. Imagine if you could dump all power into hull integrity or something and lose 10% power for the rest of the fight but gain 10% hull, could be fun!
`force` ignores whether or not the ship is jumping. If it is false and the ship is jumping, the damage will not be applied.

______
### DamageSystem ()
{: aria-label='Methods' }
#### void :DamageSystem (integer systemId, [Damage](../Hyperspace/Damage) damage)
{: aria-label='Methods' }

______
### DoSensorsProvide ()
{: aria-label='Methods' }
#### boolean :DoSensorsProvide (integer vision)
{: aria-label='Methods' }
`vision` is the sensor level.

______
### DoorsFunction ()
{: aria-label='Methods' }
#### boolean :DoorsFunction ()
{: aria-label='Methods' }
Do the doors work or not

______
### FindCrew ()
{: aria-label='Methods' }
#### [CrewMember](../Hyperspace/CrewMember) :FindCrew ([CrewBlueprint](../Hyperspace/CrewBlueprint) bp)
{: aria-label='Methods' }

______
### ForceDecreaseSystemPower ()
{: aria-label='Methods' }
#### boolean :ForceDecreaseSystemPower (integer sys)
{: aria-label='Methods' }

______
### GetAvailablePower ()
{: aria-label='Methods' }
#### pair\<integer, integer\> :GetAvailablePower ()
{: aria-label='Methods' }
First element of the pair is the maximum reactor power, the second element is the available reactor power.

______
### GetCrewmember ()
{: aria-label='Methods' }
#### [CrewMember](../Hyperspace/CrewMember) :GetCrewmember (integer slot, boolean present)
{: aria-label='Methods' }

______
### GetDodgeFactor ()
{: aria-label='Methods' }
#### integer :GetDodgeFactor ()
{: aria-label='Methods' }

______
### GetDodged ()
{: aria-label='Methods' }
#### boolean :GetDodged ()
{: aria-label='Methods' }
Calculates whether a projectile should be dodged or not.
Note: 5 calls of this method that return false while the player has fully upgraded, fully powered engines will unlock the achievement 'Astronomically Low Odds'.

______
### GetDroneCount ()
{: aria-label='Methods' }
#### integer :GetDroneCount ()
{: aria-label='Methods' }
Returns the number of drone parts the ship has.

______
### GetDroneList ()
{: aria-label='Methods' }
#### vector\<[Drone](../Hyperspace/Drone)\> :GetDroneList ()
{: aria-label='Methods' }
Returns the list of Drones for this ship, the `std::vector` it returns can be accessed like an array in Lua

______
### GetFire ()
{: aria-label='Methods' }
#### [Fire](../Hyperspace/Fire) :GetFire (integer unknown, integer unknown)
{: aria-label='Methods' }

______
### GetFireAtPoint ()
{: aria-label='Methods' }
#### [Fire](../Hyperspace/Fire) :GetFireAtPoint (number unknown, number unknown)
{: aria-label='Methods' }

______
### GetFireAtPoint ()
{: aria-label='Methods' }
#### [Fire](../Hyperspace/Fire) :GetFireAtPoint ([Point](../Hyperspace/Point) unknown)
{: aria-label='Methods' }

______
### GetFireAtPoint ()
{: aria-label='Methods' }
#### [Fire](../Hyperspace/Fire) :GetFireAtPoint ([Pointf](../Hyperspace/Pointf) unknown)
{: aria-label='Methods' }

______
### GetFireCount ()
{: aria-label='Methods' }
#### integer :GetFireCount (integer roomId)
{: aria-label='Methods' }

______
### GetMissileCount ()
{: aria-label='Methods' }
#### integer :GetMissileCount ()
{: aria-label='Methods' }

______
### GetOxygenPercentage ()
{: aria-label='Methods' }
#### integer :GetOxygenPercentage ()
{: aria-label='Methods' }

______
### GetRandomRoomCenter ()
{: aria-label='Methods' }
#### [Pointf](../Hyperspace/Pointf) :GetRandomRoomCenter ()
{: aria-label='Methods' }
Chooses a random room on the ship and returns the center point of that room

______
### GetRoomCenter ()
{: aria-label='Methods' }
#### [Pointf](../Hyperspace/Pointf) :GetRoomCenter (integer roomId)
{: aria-label='Methods' }
Gets the room center point of a specific room id.

______
### GetSelectedCrewPoint ()
{: aria-label='Methods' }
#### [CrewMember](../Hyperspace/CrewMember) :GetSelectedCrewPoint (integer x, integer y, boolean intruder)
{: aria-label='Methods' }

______
### GetShieldPower ()
{: aria-label='Methods' }
#### [ShieldPower](../Hyperspace/ShieldPower) :GetShieldPower ()
{: aria-label='Methods' }

______
### GetSystem ()
{: aria-label='Methods' }
#### [ShipSystem](../Hyperspace/ShipSystem) :GetSystem (integer systemId)
{: aria-label='Methods' }
You can also just access the system directly with fields below if it's one of the vanilla systems like `oxygenSystem` `medbaySystem` etc... but custom systems like Temporal currently need to be accessed by id.

______
### GetSystemInRoom ()
{: aria-label='Methods' }
#### [ShipSystem](../Hyperspace/ShipSystem) :GetSystemInRoom (integer roomId)
{: aria-label='Methods' }
Returns the system in a specific room id. If there is no system in the room, returns 0.

______
### GetSystemPower ()
{: aria-label='Methods' }
#### integer :GetSystemPower (integer systemId)
{: aria-label='Methods' }
How much power is assigned to this system

______
### GetSystemPowerMax ()
{: aria-label='Methods' }
#### integer :GetSystemPowerMax (integer systemId)
{: aria-label='Methods' }
What is the max power level of this system, functionally this is the same as the system's "level"

______
### GetSystemRoom ()
{: aria-label='Methods' }
#### integer :GetSystemRoom (integer sysId)
{: aria-label='Methods' }
Find what roomId a system is in, could be useful for AI targeting mechanics or some cheesy player weapon that can only attack one system or something.

______
### GetTooltip ()
{: aria-label='Methods' }
#### string :GetTooltip (integer x, integer y)
{: aria-label='Methods' }

______
### GetWeaponList ()
{: aria-label='Methods' }
#### vector\<[ProjectileFactory](../Hyperspace/ProjectileFactory)\> :GetWeaponList ()
{: aria-label='Methods' }
Return a vector of weapons on this ship, can be treated like an array in Lua.

______
### HasSystem ()
{: aria-label='Methods' }
#### boolean :HasSystem (integer systemId)
{: aria-label='Methods' }
Does the ship have a specific system, true/false

______
### InstantPowerShields ()
{: aria-label='Methods' }
#### void :InstantPowerShields ()
{: aria-label='Methods' }

______
### IsCrewFull ()
{: aria-label='Methods' }
#### boolean :IsCrewFull ()
{: aria-label='Methods' }

______
### IsCrewOverFull ()
{: aria-label='Methods' }
#### boolean :IsCrewOverFull ()
{: aria-label='Methods' }

______
### IsSystemHacked ()
{: aria-label='Methods' }
#### integer :IsSystemHacked (integer systemId)
{: aria-label='Methods' }
Returns the "hacking level" of the system. 0 means there is no hacking drone on the system, 1 means there is a hacking drone attached but is not currently being hacked, 2 means there is a hacking drone and the system is being hacked.

______
### ModifyDroneCount ()
{: aria-label='Methods' }
#### void :ModifyDroneCount (integer drones)
{: aria-label='Methods' }

______
### ModifyMissileCount ()
{: aria-label='Methods' }
#### void :ModifyMissileCount (integer missiles)
{: aria-label='Methods' }

______
### ModifyScrapCount ()
{: aria-label='Methods' }
#### void :ModifyScrapCount (integer scrap, boolean income)
{: aria-label='Methods' }
`income` determines whether or not augments should be activated (e.g. Scrap Recovery Arm and Repair Arm).

______
### OnInit ()
{: aria-label='Methods' }
#### integer :OnInit ([ShipBlueprint](../Hyperspace/ShipBlueprint) bp, integer shipLevel)
{: aria-label='Methods' }

______
### PrepareSuperBarrage ()
{: aria-label='Methods' }
#### void :PrepareSuperBarrage ()
{: aria-label='Methods' }
I do not know if this is safe to call

______
### PrepareSuperDrones ()
{: aria-label='Methods' }
#### void :PrepareSuperDrones ()
{: aria-label='Methods' }
I do not know if this is safe to call

______
### RemoveItem ()
{: aria-label='Methods' }
#### void :RemoveItem (string name, boolean checkCargo=false)
{: aria-label='Methods' }
Remove an item by name (equivalent to removing via an event).
checkCargo indicates if items will be removed from cargo if not present in weapon/drone system.

______
### RemoveItem ()
{: aria-label='Methods' }
#### void :RemoveItem (string name)
{: aria-label='Methods' }

______
### RemoveSystem ()
{: aria-label='Methods' }
#### void :RemoveSystem (integer systemId)
{: aria-label='Methods' }

______
### ResetScrapLevel ()
{: aria-label='Methods' }
#### void :ResetScrapLevel ()
{: aria-label='Methods' }

______
### RestoreCrewPositions ()
{: aria-label='Methods' }
#### boolean :RestoreCrewPositions ()
{: aria-label='Methods' }
Same as hitting the button to return crew to their original positions.

______
### SelectRandomCrew ()
{: aria-label='Methods' }
#### [CrewBlueprint](../Hyperspace/CrewBlueprint) :SelectRandomCrew (integer seed, string racePref)
{: aria-label='Methods' }
Select random crew from the ship *for ~~execution~~ selection of your diabolical plans*.
Not sure why there is a seed option, not sure if you should give it a fixed number or call `Hyperspace.random32()` for a nice random number.

______
### SetDestroyed ()
{: aria-label='Methods' }
#### void :SetDestroyed ()
{: aria-label='Methods' }
*Blow up the damn ship Jean-Luc!*

______
### SetSystemPowerLoss ()
{: aria-label='Methods' }
#### void :SetSystemPowerLoss (integer systemId, integer powerLoss)
{: aria-label='Methods' }
Sets a power loss level, like from an event except can be done at any time regardless of an event.

______
### StartFire ()
{: aria-label='Methods' }
#### void :StartFire (integer roomId)
{: aria-label='Methods' }
Yeah, it does *exactly what you think it does* [you monster](https://gfycat.com/complexcarefulant).

______
### SystemFunctions ()
{: aria-label='Methods' }
#### boolean :SystemFunctions (integer systemId)
{: aria-label='Methods' }
Returns whether the system has any power assigned to it.

______
### TeleportCrew ()
{: aria-label='Methods' }
#### vector\<[CrewMember](../Hyperspace/CrewMember)\> :TeleportCrew (integer roomId, boolean intruders)
{: aria-label='Methods' }
Teleport crew & get back the list of CrewMembers.
I think there might be something more you need to do to give them a destination so they don't simply get teleport-ed to space, *unless you know... that was the intention*.

___


## Fields
### _targetable (Read-only)
{: aria-label='Fields' }
#### [Targetable](../Hyperspace/Targetable) ._targetable
{: aria-label='Fields' }
**Read-only**

______
### artillerySystems (Read-only)
{: aria-label='Fields' }
#### vector\<[ArtillerySystem](../Hyperspace/ArtillerySystem)\> .artillerySystems
{: aria-label='Fields' }
Array (vector) of artillery systems on this ship, you will need to check for length
**Note:** Unlike Lua arrays, because this is a C vector internally it will start at index `0` not index `1` so `.artillerySystems[0]` is the first artillery system.
Field is **read-only** but fields under this object may still be mutable.

______
### bAutomated
{: aria-label='Fields' }
#### boolean .bAutomated
{: aria-label='Fields' }
**read-only**

______
### bContainsPlayerCrew (Read-only)
{: aria-label='Fields' }
#### boolean .bContainsPlayerCrew
{: aria-label='Fields' }
**read-only**

______
### bDestroyed (Read-only)
{: aria-label='Fields' }
#### boolean .bDestroyed
{: aria-label='Fields' }
**Since 1.4.0**

______
### bHighlightCrew
{: aria-label='Fields' }
#### boolean .bHighlightCrew
{: aria-label='Fields' }

______
### bInvincible
{: aria-label='Fields' }
#### boolean .bInvincible
{: aria-label='Fields' }

______
### bJumping (Read-only)
{: aria-label='Fields' }
#### boolean .bJumping
{: aria-label='Fields' }
**read-only**

______
### bShowRoom
{: aria-label='Fields' }
#### boolean .bShowRoom
{: aria-label='Fields' }

______
### batterySystem (Read-only)
{: aria-label='Fields' }
#### [BatterySystem](../Hyperspace/BatterySystem) .batterySystem
{: aria-label='Fields' }
Field is **read-only** but fields under this object may still be mutable.

______
### cloakSystem (Read-only)
{: aria-label='Fields' }
#### [CloakingSystem](../Hyperspace/CloakingSystem) .cloakSystem
{: aria-label='Fields' }
Field is **read-only** but fields under this object may still be mutable.

______
### cloneSystem (Read-only)
{: aria-label='Fields' }
#### [CloneSystem](../Hyperspace/CloneSystem) .cloneSystem
{: aria-label='Fields' }
**Note:** shares system with Medbay system and both cannot exist at the same time
Field is **read-only** but fields under this object may still be mutable.

______
### crewCounts (Read-only)
{: aria-label='Fields' }
#### vector\<vector\<integer\>\> .crewCounts
{: aria-label='Fields' }
Note: Double vector, both indices start at 0
Field is **read-only** but fields under this object may still be mutable.

______
### currentScrap (Read-only)
{: aria-label='Fields' }
#### integer .currentScrap
{: aria-label='Fields' }
**read-only** use the modify method if you really want to change this

______
### current_target (Read-only)
{: aria-label='Fields' }
#### [ShipManager](../Hyperspace/ShipManager) .current_target
{: aria-label='Fields' }

______
### damageCloaked
{: aria-label='Fields' }
#### integer .damageCloaked
{: aria-label='Fields' }

______
### droneSystem (Read-only)
{: aria-label='Fields' }
#### [DroneSystem](../Hyperspace/DroneSystem) .droneSystem
{: aria-label='Fields' }
Field is **read-only** but fields under this object may still be mutable.

______
### enemyDamagedUncloaked
{: aria-label='Fields' }
#### boolean .enemyDamagedUncloaked
{: aria-label='Fields' }

______
### engineSystem (Read-only)
{: aria-label='Fields' }
#### [EngineSystem](../Hyperspace/EngineSystem) .engineSystem
{: aria-label='Fields' }
Field is **read-only** but fields under this object may still be mutable.

______
### extend (Read-only)
{: aria-label='Fields' }
#### [ShipManager_Extend](../Hyperspace/ShipManager_Extend) .extend
{: aria-label='Fields' }
**Since 1.4.0**

______
### failedDodgeCounter
{: aria-label='Fields' }
#### integer .failedDodgeCounter
{: aria-label='Fields' }

______
### fireSpreader
{: aria-label='Fields' }
#### [Spreader_Fire](../Hyperspace/Spreader_Fire) .fireSpreader
{: aria-label='Fields' }

______
### fuel_count
{: aria-label='Fields' }
#### integer .fuel_count
{: aria-label='Fields' }
Unlike other resources, fuel is mutable and should be modified directly instead of with a modify method

______
### hackingSystem (Read-only)
{: aria-label='Fields' }
#### [HackingSystem](../Hyperspace/HackingSystem) .hackingSystem
{: aria-label='Fields' }
Field is **read-only** but fields under this object may still be mutable.

______
### iCustomizeMode (Read-only)
{: aria-label='Fields' }
#### integer .iCustomizeMode
{: aria-label='Fields' }
**read-only**
2 while in the hangar, 0 while in a run

______
### iIntruderCount (Read-only)
{: aria-label='Fields' }
#### integer .iIntruderCount
{: aria-label='Fields' }
**read-only**

______
### iLastDamage (Read-only)
{: aria-label='Fields' }
#### integer .iLastDamage
{: aria-label='Fields' }
**read-only** (not sure if it's safe to make this editable)

______
### jump_timer (Read-only)
{: aria-label='Fields' }
#### pair\<number, number\> .jump_timer
{: aria-label='Fields' }
**read-only** (not sure if it's safe to make this editable)

______
### lastEngineStatus (Read-only)
{: aria-label='Fields' }
#### boolean .lastEngineStatus
{: aria-label='Fields' }
**read-only**

______
### lastJumpReady (Read-only)
{: aria-label='Fields' }
#### boolean .lastJumpReady
{: aria-label='Fields' }
**read-only**

______
### medbaySystem (Read-only)
{: aria-label='Fields' }
#### [MedbaySystem](../Hyperspace/MedbaySystem) .medbaySystem
{: aria-label='Fields' }
**Note:** shares system with Clonebay system and both cannot exist at the same time
Field is **read-only** but fields under this object may still be mutable.

______
### mindSystem (Read-only)
{: aria-label='Fields' }
#### [MindSystem](../Hyperspace/MindSystem) .mindSystem
{: aria-label='Fields' }
Field is **read-only** but fields under this object may still be mutable.

______
### myBlueprint (Read-only)
{: aria-label='Fields' }
#### [ShipBlueprint](../Hyperspace/ShipBlueprint) .myBlueprint
{: aria-label='Fields' }
**read-only**

______
### oxygenSystem (Read-only)
{: aria-label='Fields' }
#### [OxygenSystem](../Hyperspace/OxygenSystem) .oxygenSystem
{: aria-label='Fields' }
Field is **read-only** but fields under this object may still be mutable.

______
### shieldSystem (Read-only)
{: aria-label='Fields' }
#### [Shields](../Hyperspace/Shields) .shieldSystem
{: aria-label='Fields' }
Field is **read-only** but fields under this object may still be mutable.

______
### ship (Read-only)
{: aria-label='Fields' }
#### [Ship](../Hyperspace/Ship) .ship
{: aria-label='Fields' }
Field is **read-only** but fields under this object may still be mutable.

______
### shipLevel (Read-only)
{: aria-label='Fields' }
#### integer .shipLevel
{: aria-label='Fields' }
**read-only**

______
### spaceDrones
{: aria-label='Fields' }
#### vector\<[SpaceDrone](../Hyperspace/SpaceDrone)\> .spaceDrones
{: aria-label='Fields' }

______
### superBarrage
{: aria-label='Fields' }
#### vector\<[Projectile](../Hyperspace/Projectile)\> .superBarrage
{: aria-label='Fields' }
Note: Vectors start at index 0, unlike normal arrays in Lua

______
### superDrones
{: aria-label='Fields' }
#### vector\<[SpaceDrone](../Hyperspace/SpaceDrone)\> .superDrones
{: aria-label='Fields' }
Note: Vectors start at index 0, unlike normal arrays in Lua

______
### teleportSystem (Read-only)
{: aria-label='Fields' }
#### [TeleportSystem](../Hyperspace/TeleportSystem) .teleportSystem
{: aria-label='Fields' }
Field is **read-only** but fields under this object may still be mutable.

______
### tempDroneCount (Read-only)
{: aria-label='Fields' }
#### integer .tempDroneCount
{: aria-label='Fields' }
**read-only**

______
### tempMissileCount (Read-only)
{: aria-label='Fields' }
#### integer .tempMissileCount
{: aria-label='Fields' }
**read-only**

______
### tempVision (Read-only)
{: aria-label='Fields' }
#### vector\<boolean\> .tempVision
{: aria-label='Fields' }
**read-only**
Note: Vectors start at index 0, unlike normal arrays in Lua

______
### vCrewList (Read-only)
{: aria-label='Fields' }
#### vector\<[CrewMember](../Hyperspace/CrewMember)\> .vCrewList
{: aria-label='Fields' }
Array (vector) of crew members on this ship
**Note:** Vectors are 0 indexed unlike lua's normal arrays
Field is **read-only** but fields under this object may still be mutable.

______
### vSystemList (Read-only)
{: aria-label='Fields' }
#### vector\<[ShipSystem](../Hyperspace/ShipSystem)\> .vSystemList
{: aria-label='Fields' }
**Read-only** currently, however we might need to explore if this would be a safe way to remove a system
Fields under this object may still be mutable (see their docs).
Holds a vector (array in lua) of ship systems that you can iterate over

______
### weaponSystem (Read-only)
{: aria-label='Fields' }
#### [WeaponSystem](../Hyperspace/WeaponSystem) .weaponSystem
{: aria-label='Fields' }
Field is **read-only** but fields under this object may still be mutable.

___
