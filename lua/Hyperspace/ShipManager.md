---
layout: lua
title: ShipManager
lang: en
category: Class
---

# Class "ShipManager"


Extends: [ShipObject](../Hyperspace/ShipObject)

<!-- Head content to be pulled from "lua-source-parts-inject/Hyperspace/ShipManager/_head.md" -->


## Constructors
{: #Constructors .lua-content-section}
### ShipManager ()
{: #ShipManager .lua-content-item aria-label='Constructors' }
#### [ShipManager](../Hyperspace/ShipManager) ShipManager (integer shipId)
{: aria-label='Constructors' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ShipManager/ShipManager(integer).md" -->

___




## Methods
{: #Methods .lua-content-section}
<details markdown="1"><summary id="InheritedMethods" class="lua-content-item" markdown="span">Inherited Methods</summary>


#### From [ShipObject](ShipObject)

| Return Type | Method |
| --- | --- |
| boolean | :[AddAugmentation](ShipObject#AddAugmentation) (string augment) |
| void | :[ClearShipInfo](ShipObject#ClearShipInfo) () |
| integer | :[GetAugmentationCount](ShipObject#GetAugmentationCount) () |
| vector\<string\> | :[GetAugmentationList](ShipObject#GetAugmentationList) () |
| number | :[GetAugmentationValue](ShipObject#GetAugmentationValue) (string augment) |
| integer | :[HasAugmentation](ShipObject#HasAugmentation) (string augment) |
| integer | :[HasEquipment](ShipObject#HasEquipment) (string equipmentName, boolean checkCargo=false) |
| integer | :[HasEquipment](ShipObject#HasEquipment) (string equip) |
| void | :[RemoveAugmentation](ShipObject#RemoveAugmentation) (string augment) |

</details>

___
### AddCrewMemberFromBlueprint ()
{: #AddCrewMemberFromBlueprint .lua-content-item aria-label='Methods' }
#### [CrewMember](../Hyperspace/CrewMember) :AddCrewMemberFromBlueprint ([CrewBlueprint](../Hyperspace/CrewBlueprint) bp, integer slot, boolean init, integer roomId, boolean intruder)
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ShipManager/AddCrewMemberFromBlueprint(Hyperspace.CrewBlueprint,integer,boolean,integer,boolean).md" -->

___
### AddCrewMemberFromString ()
{: #AddCrewMemberFromString .lua-content-item aria-label='Methods' }
#### [CrewMember](../Hyperspace/CrewMember) :AddCrewMemberFromString (string name, string race, boolean intruder, integer roomId, boolean init, boolean male)
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ShipManager/AddCrewMemberFromString(string,string,boolean,integer,boolean,boolean).md" -->

___
### AddDrone ()
{: #AddDrone .lua-content-item aria-label='Methods' }
#### [Drone](../Hyperspace/Drone) :AddDrone ([DroneBlueprint](../Hyperspace/DroneBlueprint) bp, integer slot)
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ShipManager/AddDrone(Hyperspace.DroneBlueprint,integer).md" -->

___
### AddInitialCrew ()
{: #AddInitialCrew .lua-content-item aria-label='Methods' }
#### void :AddInitialCrew (vector\<[CrewBlueprint](../Hyperspace/CrewBlueprint)\> blueprints)
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ShipManager/AddInitialCrew(vector_Hyperspace.CrewBlueprint_).md" -->

___
### AddSystem ()
{: #AddSystem .lua-content-item aria-label='Methods' }
#### integer :AddSystem (integer systemId)
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ShipManager/AddSystem(integer).md" -->

___
### AddWeapon ()
{: #AddWeapon .lua-content-item aria-label='Methods' }
#### integer :AddWeapon ([WeaponBlueprint](../Hyperspace/WeaponBlueprint) bp, integer slot)
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ShipManager/AddWeapon(Hyperspace.WeaponBlueprint,integer).md" -->

___
### CanFitSubsystem ()
{: #CanFitSubsystem .lua-content-item aria-label='Methods' }
#### boolean :CanFitSubsystem (integer systemId)
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ShipManager/CanFitSubsystem(integer).md" -->

___
### CanFitSystem ()
{: #CanFitSystem .lua-content-item aria-label='Methods' }
#### boolean :CanFitSystem (integer systemId)
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ShipManager/CanFitSystem(integer).md" -->

___
### CanUpgrade ()
{: #CanUpgrade .lua-content-item aria-label='Methods' }
#### integer :CanUpgrade (integer systemId, integer amount)
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ShipManager/CanUpgrade(integer,integer).md" -->

___
### ClearStatusAll ()
{: #ClearStatusAll .lua-content-item aria-label='Methods' }
#### void :ClearStatusAll ()
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ShipManager/ClearStatusAll().md" -->

___
### ClearStatusSystem ()
{: #ClearStatusSystem .lua-content-item aria-label='Methods' }
#### void :ClearStatusSystem (integer system)
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ShipManager/ClearStatusSystem(integer).md" -->

___
### CountCrew ()
{: #CountCrew .lua-content-item aria-label='Methods' }
#### integer :CountCrew (boolean boarders)
{: aria-label='Methods' }
<!-- Content pulled from "lua-source-parts-inject/Hyperspace/ShipManager/CountCrew(boolean).md" -->
return count of crew on this ship, true for boarders false for regular crewmembers.
<!-- End of content -->

___
### CountCrewShipId ()
{: #CountCrewShipId .lua-content-item aria-label='Methods' }
#### integer :CountCrewShipId (integer roomId, integer shipId)
{: aria-label='Methods' }
<!-- Content pulled from "lua-source-parts-inject/Hyperspace/ShipManager/CountCrewShipId(integer,integer).md" -->
Counts crew in a room. shipId corresponds to which ship owns the crewmembers, 0 being the player and 1 being the enemy.
<!-- End of content -->

___
### CreateSpaceDrone ()
{: #CreateSpaceDrone .lua-content-item aria-label='Methods' }
#### [SpaceDrone](../Hyperspace/SpaceDrone) :CreateSpaceDrone ([DroneBlueprint](../Hyperspace/DroneBlueprint) bp)
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ShipManager/CreateSpaceDrone(Hyperspace.DroneBlueprint).md" -->

___
### DamageArea ()
{: #DamageArea .lua-content-item aria-label='Methods' }
#### boolean :DamageArea ([Pointf](../Hyperspace/Pointf) location, [Damage](../Hyperspace/Damage) dmg, boolean forceHit)
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ShipManager/DamageArea(Hyperspace.Pointf,Hyperspace.Damage,boolean).md" -->

___
### DamageBeam ()
{: #DamageBeam .lua-content-item aria-label='Methods' }
#### boolean :DamageBeam ([Pointf](../Hyperspace/Pointf) location1, [Pointf](../Hyperspace/Pointf) location2, [Damage](../Hyperspace/Damage) dmg)
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ShipManager/DamageBeam(Hyperspace.Pointf,Hyperspace.Pointf,Hyperspace.Damage).md" -->

___
### DamageHull ()
{: #DamageHull .lua-content-item aria-label='Methods' }
#### integer :DamageHull (integer dmg, boolean force)
{: aria-label='Methods' }
<!-- Content pulled from "lua-source-parts-inject/Hyperspace/ShipManager/DamageHull(integer,boolean).md" -->
It directly damages the hull? What's more to say, I think negative numbers heal the hull. Could be cool for some random lifesaving or lifetaking mechanics that run mid-battle instead of during an event. Imagine if you could dump all power into hull integrity or something and lose 10% power for the rest of the fight but gain 10% hull, could be fun!
`force` ignores whether or not the ship is jumping. If it is false and the ship is jumping, the damage will not be applied.
<!-- End of content -->

___
### DamageSystem ()
{: #DamageSystem .lua-content-item aria-label='Methods' }
#### void :DamageSystem (integer systemId, [Damage](../Hyperspace/Damage) damage)
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ShipManager/DamageSystem(integer,Hyperspace.Damage).md" -->

___
### DoSensorsProvide ()
{: #DoSensorsProvide .lua-content-item aria-label='Methods' }
#### boolean :DoSensorsProvide (integer vision)
{: aria-label='Methods' }
<!-- Content pulled from "lua-source-parts-inject/Hyperspace/ShipManager/DoSensorsProvide(integer).md" -->
`vision` is the sensor level.
<!-- End of content -->

___
### DoorsFunction ()
{: #DoorsFunction .lua-content-item aria-label='Methods' }
#### boolean :DoorsFunction ()
{: aria-label='Methods' }
<!-- Content pulled from "lua-source-parts-inject/Hyperspace/ShipManager/DoorsFunction().md" -->
Do the doors work or not
<!-- End of content -->

___
### FindCrew ()
{: #FindCrew .lua-content-item aria-label='Methods' }
#### [CrewMember](../Hyperspace/CrewMember) :FindCrew ([CrewBlueprint](../Hyperspace/CrewBlueprint) bp)
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ShipManager/FindCrew(Hyperspace.CrewBlueprint).md" -->

___
### ForceDecreaseSystemPower ()
{: #ForceDecreaseSystemPower .lua-content-item aria-label='Methods' }
#### boolean :ForceDecreaseSystemPower (integer sys)
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ShipManager/ForceDecreaseSystemPower(integer).md" -->

___
### GetAvailablePower ()
{: #GetAvailablePower .lua-content-item aria-label='Methods' }
#### pair\<integer, integer\> :GetAvailablePower ()
{: aria-label='Methods' }
<!-- Content pulled from "lua-source-parts-inject/Hyperspace/ShipManager/GetAvailablePower().md" -->
First element of the pair is the maximum reactor power, the second element is the available reactor power.
<!-- End of content -->

___
### GetCrewmember ()
{: #GetCrewmember .lua-content-item aria-label='Methods' }
#### [CrewMember](../Hyperspace/CrewMember) :GetCrewmember (integer slot, boolean present)
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ShipManager/GetCrewmember(integer,boolean).md" -->

___
### GetDodgeFactor ()
{: #GetDodgeFactor .lua-content-item aria-label='Methods' }
#### integer :GetDodgeFactor ()
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ShipManager/GetDodgeFactor().md" -->

___
### GetDodged ()
{: #GetDodged .lua-content-item aria-label='Methods' }
#### boolean :GetDodged ()
{: aria-label='Methods' }
<!-- Content pulled from "lua-source-parts-inject/Hyperspace/ShipManager/GetDodged().md" -->
Calculates whether a projectile should be dodged or not.
Note: 5 calls of this method that return false while the player has fully upgraded, fully powered engines will unlock the achievement 'Astronomically Low Odds'.
<!-- End of content -->

___
### GetDroneCount ()
{: #GetDroneCount .lua-content-item aria-label='Methods' }
#### integer :GetDroneCount ()
{: aria-label='Methods' }
<!-- Content pulled from "lua-source-parts-inject/Hyperspace/ShipManager/GetDroneCount().md" -->
Returns the number of drone parts the ship has.
<!-- End of content -->

___
### GetDroneList ()
{: #GetDroneList .lua-content-item aria-label='Methods' }
#### vector\<[Drone](../Hyperspace/Drone)\> :GetDroneList ()
{: aria-label='Methods' }
<!-- Content pulled from "lua-source-parts-inject/Hyperspace/ShipManager/GetDroneList().md" -->
Returns the list of Drones for this ship, the `std::vector` it returns can be accessed like an array in Lua
<!-- End of content -->

___
### GetFire ()
{: #GetFire .lua-content-item aria-label='Methods' }
#### [Fire](../Hyperspace/Fire) :GetFire (integer unknown, integer unknown)
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ShipManager/GetFire(integer,integer).md" -->

___
### GetFireAtPoint ()
{: #GetFireAtPoint .lua-content-item aria-label='Methods' }
#### [Fire](../Hyperspace/Fire) :GetFireAtPoint (number unknown, number unknown)
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ShipManager/GetFireAtPoint(number,number).md" -->

___
### GetFireAtPoint ()
{: #GetFireAtPoint .lua-content-item aria-label='Methods' }
#### [Fire](../Hyperspace/Fire) :GetFireAtPoint ([Point](../Hyperspace/Point) unknown)
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ShipManager/GetFireAtPoint(Hyperspace.Point).md" -->

___
### GetFireAtPoint ()
{: #GetFireAtPoint .lua-content-item aria-label='Methods' }
#### [Fire](../Hyperspace/Fire) :GetFireAtPoint ([Pointf](../Hyperspace/Pointf) unknown)
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ShipManager/GetFireAtPoint(Hyperspace.Pointf).md" -->

___
### GetFireCount ()
{: #GetFireCount .lua-content-item aria-label='Methods' }
#### integer :GetFireCount (integer roomId)
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ShipManager/GetFireCount(integer).md" -->

___
### GetMissileCount ()
{: #GetMissileCount .lua-content-item aria-label='Methods' }
#### integer :GetMissileCount ()
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ShipManager/GetMissileCount().md" -->

___
### GetOxygenPercentage ()
{: #GetOxygenPercentage .lua-content-item aria-label='Methods' }
#### integer :GetOxygenPercentage ()
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ShipManager/GetOxygenPercentage().md" -->

___
### GetRandomRoomCenter ()
{: #GetRandomRoomCenter .lua-content-item aria-label='Methods' }
#### [Pointf](../Hyperspace/Pointf) :GetRandomRoomCenter ()
{: aria-label='Methods' }
<!-- Content pulled from "lua-source-parts-inject/Hyperspace/ShipManager/GetRandomRoomCenter().md" -->
Chooses a random room on the ship and returns the center point of that room
<!-- End of content -->

___
### GetRoomCenter ()
{: #GetRoomCenter .lua-content-item aria-label='Methods' }
#### [Pointf](../Hyperspace/Pointf) :GetRoomCenter (integer roomId)
{: aria-label='Methods' }
<!-- Content pulled from "lua-source-parts-inject/Hyperspace/ShipManager/GetRoomCenter(integer).md" -->
Gets the room center point of a specific room id.
<!-- End of content -->

___
### GetSelectedCrewPoint ()
{: #GetSelectedCrewPoint .lua-content-item aria-label='Methods' }
#### [CrewMember](../Hyperspace/CrewMember) :GetSelectedCrewPoint (integer x, integer y, boolean intruder)
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ShipManager/GetSelectedCrewPoint(integer,integer,boolean).md" -->

___
### GetShieldPower ()
{: #GetShieldPower .lua-content-item aria-label='Methods' }
#### [ShieldPower](../Hyperspace/ShieldPower) :GetShieldPower ()
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ShipManager/GetShieldPower().md" -->

___
### GetSystem ()
{: #GetSystem .lua-content-item aria-label='Methods' }
#### [ShipSystem](../Hyperspace/ShipSystem) :GetSystem (integer systemId)
{: aria-label='Methods' }
<!-- Content pulled from "lua-source-parts-inject/Hyperspace/ShipManager/GetSystem(integer).md" -->
You can also just access the system directly with fields below if it's one of the vanilla systems like `oxygenSystem` `medbaySystem` etc... but custom systems like Temporal currently need to be accessed by id.
<!-- End of content -->

___
### GetSystemInRoom ()
{: #GetSystemInRoom .lua-content-item aria-label='Methods' }
#### [ShipSystem](../Hyperspace/ShipSystem) :GetSystemInRoom (integer roomId)
{: aria-label='Methods' }
<!-- Content pulled from "lua-source-parts-inject/Hyperspace/ShipManager/GetSystemInRoom(integer).md" -->
Returns the system in a specific room id. If there is no system in the room, returns 0.
<!-- End of content -->

___
### GetSystemPower ()
{: #GetSystemPower .lua-content-item aria-label='Methods' }
#### integer :GetSystemPower (integer systemId)
{: aria-label='Methods' }
<!-- Content pulled from "lua-source-parts-inject/Hyperspace/ShipManager/GetSystemPower(integer).md" -->
How much power is assigned to this system
<!-- End of content -->

___
### GetSystemPowerMax ()
{: #GetSystemPowerMax .lua-content-item aria-label='Methods' }
#### integer :GetSystemPowerMax (integer systemId)
{: aria-label='Methods' }
<!-- Content pulled from "lua-source-parts-inject/Hyperspace/ShipManager/GetSystemPowerMax(integer).md" -->
What is the max power level of this system, functionally this is the same as the system's "level"
<!-- End of content -->

___
### GetSystemRoom ()
{: #GetSystemRoom .lua-content-item aria-label='Methods' }
#### integer :GetSystemRoom (integer sysId)
{: aria-label='Methods' }
<!-- Content pulled from "lua-source-parts-inject/Hyperspace/ShipManager/GetSystemRoom(integer).md" -->
Find what roomId a system is in, could be useful for AI targeting mechanics or some cheesy player weapon that can only attack one system or something.
<!-- End of content -->

___
### GetTooltip ()
{: #GetTooltip .lua-content-item aria-label='Methods' }
#### string :GetTooltip (integer x, integer y)
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ShipManager/GetTooltip(integer,integer).md" -->

___
### GetWeaponList ()
{: #GetWeaponList .lua-content-item aria-label='Methods' }
#### vector\<[ProjectileFactory](../Hyperspace/ProjectileFactory)\> :GetWeaponList ()
{: aria-label='Methods' }
<!-- Content pulled from "lua-source-parts-inject/Hyperspace/ShipManager/GetWeaponList().md" -->
Return a vector of weapons on this ship, can be treated like an array in Lua.
<!-- End of content -->

___
### HasSystem ()
{: #HasSystem .lua-content-item aria-label='Methods' }
#### boolean :HasSystem (integer systemId)
{: aria-label='Methods' }
<!-- Content pulled from "lua-source-parts-inject/Hyperspace/ShipManager/HasSystem(integer).md" -->
Does the ship have a specific system, true/false
<!-- End of content -->

___
### InstantPowerShields ()
{: #InstantPowerShields .lua-content-item aria-label='Methods' }
#### void :InstantPowerShields ()
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ShipManager/InstantPowerShields().md" -->

___
### IsCrewFull ()
{: #IsCrewFull .lua-content-item aria-label='Methods' }
#### boolean :IsCrewFull ()
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ShipManager/IsCrewFull().md" -->

___
### IsCrewOverFull ()
{: #IsCrewOverFull .lua-content-item aria-label='Methods' }
#### boolean :IsCrewOverFull ()
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ShipManager/IsCrewOverFull().md" -->

___
### IsSystemHacked ()
{: #IsSystemHacked .lua-content-item aria-label='Methods' }
#### integer :IsSystemHacked (integer systemId)
{: aria-label='Methods' }
<!-- Content pulled from "lua-source-parts-inject/Hyperspace/ShipManager/IsSystemHacked(integer).md" -->
Returns the "hacking level" of the system. 0 means there is no hacking drone on the system, 1 means there is a hacking drone attached but is not currently being hacked, 2 means there is a hacking drone and the system is being hacked.
<!-- End of content -->

___
### ModifyDroneCount ()
{: #ModifyDroneCount .lua-content-item aria-label='Methods' }
#### void :ModifyDroneCount (integer drones)
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ShipManager/ModifyDroneCount(integer).md" -->

___
### ModifyMissileCount ()
{: #ModifyMissileCount .lua-content-item aria-label='Methods' }
#### void :ModifyMissileCount (integer missiles)
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ShipManager/ModifyMissileCount(integer).md" -->

___
### ModifyScrapCount ()
{: #ModifyScrapCount .lua-content-item aria-label='Methods' }
#### void :ModifyScrapCount (integer scrap, boolean income)
{: aria-label='Methods' }
<!-- Content pulled from "lua-source-parts-inject/Hyperspace/ShipManager/ModifyScrapCount(integer,boolean).md" -->
`income` determines whether or not augments should be activated (e.g. Scrap Recovery Arm and Repair Arm).
<!-- End of content -->

___
### OnInit ()
{: #OnInit .lua-content-item aria-label='Methods' }
#### integer :OnInit ([ShipBlueprint](../Hyperspace/ShipBlueprint) bp, integer shipLevel)
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ShipManager/OnInit(Hyperspace.ShipBlueprint,integer).md" -->

___
### PrepareSuperBarrage ()
{: #PrepareSuperBarrage .lua-content-item aria-label='Methods' }
#### void :PrepareSuperBarrage ()
{: aria-label='Methods' }
<!-- Content pulled from "lua-source-parts-inject/Hyperspace/ShipManager/PrepareSuperBarrage().md" -->
I do not know if this is safe to call
<!-- End of content -->

___
### PrepareSuperDrones ()
{: #PrepareSuperDrones .lua-content-item aria-label='Methods' }
#### void :PrepareSuperDrones ()
{: aria-label='Methods' }
<!-- Content pulled from "lua-source-parts-inject/Hyperspace/ShipManager/PrepareSuperDrones().md" -->
I do not know if this is safe to call
<!-- End of content -->

___
### RemoveItem ()
{: #RemoveItem .lua-content-item aria-label='Methods' }
#### void :RemoveItem (string name, boolean checkCargo=false)
{: aria-label='Methods' }
<!-- Content pulled from "lua-source-parts-inject/Hyperspace/ShipManager/RemoveItem(string,boolean).md" -->
Remove an item by name (equivalent to removing via an event).
checkCargo indicates if items will be removed from cargo if not present in weapon/drone system.
<!-- End of content -->

___
### RemoveItem ()
{: #RemoveItem .lua-content-item aria-label='Methods' }
#### void :RemoveItem (string name)
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ShipManager/RemoveItem(string).md" -->

___
### RemoveSystem ()
{: #RemoveSystem .lua-content-item aria-label='Methods' }
#### void :RemoveSystem (integer systemId)
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ShipManager/RemoveSystem(integer).md" -->

___
### ResetScrapLevel ()
{: #ResetScrapLevel .lua-content-item aria-label='Methods' }
#### void :ResetScrapLevel ()
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ShipManager/ResetScrapLevel().md" -->

___
### RestoreCrewPositions ()
{: #RestoreCrewPositions .lua-content-item aria-label='Methods' }
#### boolean :RestoreCrewPositions ()
{: aria-label='Methods' }
<!-- Content pulled from "lua-source-parts-inject/Hyperspace/ShipManager/RestoreCrewPositions().md" -->
Same as hitting the button to return crew to their original positions.
<!-- End of content -->

___
### SelectRandomCrew ()
{: #SelectRandomCrew .lua-content-item aria-label='Methods' }
#### [CrewBlueprint](../Hyperspace/CrewBlueprint) :SelectRandomCrew (integer seed, string racePref)
{: aria-label='Methods' }
<!-- Content pulled from "lua-source-parts-inject/Hyperspace/ShipManager/SelectRandomCrew(integer,string).md" -->
Select random crew from the ship *for ~~execution~~ selection of your diabolical plans*.
Not sure why there is a seed option, not sure if you should give it a fixed number or call `Hyperspace.random32()` for a nice random number.
<!-- End of content -->

___
### SetDestroyed ()
{: #SetDestroyed .lua-content-item aria-label='Methods' }
#### void :SetDestroyed ()
{: aria-label='Methods' }
<!-- Content pulled from "lua-source-parts-inject/Hyperspace/ShipManager/SetDestroyed().md" -->
*Blow up the damn ship Jean-Luc!*
<!-- End of content -->

___
### SetSystemPowerLoss ()
{: #SetSystemPowerLoss .lua-content-item aria-label='Methods' }
#### void :SetSystemPowerLoss (integer systemId, integer powerLoss)
{: aria-label='Methods' }
<!-- Content pulled from "lua-source-parts-inject/Hyperspace/ShipManager/SetSystemPowerLoss(integer,integer).md" -->
Sets a power loss level, like from an event except can be done at any time regardless of an event.
<!-- End of content -->

___
### StartFire ()
{: #StartFire .lua-content-item aria-label='Methods' }
#### void :StartFire (integer roomId)
{: aria-label='Methods' }
<!-- Content pulled from "lua-source-parts-inject/Hyperspace/ShipManager/StartFire(integer).md" -->
Yeah, it does *exactly what you think it does* [you monster](https://gfycat.com/complexcarefulant).
<!-- End of content -->

___
### SystemFunctions ()
{: #SystemFunctions .lua-content-item aria-label='Methods' }
#### boolean :SystemFunctions (integer systemId)
{: aria-label='Methods' }
<!-- Content pulled from "lua-source-parts-inject/Hyperspace/ShipManager/SystemFunctions(integer).md" -->
Returns whether the system has any power assigned to it.
<!-- End of content -->

___
### TeleportCrew ()
{: #TeleportCrew .lua-content-item aria-label='Methods' }
#### vector\<[CrewMember](../Hyperspace/CrewMember)\> :TeleportCrew (integer roomId, boolean intruders)
{: aria-label='Methods' }
<!-- Content pulled from "lua-source-parts-inject/Hyperspace/ShipManager/TeleportCrew(integer,boolean).md" -->
Teleport crew & get back the list of CrewMembers.
I think there might be something more you need to do to give them a destination so they don't simply get teleport-ed to space, *unless you know... that was the intention*.
<!-- End of content -->

___


## Fields
{: #Fields .lua-content-section}
<details markdown="1"><summary id="InheritedFields" class="lua-content-item" markdown="span">Inherited Fields</summary>


#### From [ShipObject](ShipObject)

| Type | Field |
| --- | --- |
| integer | .[iShipId](ShipObject#iShipId) |

</details>

___
### _targetable (Read-only)
{: #_targetable .lua-content-item aria-label='Fields' }
#### [Targetable](../Hyperspace/Targetable) ._targetable
{: aria-label='Fields' }
<!-- Content pulled from "lua-source-parts-inject/Hyperspace/ShipManager/_targetable.md" -->
**Read-only**
<!-- End of content -->

___
### artillerySystems (Read-only)
{: #artillerySystems .lua-content-item aria-label='Fields' }
#### vector\<[ArtillerySystem](../Hyperspace/ArtillerySystem)\> .artillerySystems
{: aria-label='Fields' }
<!-- Content pulled from "lua-source-parts-inject/Hyperspace/ShipManager/artillerySystems.md" -->
Array (vector) of artillery systems on this ship, you will need to check for length
**Note:** Unlike Lua arrays, because this is a C vector internally it will start at index `0` not index `1` so `.artillerySystems[0]` is the first artillery system.
Field is **read-only** but fields under this object may still be mutable.
<!-- End of content -->

___
### bAutomated
{: #bAutomated .lua-content-item aria-label='Fields' }
#### boolean .bAutomated
{: aria-label='Fields' }
<!-- Content pulled from "lua-source-parts-inject/Hyperspace/ShipManager/bAutomated.md" -->
**read-only**
<!-- End of content -->

___
### bContainsPlayerCrew (Read-only)
{: #bContainsPlayerCrew .lua-content-item aria-label='Fields' }
#### boolean .bContainsPlayerCrew
{: aria-label='Fields' }
<!-- Content pulled from "lua-source-parts-inject/Hyperspace/ShipManager/bContainsPlayerCrew.md" -->
**read-only**
<!-- End of content -->

___
### bDestroyed (Read-only)
{: #bDestroyed .lua-content-item aria-label='Fields' }
#### boolean .bDestroyed
{: aria-label='Fields' }
<!-- Content pulled from "lua-source-parts-inject/Hyperspace/ShipManager/bDestroyed.md" -->
**Since 1.4.0**
<!-- End of content -->

___
### bHighlightCrew
{: #bHighlightCrew .lua-content-item aria-label='Fields' }
#### boolean .bHighlightCrew
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ShipManager/bHighlightCrew.md" -->

___
### bInvincible
{: #bInvincible .lua-content-item aria-label='Fields' }
#### boolean .bInvincible
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ShipManager/bInvincible.md" -->

___
### bJumping (Read-only)
{: #bJumping .lua-content-item aria-label='Fields' }
#### boolean .bJumping
{: aria-label='Fields' }
<!-- Content pulled from "lua-source-parts-inject/Hyperspace/ShipManager/bJumping.md" -->
**read-only**
<!-- End of content -->

___
### bShowRoom
{: #bShowRoom .lua-content-item aria-label='Fields' }
#### boolean .bShowRoom
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ShipManager/bShowRoom.md" -->

___
### batterySystem (Read-only)
{: #batterySystem .lua-content-item aria-label='Fields' }
#### [BatterySystem](../Hyperspace/BatterySystem) .batterySystem
{: aria-label='Fields' }
<!-- Content pulled from "lua-source-parts-inject/Hyperspace/ShipManager/batterySystem.md" -->
Field is **read-only** but fields under this object may still be mutable.
<!-- End of content -->

___
### cloakSystem (Read-only)
{: #cloakSystem .lua-content-item aria-label='Fields' }
#### [CloakingSystem](../Hyperspace/CloakingSystem) .cloakSystem
{: aria-label='Fields' }
<!-- Content pulled from "lua-source-parts-inject/Hyperspace/ShipManager/cloakSystem.md" -->
Field is **read-only** but fields under this object may still be mutable.
<!-- End of content -->

___
### cloneSystem (Read-only)
{: #cloneSystem .lua-content-item aria-label='Fields' }
#### [CloneSystem](../Hyperspace/CloneSystem) .cloneSystem
{: aria-label='Fields' }
<!-- Content pulled from "lua-source-parts-inject/Hyperspace/ShipManager/cloneSystem.md" -->
**Note:** shares system with Medbay system and both cannot exist at the same time
Field is **read-only** but fields under this object may still be mutable.
<!-- End of content -->

___
### crewCounts (Read-only)
{: #crewCounts .lua-content-item aria-label='Fields' }
#### vector\<vector\<integer\>\> .crewCounts
{: aria-label='Fields' }
<!-- Content pulled from "lua-source-parts-inject/Hyperspace/ShipManager/crewCounts.md" -->
Note: Double vector, both indices start at 0
Field is **read-only** but fields under this object may still be mutable.
<!-- End of content -->

___
### currentScrap (Read-only)
{: #currentScrap .lua-content-item aria-label='Fields' }
#### integer .currentScrap
{: aria-label='Fields' }
<!-- Content pulled from "lua-source-parts-inject/Hyperspace/ShipManager/currentScrap.md" -->
**read-only** use the modify method if you really want to change this
<!-- End of content -->

___
### current_target (Read-only)
{: #current_target .lua-content-item aria-label='Fields' }
#### [ShipManager](../Hyperspace/ShipManager) .current_target
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ShipManager/current_target.md" -->

___
### damageCloaked
{: #damageCloaked .lua-content-item aria-label='Fields' }
#### integer .damageCloaked
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ShipManager/damageCloaked.md" -->

___
### droneSystem (Read-only)
{: #droneSystem .lua-content-item aria-label='Fields' }
#### [DroneSystem](../Hyperspace/DroneSystem) .droneSystem
{: aria-label='Fields' }
<!-- Content pulled from "lua-source-parts-inject/Hyperspace/ShipManager/droneSystem.md" -->
Field is **read-only** but fields under this object may still be mutable.
<!-- End of content -->

___
### enemyDamagedUncloaked
{: #enemyDamagedUncloaked .lua-content-item aria-label='Fields' }
#### boolean .enemyDamagedUncloaked
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ShipManager/enemyDamagedUncloaked.md" -->

___
### engineSystem (Read-only)
{: #engineSystem .lua-content-item aria-label='Fields' }
#### [EngineSystem](../Hyperspace/EngineSystem) .engineSystem
{: aria-label='Fields' }
<!-- Content pulled from "lua-source-parts-inject/Hyperspace/ShipManager/engineSystem.md" -->
Field is **read-only** but fields under this object may still be mutable.
<!-- End of content -->

___
### extend (Read-only)
{: #extend .lua-content-item aria-label='Fields' }
#### [ShipManager_Extend](../Hyperspace/ShipManager_Extend) .extend
{: aria-label='Fields' }
<!-- Content pulled from "lua-source-parts-inject/Hyperspace/ShipManager/extend.md" -->
**Since 1.4.0**
<!-- End of content -->

___
### failedDodgeCounter
{: #failedDodgeCounter .lua-content-item aria-label='Fields' }
#### integer .failedDodgeCounter
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ShipManager/failedDodgeCounter.md" -->

___
### fireSpreader
{: #fireSpreader .lua-content-item aria-label='Fields' }
#### [Spreader_Fire](../Hyperspace/Spreader_Fire) .fireSpreader
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ShipManager/fireSpreader.md" -->

___
### fuel_count
{: #fuel_count .lua-content-item aria-label='Fields' }
#### integer .fuel_count
{: aria-label='Fields' }
<!-- Content pulled from "lua-source-parts-inject/Hyperspace/ShipManager/fuel_count.md" -->
Unlike other resources, fuel is mutable and should be modified directly instead of with a modify method
<!-- End of content -->

___
### hackingSystem (Read-only)
{: #hackingSystem .lua-content-item aria-label='Fields' }
#### [HackingSystem](../Hyperspace/HackingSystem) .hackingSystem
{: aria-label='Fields' }
<!-- Content pulled from "lua-source-parts-inject/Hyperspace/ShipManager/hackingSystem.md" -->
Field is **read-only** but fields under this object may still be mutable.
<!-- End of content -->

___
### iCustomizeMode (Read-only)
{: #iCustomizeMode .lua-content-item aria-label='Fields' }
#### integer .iCustomizeMode
{: aria-label='Fields' }
<!-- Content pulled from "lua-source-parts-inject/Hyperspace/ShipManager/iCustomizeMode.md" -->
**read-only**
2 while in the hangar, 0 while in a run
<!-- End of content -->

___
### iIntruderCount (Read-only)
{: #iIntruderCount .lua-content-item aria-label='Fields' }
#### integer .iIntruderCount
{: aria-label='Fields' }
<!-- Content pulled from "lua-source-parts-inject/Hyperspace/ShipManager/iIntruderCount.md" -->
**read-only**
<!-- End of content -->

___
### iLastDamage (Read-only)
{: #iLastDamage .lua-content-item aria-label='Fields' }
#### integer .iLastDamage
{: aria-label='Fields' }
<!-- Content pulled from "lua-source-parts-inject/Hyperspace/ShipManager/iLastDamage.md" -->
**read-only** (not sure if it's safe to make this editable)
<!-- End of content -->

___
### jump_timer (Read-only)
{: #jump_timer .lua-content-item aria-label='Fields' }
#### pair\<number, number\> .jump_timer
{: aria-label='Fields' }
<!-- Content pulled from "lua-source-parts-inject/Hyperspace/ShipManager/jump_timer.md" -->
**read-only** (not sure if it's safe to make this editable)
<!-- End of content -->

___
### lastEngineStatus (Read-only)
{: #lastEngineStatus .lua-content-item aria-label='Fields' }
#### boolean .lastEngineStatus
{: aria-label='Fields' }
<!-- Content pulled from "lua-source-parts-inject/Hyperspace/ShipManager/lastEngineStatus.md" -->
**read-only**
<!-- End of content -->

___
### lastJumpReady (Read-only)
{: #lastJumpReady .lua-content-item aria-label='Fields' }
#### boolean .lastJumpReady
{: aria-label='Fields' }
<!-- Content pulled from "lua-source-parts-inject/Hyperspace/ShipManager/lastJumpReady.md" -->
**read-only**
<!-- End of content -->

___
### medbaySystem (Read-only)
{: #medbaySystem .lua-content-item aria-label='Fields' }
#### [MedbaySystem](../Hyperspace/MedbaySystem) .medbaySystem
{: aria-label='Fields' }
<!-- Content pulled from "lua-source-parts-inject/Hyperspace/ShipManager/medbaySystem.md" -->
**Note:** shares system with Clonebay system and both cannot exist at the same time
Field is **read-only** but fields under this object may still be mutable.
<!-- End of content -->

___
### mindSystem (Read-only)
{: #mindSystem .lua-content-item aria-label='Fields' }
#### [MindSystem](../Hyperspace/MindSystem) .mindSystem
{: aria-label='Fields' }
<!-- Content pulled from "lua-source-parts-inject/Hyperspace/ShipManager/mindSystem.md" -->
Field is **read-only** but fields under this object may still be mutable.
<!-- End of content -->

___
### myBlueprint (Read-only)
{: #myBlueprint .lua-content-item aria-label='Fields' }
#### [ShipBlueprint](../Hyperspace/ShipBlueprint) .myBlueprint
{: aria-label='Fields' }
<!-- Content pulled from "lua-source-parts-inject/Hyperspace/ShipManager/myBlueprint.md" -->
**read-only**
<!-- End of content -->

___
### oxygenSystem (Read-only)
{: #oxygenSystem .lua-content-item aria-label='Fields' }
#### [OxygenSystem](../Hyperspace/OxygenSystem) .oxygenSystem
{: aria-label='Fields' }
<!-- Content pulled from "lua-source-parts-inject/Hyperspace/ShipManager/oxygenSystem.md" -->
Field is **read-only** but fields under this object may still be mutable.
<!-- End of content -->

___
### shieldSystem (Read-only)
{: #shieldSystem .lua-content-item aria-label='Fields' }
#### [Shields](../Hyperspace/Shields) .shieldSystem
{: aria-label='Fields' }
<!-- Content pulled from "lua-source-parts-inject/Hyperspace/ShipManager/shieldSystem.md" -->
Field is **read-only** but fields under this object may still be mutable.
<!-- End of content -->

___
### ship (Read-only)
{: #ship .lua-content-item aria-label='Fields' }
#### [Ship](../Hyperspace/Ship) .ship
{: aria-label='Fields' }
<!-- Content pulled from "lua-source-parts-inject/Hyperspace/ShipManager/ship.md" -->
Field is **read-only** but fields under this object may still be mutable.
<!-- End of content -->

___
### shipLevel (Read-only)
{: #shipLevel .lua-content-item aria-label='Fields' }
#### integer .shipLevel
{: aria-label='Fields' }
<!-- Content pulled from "lua-source-parts-inject/Hyperspace/ShipManager/shipLevel.md" -->
**read-only**
<!-- End of content -->

___
### spaceDrones
{: #spaceDrones .lua-content-item aria-label='Fields' }
#### vector\<[SpaceDrone](../Hyperspace/SpaceDrone)\> .spaceDrones
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ShipManager/spaceDrones.md" -->

___
### superBarrage
{: #superBarrage .lua-content-item aria-label='Fields' }
#### vector\<[Projectile](../Hyperspace/Projectile)\> .superBarrage
{: aria-label='Fields' }
<!-- Content pulled from "lua-source-parts-inject/Hyperspace/ShipManager/superBarrage.md" -->
Note: Vectors start at index 0, unlike normal arrays in Lua
<!-- End of content -->

___
### superDrones
{: #superDrones .lua-content-item aria-label='Fields' }
#### vector\<[SpaceDrone](../Hyperspace/SpaceDrone)\> .superDrones
{: aria-label='Fields' }
<!-- Content pulled from "lua-source-parts-inject/Hyperspace/ShipManager/superDrones.md" -->
Note: Vectors start at index 0, unlike normal arrays in Lua
<!-- End of content -->

___
### table
{: #table .lua-content-item aria-label='Fields' }
#### table .table
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ShipManager/table.md" -->

___
### teleportSystem (Read-only)
{: #teleportSystem .lua-content-item aria-label='Fields' }
#### [TeleportSystem](../Hyperspace/TeleportSystem) .teleportSystem
{: aria-label='Fields' }
<!-- Content pulled from "lua-source-parts-inject/Hyperspace/ShipManager/teleportSystem.md" -->
Field is **read-only** but fields under this object may still be mutable.
<!-- End of content -->

___
### tempDroneCount (Read-only)
{: #tempDroneCount .lua-content-item aria-label='Fields' }
#### integer .tempDroneCount
{: aria-label='Fields' }
<!-- Content pulled from "lua-source-parts-inject/Hyperspace/ShipManager/tempDroneCount.md" -->
**read-only**
<!-- End of content -->

___
### tempMissileCount (Read-only)
{: #tempMissileCount .lua-content-item aria-label='Fields' }
#### integer .tempMissileCount
{: aria-label='Fields' }
<!-- Content pulled from "lua-source-parts-inject/Hyperspace/ShipManager/tempMissileCount.md" -->
**read-only**
<!-- End of content -->

___
### tempVision (Read-only)
{: #tempVision .lua-content-item aria-label='Fields' }
#### vector\<boolean\> .tempVision
{: aria-label='Fields' }
<!-- Content pulled from "lua-source-parts-inject/Hyperspace/ShipManager/tempVision.md" -->
**read-only**
Note: Vectors start at index 0, unlike normal arrays in Lua
<!-- End of content -->

___
### vCrewList (Read-only)
{: #vCrewList .lua-content-item aria-label='Fields' }
#### vector\<[CrewMember](../Hyperspace/CrewMember)\> .vCrewList
{: aria-label='Fields' }
<!-- Content pulled from "lua-source-parts-inject/Hyperspace/ShipManager/vCrewList.md" -->
Array (vector) of crew members on this ship
**Note:** Vectors are 0 indexed unlike lua's normal arrays
Field is **read-only** but fields under this object may still be mutable.
<!-- End of content -->

___
### vSystemList (Read-only)
{: #vSystemList .lua-content-item aria-label='Fields' }
#### vector\<[ShipSystem](../Hyperspace/ShipSystem)\> .vSystemList
{: aria-label='Fields' }
<!-- Content pulled from "lua-source-parts-inject/Hyperspace/ShipManager/vSystemList.md" -->
**Read-only** currently, however we might need to explore if this would be a safe way to remove a system
Fields under this object may still be mutable (see their docs).
Holds a vector (array in lua) of ship systems that you can iterate over
<!-- End of content -->

___
### weaponSystem (Read-only)
{: #weaponSystem .lua-content-item aria-label='Fields' }
#### [WeaponSystem](../Hyperspace/WeaponSystem) .weaponSystem
{: aria-label='Fields' }
<!-- Content pulled from "lua-source-parts-inject/Hyperspace/ShipManager/weaponSystem.md" -->
Field is **read-only** but fields under this object may still be mutable.
<!-- End of content -->

___
