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
{: aria-label='Functions' }
#### [CrewMember](../Hyperspace/CrewMember) :AddCrewMemberFromBlueprint ([CrewBlueprint](../Hyperspace/CrewBlueprint) bp, integer slot, boolean init, integer roomId, boolean intruder)
{: aria-label='Functions' }

______
### AddCrewMemberFromString ()
{: aria-label='Functions' }
#### [CrewMember](../Hyperspace/CrewMember) :AddCrewMemberFromString (string name, string race, boolean intruder, integer roomId, boolean init, boolean male)
{: aria-label='Functions' }

______
### AddDrone ()
{: aria-label='Functions' }
#### [Drone](../Hyperspace/Drone) :AddDrone ([DroneBlueprint](../Hyperspace/DroneBlueprint) bp, integer slot)
{: aria-label='Functions' }

______
### AddInitialCrew ()
{: aria-label='Functions' }
#### void :AddInitialCrew (vector\<[CrewBlueprint](../Hyperspace/CrewBlueprint)\> blueprints)
{: aria-label='Functions' }

______
### AddSystem ()
{: aria-label='Functions' }
#### integer :AddSystem (integer systemId)
{: aria-label='Functions' }

______
### AddWeapon ()
{: aria-label='Functions' }
#### integer :AddWeapon ([WeaponBlueprint](../Hyperspace/WeaponBlueprint) bp, integer slot)
{: aria-label='Functions' }

______
### CanFitSubsystem ()
{: aria-label='Functions' }
#### boolean :CanFitSubsystem (integer systemId)
{: aria-label='Functions' }

______
### CanFitSystem ()
{: aria-label='Functions' }
#### boolean :CanFitSystem (integer systemId)
{: aria-label='Functions' }

______
### CanUpgrade ()
{: aria-label='Functions' }
#### integer :CanUpgrade (integer systemId, integer amount)
{: aria-label='Functions' }

______
### ClearStatusAll ()
{: aria-label='Functions' }
#### void :ClearStatusAll ()
{: aria-label='Functions' }

______
### ClearStatusSystem ()
{: aria-label='Functions' }
#### void :ClearStatusSystem (integer system)
{: aria-label='Functions' }

______
### CountCrew ()
{: aria-label='Functions' }
#### integer :CountCrew (boolean boarders)
{: aria-label='Functions' }
return count of crew on this ship, true for boarders false for regular crewmembers.

______
### CountCrewShipId ()
{: aria-label='Functions' }
#### integer :CountCrewShipId (integer roomId, integer shipId)
{: aria-label='Functions' }
Counts crew in a room. shipId corresponds to which ship owns the crewmembers, 0 being the player and 1 being the enemy.

______
### CreateSpaceDrone ()
{: aria-label='Functions' }
#### [SpaceDrone](../Hyperspace/SpaceDrone) :CreateSpaceDrone ([DroneBlueprint](../Hyperspace/DroneBlueprint) bp)
{: aria-label='Functions' }

______
### DamageArea ()
{: aria-label='Functions' }
#### boolean :DamageArea ([Pointf](../Hyperspace/Pointf) location, [Damage](../Hyperspace/Damage) dmg, boolean forceHit)
{: aria-label='Functions' }

______
### DamageBeam ()
{: aria-label='Functions' }
#### boolean :DamageBeam ([Pointf](../Hyperspace/Pointf) location1, [Pointf](../Hyperspace/Pointf) location2, [Damage](../Hyperspace/Damage) dmg)
{: aria-label='Functions' }

______
### DamageHull ()
{: aria-label='Functions' }
#### integer :DamageHull (integer dmg, boolean force)
{: aria-label='Functions' }
It directly damages the hull? What's more to say, I think negative numbers heal the hull. Could be cool for some random lifesaving or lifetaking mechanics that run mid-battle instead of during an event. Imagine if you could dump all power into hull integrity or something and lose 10% power for the rest of the fight but gain 10% hull, could be fun!
`force` ignores whether or not the ship is jumping. If it is false and the ship is jumping, the damage will not be applied.

______
### DamageSystem ()
{: aria-label='Functions' }
#### void :DamageSystem (integer systemId, [Damage](../Hyperspace/Damage) damage)
{: aria-label='Functions' }

______
### DoSensorsProvide ()
{: aria-label='Functions' }
#### boolean :DoSensorsProvide (integer vision)
{: aria-label='Functions' }
`vision` is the sensor level.

______
### DoorsFunction ()
{: aria-label='Functions' }
#### boolean :DoorsFunction ()
{: aria-label='Functions' }
Do the doors work or not

______
### FindCrew ()
{: aria-label='Functions' }
#### [CrewMember](../Hyperspace/CrewMember) :FindCrew ([CrewBlueprint](../Hyperspace/CrewBlueprint) bp)
{: aria-label='Functions' }

______
### ForceDecreaseSystemPower ()
{: aria-label='Functions' }
#### boolean :ForceDecreaseSystemPower (integer sys)
{: aria-label='Functions' }

______
### GetAvailablePower ()
{: aria-label='Functions' }
#### pair\<integer, integer\> :GetAvailablePower ()
{: aria-label='Functions' }
First element of the pair is the maximum reactor power, the second element is the available reactor power.

______
### GetCrewmember ()
{: aria-label='Functions' }
#### [CrewMember](../Hyperspace/CrewMember) :GetCrewmember (integer slot, boolean present)
{: aria-label='Functions' }

______
### GetDodgeFactor ()
{: aria-label='Functions' }
#### integer :GetDodgeFactor ()
{: aria-label='Functions' }

______
### GetDodged ()
{: aria-label='Functions' }
#### boolean :GetDodged ()
{: aria-label='Functions' }
Calculates whether a projectile should be dodged or not.
Note: 5 calls of this method that return false while the player has fully upgraded, fully powered engines will unlock the achievement 'Astronomically Low Odds'.

______
### GetDroneCount ()
{: aria-label='Functions' }
#### integer :GetDroneCount ()
{: aria-label='Functions' }
Returns the number of drone parts the ship has.

______
### GetDroneList ()
{: aria-label='Functions' }
#### vector\<[Drone](../Hyperspace/Drone)\> :GetDroneList ()
{: aria-label='Functions' }
Returns the list of Drones for this ship, the `std::vector` it returns can be accessed like an array in Lua

______
### GetFire ()
{: aria-label='Functions' }
#### [Fire](../Hyperspace/Fire) :GetFire (integer unknown, integer unknown)
{: aria-label='Functions' }

______
### GetFireAtPoint ()
{: aria-label='Functions' }
#### [Fire](../Hyperspace/Fire) :GetFireAtPoint (number unknown, number unknown)
{: aria-label='Functions' }

______
### GetFireAtPoint ()
{: aria-label='Functions' }
#### [Fire](../Hyperspace/Fire) :GetFireAtPoint ([Point](../Hyperspace/Point) unknown)
{: aria-label='Functions' }

______
### GetFireAtPoint ()
{: aria-label='Functions' }
#### [Fire](../Hyperspace/Fire) :GetFireAtPoint ([Pointf](../Hyperspace/Pointf) unknown)
{: aria-label='Functions' }

______
### GetFireCount ()
{: aria-label='Functions' }
#### integer :GetFireCount (integer roomId)
{: aria-label='Functions' }

______
### GetMissileCount ()
{: aria-label='Functions' }
#### integer :GetMissileCount ()
{: aria-label='Functions' }

______
### GetOxygenPercentage ()
{: aria-label='Functions' }
#### integer :GetOxygenPercentage ()
{: aria-label='Functions' }

______
### GetRandomRoomCenter ()
{: aria-label='Functions' }
#### [Pointf](../Hyperspace/Pointf) :GetRandomRoomCenter ()
{: aria-label='Functions' }
Chooses a random room on the ship and returns the center point of that room

______
### GetRoomCenter ()
{: aria-label='Functions' }
#### [Pointf](../Hyperspace/Pointf) :GetRoomCenter (integer roomId)
{: aria-label='Functions' }
Gets the room center point of a specific room id.

______
### GetSelectedCrewPoint ()
{: aria-label='Functions' }
#### [CrewMember](../Hyperspace/CrewMember) :GetSelectedCrewPoint (integer x, integer y, boolean intruder)
{: aria-label='Functions' }

______
### GetShieldPower ()
{: aria-label='Functions' }
#### [ShieldPower](../Hyperspace/ShieldPower) :GetShieldPower ()
{: aria-label='Functions' }

______
### GetSystem ()
{: aria-label='Functions' }
#### [ShipSystem](../Hyperspace/ShipSystem) :GetSystem (integer systemId)
{: aria-label='Functions' }
You can also just access the system directly with fields below if it's one of the vanilla systems like `oxygenSystem` `medbaySystem` etc... but custom systems like Temporal currently need to be accessed by id.

______
### GetSystemInRoom ()
{: aria-label='Functions' }
#### [ShipSystem](../Hyperspace/ShipSystem) :GetSystemInRoom (integer roomId)
{: aria-label='Functions' }
Returns the system in a specific room id. If there is no system in the room, returns 0.

______
### GetSystemPower ()
{: aria-label='Functions' }
#### integer :GetSystemPower (integer systemId)
{: aria-label='Functions' }
How much power is assigned to this system

______
### GetSystemPowerMax ()
{: aria-label='Functions' }
#### integer :GetSystemPowerMax (integer systemId)
{: aria-label='Functions' }
What is the max power level of this system, functionally this is the same as the system's "level"

______
### GetSystemRoom ()
{: aria-label='Functions' }
#### integer :GetSystemRoom (integer sysId)
{: aria-label='Functions' }
Find what roomId a system is in, could be useful for AI targeting mechanics or some cheesy player weapon that can only attack one system or something.

______
### GetTooltip ()
{: aria-label='Functions' }
#### string :GetTooltip (integer x, integer y)
{: aria-label='Functions' }

______
### GetWeaponList ()
{: aria-label='Functions' }
#### vector\<[ProjectileFactory](../Hyperspace/ProjectileFactory)\> :GetWeaponList ()
{: aria-label='Functions' }
Return a vector of weapons on this ship, can be treated like an array in Lua.

______
### HasSystem ()
{: aria-label='Functions' }
#### boolean :HasSystem (integer systemId)
{: aria-label='Functions' }
Does the ship have a specific system, true/false

______
### InstantPowerShields ()
{: aria-label='Functions' }
#### void :InstantPowerShields ()
{: aria-label='Functions' }

______
### IsCrewFull ()
{: aria-label='Functions' }
#### boolean :IsCrewFull ()
{: aria-label='Functions' }

______
### IsCrewOverFull ()
{: aria-label='Functions' }
#### boolean :IsCrewOverFull ()
{: aria-label='Functions' }

______
### IsSystemHacked ()
{: aria-label='Functions' }
#### integer :IsSystemHacked (integer systemId)
{: aria-label='Functions' }
Returns the "hacking level" of the system. 0 means there is no hacking drone on the system, 1 means there is a hacking drone attached but is not currently being hacked, 2 means there is a hacking drone and the system is being hacked.

______
### ModifyDroneCount ()
{: aria-label='Functions' }
#### void :ModifyDroneCount (integer drones)
{: aria-label='Functions' }

______
### ModifyMissileCount ()
{: aria-label='Functions' }
#### void :ModifyMissileCount (integer missiles)
{: aria-label='Functions' }

______
### ModifyScrapCount ()
{: aria-label='Functions' }
#### void :ModifyScrapCount (integer scrap, boolean income)
{: aria-label='Functions' }
`income` determines whether or not augments should be activated (e.g. Scrap Recovery Arm and Repair Arm).

______
### OnInit ()
{: aria-label='Functions' }
#### integer :OnInit ([ShipBlueprint](../Hyperspace/ShipBlueprint) bp, integer shipLevel)
{: aria-label='Functions' }

______
### PrepareSuperBarrage ()
{: aria-label='Functions' }
#### void :PrepareSuperBarrage ()
{: aria-label='Functions' }
I do not know if this is safe to call

______
### PrepareSuperDrones ()
{: aria-label='Functions' }
#### void :PrepareSuperDrones ()
{: aria-label='Functions' }
I do not know if this is safe to call

______
### RemoveItem ()
{: aria-label='Functions' }
#### void :RemoveItem (string name, boolean checkCargo=false)
{: aria-label='Functions' }
Remove an item by name (equivalent to removing via an event).
checkCargo indicates if items will be removed from cargo if not present in weapon/drone system.

______
### RemoveItem ()
{: aria-label='Functions' }
#### void :RemoveItem (string name)
{: aria-label='Functions' }

______
### RemoveSystem ()
{: aria-label='Functions' }
#### void :RemoveSystem (integer systemId)
{: aria-label='Functions' }

______
### ResetScrapLevel ()
{: aria-label='Functions' }
#### void :ResetScrapLevel ()
{: aria-label='Functions' }

______
### RestoreCrewPositions ()
{: aria-label='Functions' }
#### boolean :RestoreCrewPositions ()
{: aria-label='Functions' }
Same as hitting the button to return crew to their original positions.

______
### SelectRandomCrew ()
{: aria-label='Functions' }
#### [CrewBlueprint](../Hyperspace/CrewBlueprint) :SelectRandomCrew (integer seed, string racePref)
{: aria-label='Functions' }
Select random crew from the ship *for ~~execution~~ selection of your diabolical plans*.
Not sure why there is a seed option, not sure if you should give it a fixed number or call `Hyperspace.random32()` for a nice random number.

______
### SetDestroyed ()
{: aria-label='Functions' }
#### void :SetDestroyed ()
{: aria-label='Functions' }
*Blow up the damn ship Jean-Luc!*

______
### SetSystemPowerLoss ()
{: aria-label='Functions' }
#### void :SetSystemPowerLoss (integer systemId, integer powerLoss)
{: aria-label='Functions' }
Sets a power loss level, like from an event except can be done at any time regardless of an event.

______
### StartFire ()
{: aria-label='Functions' }
#### void :StartFire (integer roomId)
{: aria-label='Functions' }
Yeah, it does *exactly what you think it does* [you monster](https://gfycat.com/complexcarefulant).

______
### SystemFunctions ()
{: aria-label='Functions' }
#### boolean :SystemFunctions (integer systemId)
{: aria-label='Functions' }
Returns whether the system has any power assigned to it.

______
### TeleportCrew ()
{: aria-label='Functions' }
#### vector\<[CrewMember](../Hyperspace/CrewMember)\> :TeleportCrew (integer roomId, boolean intruders)
{: aria-label='Functions' }
Teleport crew & get back the list of CrewMembers.
I think there might be something more you need to do to give them a destination so they don't simply get teleport-ed to space, *unless you know... that was the intention*.

___


## Fields
### _targetable (Read-only)
{: aria-label='Variables' }
#### [Targetable](../Hyperspace/Targetable) ._targetable
{: aria-label='Variables' }
**Read-only**

______
### artillerySystems (Read-only)
{: aria-label='Variables' }
#### vector\<[ArtillerySystem](../Hyperspace/ArtillerySystem)\> .artillerySystems
{: aria-label='Variables' }
Array (vector) of artillery systems on this ship, you will need to check for length
**Note:** Unlike Lua arrays, because this is a C vector internally it will start at index `0` not index `1` so `.artillerySystems[0]` is the first artillery system.
Field is **read-only** but fields under this object may still be mutable.

______
### bAutomated
{: aria-label='Variables' }
#### boolean .bAutomated
{: aria-label='Variables' }
**read-only**

______
### bContainsPlayerCrew (Read-only)
{: aria-label='Variables' }
#### boolean .bContainsPlayerCrew
{: aria-label='Variables' }
**read-only**

______
### bDestroyed (Read-only)
{: aria-label='Variables' }
#### boolean .bDestroyed
{: aria-label='Variables' }
**Since 1.4.0**

______
### bHighlightCrew
{: aria-label='Variables' }
#### boolean .bHighlightCrew
{: aria-label='Variables' }

______
### bInvincible
{: aria-label='Variables' }
#### boolean .bInvincible
{: aria-label='Variables' }

______
### bJumping (Read-only)
{: aria-label='Variables' }
#### boolean .bJumping
{: aria-label='Variables' }
**read-only**

______
### bShowRoom
{: aria-label='Variables' }
#### boolean .bShowRoom
{: aria-label='Variables' }

______
### batterySystem (Read-only)
{: aria-label='Variables' }
#### [BatterySystem](../Hyperspace/BatterySystem) .batterySystem
{: aria-label='Variables' }
Field is **read-only** but fields under this object may still be mutable.

______
### cloakSystem (Read-only)
{: aria-label='Variables' }
#### [CloakingSystem](../Hyperspace/CloakingSystem) .cloakSystem
{: aria-label='Variables' }
Field is **read-only** but fields under this object may still be mutable.

______
### cloneSystem (Read-only)
{: aria-label='Variables' }
#### [CloneSystem](../Hyperspace/CloneSystem) .cloneSystem
{: aria-label='Variables' }
**Note:** shares system with Medbay system and both cannot exist at the same time
Field is **read-only** but fields under this object may still be mutable.

______
### crewCounts (Read-only)
{: aria-label='Variables' }
#### vector\<vector\<integer\>\> .crewCounts
{: aria-label='Variables' }
Note: Double vector, both indices start at 0
Field is **read-only** but fields under this object may still be mutable.

______
### currentScrap (Read-only)
{: aria-label='Variables' }
#### integer .currentScrap
{: aria-label='Variables' }
**read-only** use the modify method if you really want to change this

______
### current_target (Read-only)
{: aria-label='Variables' }
#### [ShipManager](../Hyperspace/ShipManager) .current_target
{: aria-label='Variables' }

______
### damageCloaked
{: aria-label='Variables' }
#### integer .damageCloaked
{: aria-label='Variables' }

______
### droneSystem (Read-only)
{: aria-label='Variables' }
#### [DroneSystem](../Hyperspace/DroneSystem) .droneSystem
{: aria-label='Variables' }
Field is **read-only** but fields under this object may still be mutable.

______
### enemyDamagedUncloaked
{: aria-label='Variables' }
#### boolean .enemyDamagedUncloaked
{: aria-label='Variables' }

______
### engineSystem (Read-only)
{: aria-label='Variables' }
#### [EngineSystem](../Hyperspace/EngineSystem) .engineSystem
{: aria-label='Variables' }
Field is **read-only** but fields under this object may still be mutable.

______
### extend (Read-only)
{: aria-label='Variables' }
#### [ShipManager_Extend](../Hyperspace/ShipManager_Extend) .extend
{: aria-label='Variables' }
**Since 1.4.0**

______
### failedDodgeCounter
{: aria-label='Variables' }
#### integer .failedDodgeCounter
{: aria-label='Variables' }

______
### fireSpreader
{: aria-label='Variables' }
#### [Spreader_Fire](../Hyperspace/Spreader_Fire) .fireSpreader
{: aria-label='Variables' }

______
### fuel_count
{: aria-label='Variables' }
#### integer .fuel_count
{: aria-label='Variables' }
Unlike other resources, fuel is mutable and should be modified directly instead of with a modify method

______
### hackingSystem (Read-only)
{: aria-label='Variables' }
#### [HackingSystem](../Hyperspace/HackingSystem) .hackingSystem
{: aria-label='Variables' }
Field is **read-only** but fields under this object may still be mutable.

______
### iCustomizeMode (Read-only)
{: aria-label='Variables' }
#### integer .iCustomizeMode
{: aria-label='Variables' }
**read-only**
2 while in the hangar, 0 while in a run

______
### iIntruderCount (Read-only)
{: aria-label='Variables' }
#### integer .iIntruderCount
{: aria-label='Variables' }
**read-only**

______
### iLastDamage (Read-only)
{: aria-label='Variables' }
#### integer .iLastDamage
{: aria-label='Variables' }
**read-only** (not sure if it's safe to make this editable)

______
### jump_timer (Read-only)
{: aria-label='Variables' }
#### pair\<number, number\> .jump_timer
{: aria-label='Variables' }
**read-only** (not sure if it's safe to make this editable)

______
### lastEngineStatus (Read-only)
{: aria-label='Variables' }
#### boolean .lastEngineStatus
{: aria-label='Variables' }
**read-only**

______
### lastJumpReady (Read-only)
{: aria-label='Variables' }
#### boolean .lastJumpReady
{: aria-label='Variables' }
**read-only**

______
### medbaySystem (Read-only)
{: aria-label='Variables' }
#### [MedbaySystem](../Hyperspace/MedbaySystem) .medbaySystem
{: aria-label='Variables' }
**Note:** shares system with Clonebay system and both cannot exist at the same time
Field is **read-only** but fields under this object may still be mutable.

______
### mindSystem (Read-only)
{: aria-label='Variables' }
#### [MindSystem](../Hyperspace/MindSystem) .mindSystem
{: aria-label='Variables' }
Field is **read-only** but fields under this object may still be mutable.

______
### myBlueprint (Read-only)
{: aria-label='Variables' }
#### [ShipBlueprint](../Hyperspace/ShipBlueprint) .myBlueprint
{: aria-label='Variables' }
**read-only**

______
### oxygenSystem (Read-only)
{: aria-label='Variables' }
#### [OxygenSystem](../Hyperspace/OxygenSystem) .oxygenSystem
{: aria-label='Variables' }
Field is **read-only** but fields under this object may still be mutable.

______
### shieldSystem (Read-only)
{: aria-label='Variables' }
#### [Shields](../Hyperspace/Shields) .shieldSystem
{: aria-label='Variables' }
Field is **read-only** but fields under this object may still be mutable.

______
### ship (Read-only)
{: aria-label='Variables' }
#### [Ship](../Hyperspace/Ship) .ship
{: aria-label='Variables' }
Field is **read-only** but fields under this object may still be mutable.

______
### shipLevel (Read-only)
{: aria-label='Variables' }
#### integer .shipLevel
{: aria-label='Variables' }
**read-only**

______
### spaceDrones
{: aria-label='Variables' }
#### vector\<[SpaceDrone](../Hyperspace/SpaceDrone)\> .spaceDrones
{: aria-label='Variables' }

______
### superBarrage
{: aria-label='Variables' }
#### vector\<[Projectile](../Hyperspace/Projectile)\> .superBarrage
{: aria-label='Variables' }
Note: Vectors start at index 0, unlike normal arrays in Lua

______
### superDrones
{: aria-label='Variables' }
#### vector\<[SpaceDrone](../Hyperspace/SpaceDrone)\> .superDrones
{: aria-label='Variables' }
Note: Vectors start at index 0, unlike normal arrays in Lua

______
### teleportSystem (Read-only)
{: aria-label='Variables' }
#### [TeleportSystem](../Hyperspace/TeleportSystem) .teleportSystem
{: aria-label='Variables' }
Field is **read-only** but fields under this object may still be mutable.

______
### tempDroneCount (Read-only)
{: aria-label='Variables' }
#### integer .tempDroneCount
{: aria-label='Variables' }
**read-only**

______
### tempMissileCount (Read-only)
{: aria-label='Variables' }
#### integer .tempMissileCount
{: aria-label='Variables' }
**read-only**

______
### tempVision (Read-only)
{: aria-label='Variables' }
#### vector\<boolean\> .tempVision
{: aria-label='Variables' }
**read-only**
Note: Vectors start at index 0, unlike normal arrays in Lua

______
### vCrewList (Read-only)
{: aria-label='Variables' }
#### vector\<[CrewMember](../Hyperspace/CrewMember)\> .vCrewList
{: aria-label='Variables' }
Array (vector) of crew members on this ship
**Note:** Vectors are 0 indexed unlike lua's normal arrays
Field is **read-only** but fields under this object may still be mutable.

______
### vSystemList (Read-only)
{: aria-label='Variables' }
#### vector\<[ShipSystem](../Hyperspace/ShipSystem)\> .vSystemList
{: aria-label='Variables' }
**Read-only** currently, however we might need to explore if this would be a safe way to remove a system
Fields under this object may still be mutable (see their docs).
Holds a vector (array in lua) of ship systems that you can iterate over

______
### weaponSystem (Read-only)
{: aria-label='Variables' }
#### [WeaponSystem](../Hyperspace/WeaponSystem) .weaponSystem
{: aria-label='Variables' }
Field is **read-only** but fields under this object may still be mutable.

___
