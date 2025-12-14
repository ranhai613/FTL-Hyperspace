---
layout: lua
title: ShipSystem
lang: en
category: Class
---

# Class "ShipSystem"



Subclasses: [ArtillerySystem](../Hyperspace/ArtillerySystem), [BatterySystem](../Hyperspace/BatterySystem), [CloakingSystem](../Hyperspace/CloakingSystem), [CloneSystem](../Hyperspace/CloneSystem), [DroneSystem](../Hyperspace/DroneSystem), [HackingSystem](../Hyperspace/HackingSystem), [MedbaySystem](../Hyperspace/MedbaySystem), [MindSystem](../Hyperspace/MindSystem), [OxygenSystem](../Hyperspace/OxygenSystem), [Shields](../Hyperspace/Shields), [TeleportSystem](../Hyperspace/TeleportSystem), [WeaponSystem](../Hyperspace/WeaponSystem)

<!-- Head content to be pulled from "lua-source-parts-inject/Hyperspace/ShipSystem/_head.md" -->


## Constructors
{: #Constructors .lua-content-section}
### ShipSystem ()
{: #ShipSystem .lua-content-item aria-label='Constructors' }
#### [ShipSystem](../Hyperspace/ShipSystem) ShipSystem ()
{: aria-label='Constructors' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ShipSystem/ShipSystem().md" -->

___
### ShipSystem ()
{: #ShipSystem .lua-content-item aria-label='Constructors' }
#### [ShipSystem](../Hyperspace/ShipSystem) ShipSystem (integer systemId, integer roomId, integer shipId, integer startingPower)
{: aria-label='Constructors' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ShipSystem/ShipSystem(integer,integer,integer,integer).md" -->

___



## Static Methods
{: #Static-Methods .lua-content-section}
### GetLevelDescription ()
{: #GetLevelDescription .lua-content-item aria-label='StaticMethods' }
#### string .GetLevelDescription (integer systemId, integer level, boolean tooltip)
{: aria-label='StaticMethods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ShipSystem/GetLevelDescription(integer,integer,boolean).md" -->

___
### IsSubsystem ()
{: #IsSubsystem .lua-content-item aria-label='StaticMethods' }
#### boolean .IsSubsystem (integer systemType)
{: aria-label='StaticMethods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ShipSystem/IsSubsystem(integer).md" -->

___
### NameToSystemId ()
{: #NameToSystemId .lua-content-item aria-label='StaticMethods' }
#### integer .NameToSystemId (string name)
{: aria-label='StaticMethods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ShipSystem/NameToSystemId(string).md" -->

___
### SystemIdToName ()
{: #SystemIdToName .lua-content-item aria-label='StaticMethods' }
#### string .SystemIdToName (integer systemId)
{: aria-label='StaticMethods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ShipSystem/SystemIdToName(integer).md" -->

___


## Methods
{: #Methods .lua-content-section}
### AddDamage ()
{: #AddDamage .lua-content-item aria-label='Methods' }
#### void :AddDamage (integer amount)
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ShipSystem/AddDamage(integer).md" -->

___
### AddLock ()
{: #AddLock .lua-content-item aria-label='Methods' }
#### void :AddLock (integer lock)
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ShipSystem/AddLock(integer).md" -->

___
### CanBeSabotaged ()
{: #CanBeSabotaged .lua-content-item aria-label='Methods' }
#### boolean :CanBeSabotaged ()
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ShipSystem/CanBeSabotaged().md" -->

___
### CheckForRepower ()
{: #CheckForRepower .lua-content-item aria-label='Methods' }
#### void :CheckForRepower ()
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ShipSystem/CheckForRepower().md" -->

___
### CheckMaxPower ()
{: #CheckMaxPower .lua-content-item aria-label='Methods' }
#### void :CheckMaxPower ()
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ShipSystem/CheckMaxPower().md" -->

___
### ClearStatus ()
{: #ClearStatus .lua-content-item aria-label='Methods' }
#### void :ClearStatus ()
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ShipSystem/ClearStatus().md" -->

___
### Clickable ()
{: #Clickable .lua-content-item aria-label='Methods' }
#### boolean :Clickable ()
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ShipSystem/Clickable().md" -->

___
### CompletelyDestroyed ()
{: #CompletelyDestroyed .lua-content-item aria-label='Methods' }
#### boolean :CompletelyDestroyed ()
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ShipSystem/CompletelyDestroyed().md" -->

___
### DamageOverTime ()
{: #DamageOverTime .lua-content-item aria-label='Methods' }
#### boolean :DamageOverTime (number unk)
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ShipSystem/DamageOverTime(number).md" -->

___
### DecreasePower ()
{: #DecreasePower .lua-content-item aria-label='Methods' }
#### boolean :DecreasePower (boolean force)
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ShipSystem/DecreasePower(boolean).md" -->

___
### ForceBatteryPower ()
{: #ForceBatteryPower .lua-content-item aria-label='Methods' }
#### void :ForceBatteryPower (integer power)
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ShipSystem/ForceBatteryPower(integer).md" -->

___
### ForceDecreasePower ()
{: #ForceDecreasePower .lua-content-item aria-label='Methods' }
#### boolean :ForceDecreasePower (integer powerLoss)
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ShipSystem/ForceDecreasePower(integer).md" -->

___
### ForceIncreasePower ()
{: #ForceIncreasePower .lua-content-item aria-label='Methods' }
#### boolean :ForceIncreasePower (integer power)
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ShipSystem/ForceIncreasePower(integer).md" -->

___
### Functioning ()
{: #Functioning .lua-content-item aria-label='Methods' }
#### boolean :Functioning ()
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ShipSystem/Functioning().md" -->

___
### GetDamage ()
{: #GetDamage .lua-content-item aria-label='Methods' }
#### number :GetDamage ()
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ShipSystem/GetDamage().md" -->

___
### GetEffectivePower ()
{: #GetEffectivePower .lua-content-item aria-label='Methods' }
#### integer :GetEffectivePower ()
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ShipSystem/GetEffectivePower().md" -->

___
### GetId ()
{: #GetId .lua-content-item aria-label='Methods' }
#### integer :GetId ()
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ShipSystem/GetId().md" -->

___
### GetLocked ()
{: #GetLocked .lua-content-item aria-label='Methods' }
#### boolean :GetLocked ()
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ShipSystem/GetLocked().md" -->

___
### GetMaxPower ()
{: #GetMaxPower .lua-content-item aria-label='Methods' }
#### integer :GetMaxPower ()
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ShipSystem/GetMaxPower().md" -->

___
### GetNeedsPower ()
{: #GetNeedsPower .lua-content-item aria-label='Methods' }
#### boolean :GetNeedsPower ()
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ShipSystem/GetNeedsPower().md" -->

___
### GetPowerCap ()
{: #GetPowerCap .lua-content-item aria-label='Methods' }
#### integer :GetPowerCap ()
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ShipSystem/GetPowerCap().md" -->

___
### GetRoomId ()
{: #GetRoomId .lua-content-item aria-label='Methods' }
#### integer :GetRoomId ()
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ShipSystem/GetRoomId().md" -->

___
### GetSelected ()
{: #GetSelected .lua-content-item aria-label='Methods' }
#### integer :GetSelected ()
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ShipSystem/GetSelected().md" -->

___
### IncreasePower ()
{: #IncreasePower .lua-content-item aria-label='Methods' }
#### boolean :IncreasePower (integer amount, boolean force)
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ShipSystem/IncreasePower(integer,boolean).md" -->

___
### IonDamage ()
{: #IonDamage .lua-content-item aria-label='Methods' }
#### void :IonDamage (integer amount)
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ShipSystem/IonDamage(integer).md" -->

___
### Ioned ()
{: #Ioned .lua-content-item aria-label='Methods' }
#### boolean :Ioned ()
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ShipSystem/Ioned().md" -->

___
### Ioned ()
{: #Ioned .lua-content-item aria-label='Methods' }
#### boolean :Ioned (integer num)
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ShipSystem/Ioned(integer).md" -->

___
### IsMannedBoost ()
{: #IsMannedBoost .lua-content-item aria-label='Methods' }
#### integer :IsMannedBoost ()
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ShipSystem/IsMannedBoost().md" -->

___
### IsRoomBased ()
{: #IsRoomBased .lua-content-item aria-label='Methods' }
#### boolean :IsRoomBased ()
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ShipSystem/IsRoomBased().md" -->

___
### LockSystem ()
{: #LockSystem .lua-content-item aria-label='Methods' }
#### void :LockSystem (integer lock)
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ShipSystem/LockSystem(integer).md" -->

___
### NeedsRepairing ()
{: #NeedsRepairing .lua-content-item aria-label='Methods' }
#### boolean :NeedsRepairing ()
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ShipSystem/NeedsRepairing().md" -->

___
### PartialDamage ()
{: #PartialDamage .lua-content-item aria-label='Methods' }
#### boolean :PartialDamage (number amount)
{: aria-label='Methods' }
<!-- Content pulled from "lua-source-parts-inject/Hyperspace/ShipSystem/PartialDamage(number).md" -->
Must be called every tick or else you will not see any change
<!-- End of content -->

___
### PartialRepair ()
{: #PartialRepair .lua-content-item aria-label='Methods' }
#### boolean :PartialRepair (number speed, boolean autoRepair)
{: aria-label='Methods' }
<!-- Content pulled from "lua-source-parts-inject/Hyperspace/ShipSystem/PartialRepair(number,boolean).md" -->
Cause a partial repair of a system (opposite of partialDamage) must be called every tick or else you will not see any change
<!-- End of content -->

___
### Powered ()
{: #Powered .lua-content-item aria-label='Methods' }
#### boolean :Powered ()
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ShipSystem/Powered().md" -->

___
### RemoveBatteryPower ()
{: #RemoveBatteryPower .lua-content-item aria-label='Methods' }
#### void :RemoveBatteryPower ()
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ShipSystem/RemoveBatteryPower().md" -->

___
### Repair ()
{: #Repair .lua-content-item aria-label='Methods' }
#### void :Repair ()
{: aria-label='Methods' }
<!-- Content pulled from "lua-source-parts-inject/Hyperspace/ShipSystem/Repair().md" -->
Not sure if this is a function called every tick to cause repairs or what, probably not useful to lua
<!-- End of content -->

___
### SetBonusPower ()
{: #SetBonusPower .lua-content-item aria-label='Methods' }
#### void :SetBonusPower (integer amount, integer permanentPower)
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ShipSystem/SetBonusPower(integer,integer).md" -->

___
### SetDamage ()
{: #SetDamage .lua-content-item aria-label='Methods' }
#### void :SetDamage (number damage)
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ShipSystem/SetDamage(number).md" -->

___
### SetHackingLevel ()
{: #SetHackingLevel .lua-content-item aria-label='Methods' }
#### void :SetHackingLevel (integer hackingLevel)
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ShipSystem/SetHackingLevel(integer).md" -->

___
### SetLocation ()
{: #SetLocation .lua-content-item aria-label='Methods' }
#### void :SetLocation ([Point](../Hyperspace/Point) pos)
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ShipSystem/SetLocation(Hyperspace.Point).md" -->

___
### SetMaxDamage ()
{: #SetMaxDamage .lua-content-item aria-label='Methods' }
#### void :SetMaxDamage (number maxDamage)
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ShipSystem/SetMaxDamage(number).md" -->

___
### SetName ()
{: #SetName .lua-content-item aria-label='Methods' }
#### void :SetName (string name)
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ShipSystem/SetName(string).md" -->

___
### SetPowerCap ()
{: #SetPowerCap .lua-content-item aria-label='Methods' }
#### void :SetPowerCap (integer cap)
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ShipSystem/SetPowerCap(integer).md" -->

___
### SetPowerLoss ()
{: #SetPowerLoss .lua-content-item aria-label='Methods' }
#### integer :SetPowerLoss (integer power)
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ShipSystem/SetPowerLoss(integer).md" -->

___
### SetRoomId ()
{: #SetRoomId .lua-content-item aria-label='Methods' }
#### void :SetRoomId ()
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ShipSystem/SetRoomId().md" -->

___
### SetSelected ()
{: #SetSelected .lua-content-item aria-label='Methods' }
#### void :SetSelected (integer selectedState)
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ShipSystem/SetSelected(integer).md" -->

___
### StopHacking ()
{: #StopHacking .lua-content-item aria-label='Methods' }
#### void :StopHacking ()
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ShipSystem/StopHacking().md" -->

___
### UpgradeSystem ()
{: #UpgradeSystem .lua-content-item aria-label='Methods' }
#### boolean :UpgradeSystem (integer amount)
{: aria-label='Methods' }
<!-- Content pulled from "lua-source-parts-inject/Hyperspace/ShipSystem/UpgradeSystem(integer).md" -->
Upgrading a system is basically the same as changing the max power of a system although I think max power might reset after a jump? Not sure haven't tested.
I think negative upgrades (downgrades) are allowed, please report if they are not.
<!-- End of content -->

___


## Fields
{: #Fields .lua-content-section}
### _shipObj
{: #_shipObj .lua-content-item aria-label='Fields' }
#### [ShipObject](../Hyperspace/ShipObject) ._shipObj
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ShipSystem/_shipObj.md" -->

___
### bBoostable
{: #bBoostable .lua-content-item aria-label='Fields' }
#### boolean .bBoostable
{: aria-label='Fields' }
<!-- Content pulled from "lua-source-parts-inject/Hyperspace/ShipSystem/bBoostable.md" -->
If the system can be manned by a crewmember.
<!-- End of content -->

___
### bBreached
{: #bBreached .lua-content-item aria-label='Fields' }
#### boolean .bBreached
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ShipSystem/bBreached.md" -->

___
### bExploded
{: #bExploded .lua-content-item aria-label='Fields' }
#### boolean .bExploded
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ShipSystem/bExploded.md" -->

___
### bFriendlies
{: #bFriendlies .lua-content-item aria-label='Fields' }
#### boolean .bFriendlies
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ShipSystem/bFriendlies.md" -->

___
### bLevelBoostable
{: #bLevelBoostable .lua-content-item aria-label='Fields' }
#### boolean .bLevelBoostable
{: aria-label='Fields' }
<!-- Content pulled from "lua-source-parts-inject/Hyperspace/ShipSystem/bLevelBoostable.md" -->
If the system is given an additional level when manned by a crewmember (e.g. doors, sensors).
<!-- End of content -->

___
### bManned
{: #bManned .lua-content-item aria-label='Fields' }
#### boolean .bManned
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ShipSystem/bManned.md" -->

___
### bNeedsManned
{: #bNeedsManned .lua-content-item aria-label='Fields' }
#### boolean .bNeedsManned
{: aria-label='Fields' }
<!-- Content pulled from "lua-source-parts-inject/Hyperspace/ShipSystem/bNeedsManned.md" -->
If the system requires manning to function.
<!-- End of content -->

___
### bNeedsPower
{: #bNeedsPower .lua-content-item aria-label='Fields' }
#### boolean .bNeedsPower
{: aria-label='Fields' }
<!-- Content pulled from "lua-source-parts-inject/Hyperspace/ShipSystem/bNeedsPower.md" -->
True for regular systems, false for subsystems.
<!-- End of content -->

___
### bOccupied
{: #bOccupied .lua-content-item aria-label='Fields' }
#### boolean .bOccupied
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ShipSystem/bOccupied.md" -->

___
### bOnFire
{: #bOnFire .lua-content-item aria-label='Fields' }
#### boolean .bOnFire
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ShipSystem/bOnFire.md" -->

___
### bTriggerIon
{: #bTriggerIon .lua-content-item aria-label='Fields' }
#### boolean .bTriggerIon
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ShipSystem/bTriggerIon.md" -->

___
### bUnderAttack
{: #bUnderAttack .lua-content-item aria-label='Fields' }
#### boolean .bUnderAttack
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ShipSystem/bUnderAttack.md" -->

___
### bpCost
{: #bpCost .lua-content-item aria-label='Fields' }
#### integer .bpCost
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ShipSystem/bpCost.md" -->

___
### computerLevel
{: #computerLevel .lua-content-item aria-label='Fields' }
#### integer .computerLevel
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ShipSystem/computerLevel.md" -->

___
### damagedLastFrame
{: #damagedLastFrame .lua-content-item aria-label='Fields' }
#### boolean .damagedLastFrame
{: aria-label='Fields' }
<!-- Content pulled from "lua-source-parts-inject/Hyperspace/ShipSystem/damagedLastFrame.md" -->
I don't know if this can be set to true per-frame to hold the damage over time progression counter, it might be able to freeze the graphic so it doesn't count down.
<!-- End of content -->

___
### extend (Read-only)
{: #extend .lua-content-item aria-label='Fields' }
#### [ShipSystem_Extend](../Hyperspace/ShipSystem_Extend) .extend
{: aria-label='Fields' }
<!-- Content pulled from "lua-source-parts-inject/Hyperspace/ShipSystem/extend.md" -->
**Since 1.4.0**
<!-- End of content -->

___
### fDamage
{: #fDamage .lua-content-item aria-label='Fields' }
#### number .fDamage
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ShipSystem/fDamage.md" -->

___
### fDamageOverTime
{: #fDamageOverTime .lua-content-item aria-label='Fields' }
#### number .fDamageOverTime
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ShipSystem/fDamageOverTime.md" -->

___
### fMaxDamage
{: #fMaxDamage .lua-content-item aria-label='Fields' }
#### number .fMaxDamage
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ShipSystem/fMaxDamage.md" -->

___
### fRepairOverTime
{: #fRepairOverTime .lua-content-item aria-label='Fields' }
#### number .fRepairOverTime
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ShipSystem/fRepairOverTime.md" -->

___
### flashTracker
{: #flashTracker .lua-content-item aria-label='Fields' }
#### [AnimationTracker](../Hyperspace/AnimationTracker) .flashTracker
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ShipSystem/flashTracker.md" -->

___
### healthState
{: #healthState .lua-content-item aria-label='Fields' }
#### pair\<integer, integer\> .healthState
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ShipSystem/healthState.md" -->

___
### iActiveManned
{: #iActiveManned .lua-content-item aria-label='Fields' }
#### integer .iActiveManned
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ShipSystem/iActiveManned.md" -->

___
### iBatteryPower
{: #iBatteryPower .lua-content-item aria-label='Fields' }
#### integer .iBatteryPower
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ShipSystem/iBatteryPower.md" -->

___
### iBonusPower
{: #iBonusPower .lua-content-item aria-label='Fields' }
#### integer .iBonusPower
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ShipSystem/iBonusPower.md" -->

___
### iHackEffect
{: #iHackEffect .lua-content-item aria-label='Fields' }
#### integer .iHackEffect
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ShipSystem/iHackEffect.md" -->

___
### iLastBonusPower
{: #iLastBonusPower .lua-content-item aria-label='Fields' }
#### integer .iLastBonusPower
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ShipSystem/iLastBonusPower.md" -->

___
### iLockCount
{: #iLockCount .lua-content-item aria-label='Fields' }
#### integer .iLockCount
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ShipSystem/iLockCount.md" -->

___
### iRepairCount
{: #iRepairCount .lua-content-item aria-label='Fields' }
#### integer .iRepairCount
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ShipSystem/iRepairCount.md" -->

___
### iRequiredPower
{: #iRequiredPower .lua-content-item aria-label='Fields' }
#### integer .iRequiredPower
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ShipSystem/iRequiredPower.md" -->

___
### iSystemType
{: #iSystemType .lua-content-item aria-label='Fields' }
#### integer .iSystemType
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ShipSystem/iSystemType.md" -->

___
### iTempDividePower
{: #iTempDividePower .lua-content-item aria-label='Fields' }
#### integer .iTempDividePower
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ShipSystem/iTempDividePower.md" -->

___
### iTempPowerCap
{: #iTempPowerCap .lua-content-item aria-label='Fields' }
#### integer .iTempPowerCap
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ShipSystem/iTempPowerCap.md" -->

___
### iTempPowerLoss
{: #iTempPowerLoss .lua-content-item aria-label='Fields' }
#### integer .iTempPowerLoss
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ShipSystem/iTempPowerLoss.md" -->

___
### interiorImage
{: #interiorImage .lua-content-item aria-label='Fields' }
#### [GL_Primitive](../Graphics/GL_Primitive) .interiorImage
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ShipSystem/interiorImage.md" -->

___
### interiorImageManned
{: #interiorImageManned .lua-content-item aria-label='Fields' }
#### [GL_Primitive](../Graphics/GL_Primitive) .interiorImageManned
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ShipSystem/interiorImageManned.md" -->

___
### interiorImageMannedFancy
{: #interiorImageMannedFancy .lua-content-item aria-label='Fields' }
#### [GL_Primitive](../Graphics/GL_Primitive) .interiorImageMannedFancy
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ShipSystem/interiorImageMannedFancy.md" -->

___
### interiorImageName
{: #interiorImageName .lua-content-item aria-label='Fields' }
#### string .interiorImageName
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ShipSystem/interiorImageName.md" -->

___
### interiorImageOn
{: #interiorImageOn .lua-content-item aria-label='Fields' }
#### [GL_Primitive](../Graphics/GL_Primitive) .interiorImageOn
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ShipSystem/interiorImageOn.md" -->

___
### lastUserPower
{: #lastUserPower .lua-content-item aria-label='Fields' }
#### integer .lastUserPower
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ShipSystem/lastUserPower.md" -->

___
### location
{: #location .lua-content-item aria-label='Fields' }
#### [Pointf](../Hyperspace/Pointf) .location
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ShipSystem/location.md" -->

___
### lockTimer
{: #lockTimer .lua-content-item aria-label='Fields' }
#### [TimerHelper](../Hyperspace/TimerHelper) .lockTimer
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ShipSystem/lockTimer.md" -->

___
### maxLevel
{: #maxLevel .lua-content-item aria-label='Fields' }
#### integer .maxLevel
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ShipSystem/maxLevel.md" -->

___
### name
{: #name .lua-content-item aria-label='Fields' }
#### string .name
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ShipSystem/name.md" -->

___
### originalPower
{: #originalPower .lua-content-item aria-label='Fields' }
#### integer .originalPower
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ShipSystem/originalPower.md" -->

___
### pLoc
{: #pLoc .lua-content-item aria-label='Fields' }
#### [Point](../Hyperspace/Point) .pLoc
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ShipSystem/pLoc.md" -->

___
### powerState
{: #powerState .lua-content-item aria-label='Fields' }
#### pair\<integer, integer\> .powerState
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ShipSystem/powerState.md" -->

___
### repairedLastFrame
{: #repairedLastFrame .lua-content-item aria-label='Fields' }
#### boolean .repairedLastFrame
{: aria-label='Fields' }
<!-- Content pulled from "lua-source-parts-inject/Hyperspace/ShipSystem/repairedLastFrame.md" -->
I don't know if this can be set to true per-frame to hold the repair over time progression counter, it might be able to freeze the graphic so it doesn't count down.
<!-- End of content -->

___
### roomId
{: #roomId .lua-content-item aria-label='Fields' }
#### integer .roomId
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ShipSystem/roomId.md" -->

___
### table
{: #table .lua-content-item aria-label='Fields' }
#### table .table
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ShipSystem/table.md" -->

___
