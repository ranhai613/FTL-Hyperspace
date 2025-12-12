---
layout: lua
title: ShipSystem
lang: en
---

# Class "ShipSystem"



Subclasses: [ArtillerySystem](../Hyperspace/ArtillerySystem), [BatterySystem](../Hyperspace/BatterySystem), [CloakingSystem](../Hyperspace/CloakingSystem), [CloneSystem](../Hyperspace/CloneSystem), [DroneSystem](../Hyperspace/DroneSystem), [HackingSystem](../Hyperspace/HackingSystem), [MedbaySystem](../Hyperspace/MedbaySystem), [MindSystem](../Hyperspace/MindSystem), [OxygenSystem](../Hyperspace/OxygenSystem), [Shields](../Hyperspace/Shields), [TeleportSystem](../Hyperspace/TeleportSystem), [WeaponSystem](../Hyperspace/WeaponSystem)


## Constructors
{: #Constructors .lua-content-section}
### ShipSystem ()
{: #ShipSystem .lua-content-item aria-label='Constructors' }
#### [ShipSystem](../Hyperspace/ShipSystem) ShipSystem ()
{: aria-label='Constructors' }

___
### ShipSystem ()
{: #ShipSystem .lua-content-item aria-label='Constructors' }
#### [ShipSystem](../Hyperspace/ShipSystem) ShipSystem (integer systemId, integer roomId, integer shipId, integer startingPower)
{: aria-label='Constructors' }

___



## Static Methods
{: #Static-Methods .lua-content-section}
### GetLevelDescription ()
{: #GetLevelDescription .lua-content-item aria-label='StaticMethods' }
#### string .GetLevelDescription (integer systemId, integer level, boolean tooltip)
{: aria-label='StaticMethods' }

___
### IsSubsystem ()
{: #IsSubsystem .lua-content-item aria-label='StaticMethods' }
#### boolean .IsSubsystem (integer systemType)
{: aria-label='StaticMethods' }

___
### NameToSystemId ()
{: #NameToSystemId .lua-content-item aria-label='StaticMethods' }
#### integer .NameToSystemId (string name)
{: aria-label='StaticMethods' }

___
### SystemIdToName ()
{: #SystemIdToName .lua-content-item aria-label='StaticMethods' }
#### string .SystemIdToName (integer systemId)
{: aria-label='StaticMethods' }

___


## Methods
{: #Methods .lua-content-section}
### AddDamage ()
{: #AddDamage .lua-content-item aria-label='Methods' }
#### void :AddDamage (integer amount)
{: aria-label='Methods' }

___
### AddLock ()
{: #AddLock .lua-content-item aria-label='Methods' }
#### void :AddLock (integer lock)
{: aria-label='Methods' }

___
### CanBeSabotaged ()
{: #CanBeSabotaged .lua-content-item aria-label='Methods' }
#### boolean :CanBeSabotaged ()
{: aria-label='Methods' }

___
### CheckForRepower ()
{: #CheckForRepower .lua-content-item aria-label='Methods' }
#### void :CheckForRepower ()
{: aria-label='Methods' }

___
### CheckMaxPower ()
{: #CheckMaxPower .lua-content-item aria-label='Methods' }
#### void :CheckMaxPower ()
{: aria-label='Methods' }

___
### ClearStatus ()
{: #ClearStatus .lua-content-item aria-label='Methods' }
#### void :ClearStatus ()
{: aria-label='Methods' }

___
### Clickable ()
{: #Clickable .lua-content-item aria-label='Methods' }
#### boolean :Clickable ()
{: aria-label='Methods' }

___
### CompletelyDestroyed ()
{: #CompletelyDestroyed .lua-content-item aria-label='Methods' }
#### boolean :CompletelyDestroyed ()
{: aria-label='Methods' }

___
### DamageOverTime ()
{: #DamageOverTime .lua-content-item aria-label='Methods' }
#### boolean :DamageOverTime (number unk)
{: aria-label='Methods' }

___
### DecreasePower ()
{: #DecreasePower .lua-content-item aria-label='Methods' }
#### boolean :DecreasePower (boolean force)
{: aria-label='Methods' }

___
### ForceBatteryPower ()
{: #ForceBatteryPower .lua-content-item aria-label='Methods' }
#### void :ForceBatteryPower (integer power)
{: aria-label='Methods' }

___
### ForceDecreasePower ()
{: #ForceDecreasePower .lua-content-item aria-label='Methods' }
#### boolean :ForceDecreasePower (integer powerLoss)
{: aria-label='Methods' }

___
### ForceIncreasePower ()
{: #ForceIncreasePower .lua-content-item aria-label='Methods' }
#### boolean :ForceIncreasePower (integer power)
{: aria-label='Methods' }

___
### Functioning ()
{: #Functioning .lua-content-item aria-label='Methods' }
#### boolean :Functioning ()
{: aria-label='Methods' }

___
### GetDamage ()
{: #GetDamage .lua-content-item aria-label='Methods' }
#### number :GetDamage ()
{: aria-label='Methods' }

___
### GetEffectivePower ()
{: #GetEffectivePower .lua-content-item aria-label='Methods' }
#### integer :GetEffectivePower ()
{: aria-label='Methods' }

___
### GetId ()
{: #GetId .lua-content-item aria-label='Methods' }
#### integer :GetId ()
{: aria-label='Methods' }

___
### GetLocked ()
{: #GetLocked .lua-content-item aria-label='Methods' }
#### boolean :GetLocked ()
{: aria-label='Methods' }

___
### GetMaxPower ()
{: #GetMaxPower .lua-content-item aria-label='Methods' }
#### integer :GetMaxPower ()
{: aria-label='Methods' }

___
### GetNeedsPower ()
{: #GetNeedsPower .lua-content-item aria-label='Methods' }
#### boolean :GetNeedsPower ()
{: aria-label='Methods' }

___
### GetPowerCap ()
{: #GetPowerCap .lua-content-item aria-label='Methods' }
#### integer :GetPowerCap ()
{: aria-label='Methods' }

___
### GetRoomId ()
{: #GetRoomId .lua-content-item aria-label='Methods' }
#### integer :GetRoomId ()
{: aria-label='Methods' }

___
### GetSelected ()
{: #GetSelected .lua-content-item aria-label='Methods' }
#### integer :GetSelected ()
{: aria-label='Methods' }

___
### IncreasePower ()
{: #IncreasePower .lua-content-item aria-label='Methods' }
#### boolean :IncreasePower (integer amount, boolean force)
{: aria-label='Methods' }

___
### IonDamage ()
{: #IonDamage .lua-content-item aria-label='Methods' }
#### void :IonDamage (integer amount)
{: aria-label='Methods' }

___
### Ioned ()
{: #Ioned .lua-content-item aria-label='Methods' }
#### boolean :Ioned ()
{: aria-label='Methods' }

___
### Ioned ()
{: #Ioned .lua-content-item aria-label='Methods' }
#### boolean :Ioned (integer num)
{: aria-label='Methods' }

___
### IsMannedBoost ()
{: #IsMannedBoost .lua-content-item aria-label='Methods' }
#### integer :IsMannedBoost ()
{: aria-label='Methods' }

___
### IsRoomBased ()
{: #IsRoomBased .lua-content-item aria-label='Methods' }
#### boolean :IsRoomBased ()
{: aria-label='Methods' }

___
### LockSystem ()
{: #LockSystem .lua-content-item aria-label='Methods' }
#### void :LockSystem (integer lock)
{: aria-label='Methods' }

___
### NeedsRepairing ()
{: #NeedsRepairing .lua-content-item aria-label='Methods' }
#### boolean :NeedsRepairing ()
{: aria-label='Methods' }

___
### PartialDamage ()
{: #PartialDamage .lua-content-item aria-label='Methods' }
#### boolean :PartialDamage (number amount)
{: aria-label='Methods' }
Must be called every tick or else you will not see any change

___
### PartialRepair ()
{: #PartialRepair .lua-content-item aria-label='Methods' }
#### boolean :PartialRepair (number speed, boolean autoRepair)
{: aria-label='Methods' }
Cause a partial repair of a system (opposite of partialDamage) must be called every tick or else you will not see any change

___
### Powered ()
{: #Powered .lua-content-item aria-label='Methods' }
#### boolean :Powered ()
{: aria-label='Methods' }

___
### RemoveBatteryPower ()
{: #RemoveBatteryPower .lua-content-item aria-label='Methods' }
#### void :RemoveBatteryPower ()
{: aria-label='Methods' }

___
### Repair ()
{: #Repair .lua-content-item aria-label='Methods' }
#### void :Repair ()
{: aria-label='Methods' }
Not sure if this is a function called every tick to cause repairs or what, probably not useful to lua

___
### SetBonusPower ()
{: #SetBonusPower .lua-content-item aria-label='Methods' }
#### void :SetBonusPower (integer amount, integer permanentPower)
{: aria-label='Methods' }

___
### SetDamage ()
{: #SetDamage .lua-content-item aria-label='Methods' }
#### void :SetDamage (number damage)
{: aria-label='Methods' }

___
### SetHackingLevel ()
{: #SetHackingLevel .lua-content-item aria-label='Methods' }
#### void :SetHackingLevel (integer hackingLevel)
{: aria-label='Methods' }

___
### SetLocation ()
{: #SetLocation .lua-content-item aria-label='Methods' }
#### void :SetLocation ([Point](../Hyperspace/Point) pos)
{: aria-label='Methods' }

___
### SetMaxDamage ()
{: #SetMaxDamage .lua-content-item aria-label='Methods' }
#### void :SetMaxDamage (number maxDamage)
{: aria-label='Methods' }

___
### SetName ()
{: #SetName .lua-content-item aria-label='Methods' }
#### void :SetName (string name)
{: aria-label='Methods' }

___
### SetPowerCap ()
{: #SetPowerCap .lua-content-item aria-label='Methods' }
#### void :SetPowerCap (integer cap)
{: aria-label='Methods' }

___
### SetPowerLoss ()
{: #SetPowerLoss .lua-content-item aria-label='Methods' }
#### integer :SetPowerLoss (integer power)
{: aria-label='Methods' }

___
### SetRoomId ()
{: #SetRoomId .lua-content-item aria-label='Methods' }
#### void :SetRoomId ()
{: aria-label='Methods' }

___
### SetSelected ()
{: #SetSelected .lua-content-item aria-label='Methods' }
#### void :SetSelected (integer selectedState)
{: aria-label='Methods' }

___
### StopHacking ()
{: #StopHacking .lua-content-item aria-label='Methods' }
#### void :StopHacking ()
{: aria-label='Methods' }

___
### UpgradeSystem ()
{: #UpgradeSystem .lua-content-item aria-label='Methods' }
#### boolean :UpgradeSystem (integer amount)
{: aria-label='Methods' }
Upgrading a system is basically the same as changing the max power of a system although I think max power might reset after a jump? Not sure haven't tested.
I think negative upgrades (downgrades) are allowed, please report if they are not.

___


## Fields
{: #Fields .lua-content-section}
### _shipObj
{: #_shipObj .lua-content-item aria-label='Fields' }
#### [ShipObject](../Hyperspace/ShipObject) ._shipObj
{: aria-label='Fields' }

___
### bBoostable
{: #bBoostable .lua-content-item aria-label='Fields' }
#### boolean .bBoostable
{: aria-label='Fields' }
If the system can be manned by a crewmember.

___
### bBreached
{: #bBreached .lua-content-item aria-label='Fields' }
#### boolean .bBreached
{: aria-label='Fields' }

___
### bExploded
{: #bExploded .lua-content-item aria-label='Fields' }
#### boolean .bExploded
{: aria-label='Fields' }

___
### bFriendlies
{: #bFriendlies .lua-content-item aria-label='Fields' }
#### boolean .bFriendlies
{: aria-label='Fields' }

___
### bLevelBoostable
{: #bLevelBoostable .lua-content-item aria-label='Fields' }
#### boolean .bLevelBoostable
{: aria-label='Fields' }
If the system is given an additional level when manned by a crewmember (e.g. doors, sensors).

___
### bManned
{: #bManned .lua-content-item aria-label='Fields' }
#### boolean .bManned
{: aria-label='Fields' }

___
### bNeedsManned
{: #bNeedsManned .lua-content-item aria-label='Fields' }
#### boolean .bNeedsManned
{: aria-label='Fields' }
If the system requires manning to function.

___
### bNeedsPower
{: #bNeedsPower .lua-content-item aria-label='Fields' }
#### boolean .bNeedsPower
{: aria-label='Fields' }
True for regular systems, false for subsystems.

___
### bOccupied
{: #bOccupied .lua-content-item aria-label='Fields' }
#### boolean .bOccupied
{: aria-label='Fields' }

___
### bOnFire
{: #bOnFire .lua-content-item aria-label='Fields' }
#### boolean .bOnFire
{: aria-label='Fields' }

___
### bTriggerIon
{: #bTriggerIon .lua-content-item aria-label='Fields' }
#### boolean .bTriggerIon
{: aria-label='Fields' }

___
### bUnderAttack
{: #bUnderAttack .lua-content-item aria-label='Fields' }
#### boolean .bUnderAttack
{: aria-label='Fields' }

___
### bpCost
{: #bpCost .lua-content-item aria-label='Fields' }
#### integer .bpCost
{: aria-label='Fields' }

___
### computerLevel
{: #computerLevel .lua-content-item aria-label='Fields' }
#### integer .computerLevel
{: aria-label='Fields' }

___
### damagedLastFrame
{: #damagedLastFrame .lua-content-item aria-label='Fields' }
#### boolean .damagedLastFrame
{: aria-label='Fields' }
I don't know if this can be set to true per-frame to hold the damage over time progression counter, it might be able to freeze the graphic so it doesn't count down.

___
### extend (Read-only)
{: #extend .lua-content-item aria-label='Fields' }
#### [ShipSystem_Extend](../Hyperspace/ShipSystem_Extend) .extend
{: aria-label='Fields' }
**Since 1.4.0**

___
### fDamage
{: #fDamage .lua-content-item aria-label='Fields' }
#### number .fDamage
{: aria-label='Fields' }

___
### fDamageOverTime
{: #fDamageOverTime .lua-content-item aria-label='Fields' }
#### number .fDamageOverTime
{: aria-label='Fields' }

___
### fMaxDamage
{: #fMaxDamage .lua-content-item aria-label='Fields' }
#### number .fMaxDamage
{: aria-label='Fields' }

___
### fRepairOverTime
{: #fRepairOverTime .lua-content-item aria-label='Fields' }
#### number .fRepairOverTime
{: aria-label='Fields' }

___
### flashTracker
{: #flashTracker .lua-content-item aria-label='Fields' }
#### [AnimationTracker](../Hyperspace/AnimationTracker) .flashTracker
{: aria-label='Fields' }

___
### healthState
{: #healthState .lua-content-item aria-label='Fields' }
#### pair\<integer, integer\> .healthState
{: aria-label='Fields' }

___
### iActiveManned
{: #iActiveManned .lua-content-item aria-label='Fields' }
#### integer .iActiveManned
{: aria-label='Fields' }

___
### iBatteryPower
{: #iBatteryPower .lua-content-item aria-label='Fields' }
#### integer .iBatteryPower
{: aria-label='Fields' }

___
### iBonusPower
{: #iBonusPower .lua-content-item aria-label='Fields' }
#### integer .iBonusPower
{: aria-label='Fields' }

___
### iHackEffect
{: #iHackEffect .lua-content-item aria-label='Fields' }
#### integer .iHackEffect
{: aria-label='Fields' }

___
### iLastBonusPower
{: #iLastBonusPower .lua-content-item aria-label='Fields' }
#### integer .iLastBonusPower
{: aria-label='Fields' }

___
### iLockCount
{: #iLockCount .lua-content-item aria-label='Fields' }
#### integer .iLockCount
{: aria-label='Fields' }

___
### iRepairCount
{: #iRepairCount .lua-content-item aria-label='Fields' }
#### integer .iRepairCount
{: aria-label='Fields' }

___
### iRequiredPower
{: #iRequiredPower .lua-content-item aria-label='Fields' }
#### integer .iRequiredPower
{: aria-label='Fields' }

___
### iSystemType
{: #iSystemType .lua-content-item aria-label='Fields' }
#### integer .iSystemType
{: aria-label='Fields' }

___
### iTempDividePower
{: #iTempDividePower .lua-content-item aria-label='Fields' }
#### integer .iTempDividePower
{: aria-label='Fields' }

___
### iTempPowerCap
{: #iTempPowerCap .lua-content-item aria-label='Fields' }
#### integer .iTempPowerCap
{: aria-label='Fields' }

___
### iTempPowerLoss
{: #iTempPowerLoss .lua-content-item aria-label='Fields' }
#### integer .iTempPowerLoss
{: aria-label='Fields' }

___
### interiorImage
{: #interiorImage .lua-content-item aria-label='Fields' }
#### [GL_Primitive](../Graphics/GL_Primitive) .interiorImage
{: aria-label='Fields' }

___
### interiorImageManned
{: #interiorImageManned .lua-content-item aria-label='Fields' }
#### [GL_Primitive](../Graphics/GL_Primitive) .interiorImageManned
{: aria-label='Fields' }

___
### interiorImageMannedFancy
{: #interiorImageMannedFancy .lua-content-item aria-label='Fields' }
#### [GL_Primitive](../Graphics/GL_Primitive) .interiorImageMannedFancy
{: aria-label='Fields' }

___
### interiorImageName
{: #interiorImageName .lua-content-item aria-label='Fields' }
#### string .interiorImageName
{: aria-label='Fields' }

___
### interiorImageOn
{: #interiorImageOn .lua-content-item aria-label='Fields' }
#### [GL_Primitive](../Graphics/GL_Primitive) .interiorImageOn
{: aria-label='Fields' }

___
### lastUserPower
{: #lastUserPower .lua-content-item aria-label='Fields' }
#### integer .lastUserPower
{: aria-label='Fields' }

___
### location
{: #location .lua-content-item aria-label='Fields' }
#### [Pointf](../Hyperspace/Pointf) .location
{: aria-label='Fields' }

___
### lockTimer
{: #lockTimer .lua-content-item aria-label='Fields' }
#### [TimerHelper](../Hyperspace/TimerHelper) .lockTimer
{: aria-label='Fields' }

___
### maxLevel
{: #maxLevel .lua-content-item aria-label='Fields' }
#### integer .maxLevel
{: aria-label='Fields' }

___
### name
{: #name .lua-content-item aria-label='Fields' }
#### string .name
{: aria-label='Fields' }

___
### originalPower
{: #originalPower .lua-content-item aria-label='Fields' }
#### integer .originalPower
{: aria-label='Fields' }

___
### pLoc
{: #pLoc .lua-content-item aria-label='Fields' }
#### [Point](../Hyperspace/Point) .pLoc
{: aria-label='Fields' }

___
### powerState
{: #powerState .lua-content-item aria-label='Fields' }
#### pair\<integer, integer\> .powerState
{: aria-label='Fields' }

___
### repairedLastFrame
{: #repairedLastFrame .lua-content-item aria-label='Fields' }
#### boolean .repairedLastFrame
{: aria-label='Fields' }
I don't know if this can be set to true per-frame to hold the repair over time progression counter, it might be able to freeze the graphic so it doesn't count down.

___
### roomId
{: #roomId .lua-content-item aria-label='Fields' }
#### integer .roomId
{: aria-label='Fields' }

___
### table
{: #table .lua-content-item aria-label='Fields' }
#### table .table
{: aria-label='Fields' }

___
