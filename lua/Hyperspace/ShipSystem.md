---
layout: lua
title: ShipSystem
lang: en
---

# Class "ShipSystem"


## Constructors
### ShipSystem ()
{: aria-label='Constructors' }
#### [ShipSystem](../Hyperspace/ShipSystem) ShipSystem ()
{: aria-label='Constructors' }

___
### ShipSystem ()
{: aria-label='Constructors' }
#### [ShipSystem](../Hyperspace/ShipSystem) ShipSystem (integer systemId, integer roomId, integer shipId, integer startingPower)
{: aria-label='Constructors' }

___



## Static Methods
### GetLevelDescription ()
{: aria-label='StaticMethods' }
#### string .GetLevelDescription (integer systemId, integer level, boolean tooltip)
{: aria-label='StaticMethods' }

___
### IsSubsystem ()
{: aria-label='StaticMethods' }
#### boolean .IsSubsystem (integer systemType)
{: aria-label='StaticMethods' }

___
### NameToSystemId ()
{: aria-label='StaticMethods' }
#### integer .NameToSystemId (string name)
{: aria-label='StaticMethods' }

___
### SystemIdToName ()
{: aria-label='StaticMethods' }
#### string .SystemIdToName (integer systemId)
{: aria-label='StaticMethods' }

___


## Methods
### AddDamage ()
{: aria-label='Methods' }
#### void :AddDamage (integer amount)
{: aria-label='Methods' }

___
### AddLock ()
{: aria-label='Methods' }
#### void :AddLock (integer lock)
{: aria-label='Methods' }

___
### CanBeSabotaged ()
{: aria-label='Methods' }
#### boolean :CanBeSabotaged ()
{: aria-label='Methods' }

___
### CheckForRepower ()
{: aria-label='Methods' }
#### void :CheckForRepower ()
{: aria-label='Methods' }

___
### CheckMaxPower ()
{: aria-label='Methods' }
#### void :CheckMaxPower ()
{: aria-label='Methods' }

___
### ClearStatus ()
{: aria-label='Methods' }
#### void :ClearStatus ()
{: aria-label='Methods' }

___
### Clickable ()
{: aria-label='Methods' }
#### boolean :Clickable ()
{: aria-label='Methods' }

___
### CompletelyDestroyed ()
{: aria-label='Methods' }
#### boolean :CompletelyDestroyed ()
{: aria-label='Methods' }

___
### DamageOverTime ()
{: aria-label='Methods' }
#### boolean :DamageOverTime (number unk)
{: aria-label='Methods' }

___
### DecreasePower ()
{: aria-label='Methods' }
#### boolean :DecreasePower (boolean force)
{: aria-label='Methods' }

___
### ForceBatteryPower ()
{: aria-label='Methods' }
#### void :ForceBatteryPower (integer power)
{: aria-label='Methods' }

___
### ForceDecreasePower ()
{: aria-label='Methods' }
#### boolean :ForceDecreasePower (integer powerLoss)
{: aria-label='Methods' }

___
### ForceIncreasePower ()
{: aria-label='Methods' }
#### boolean :ForceIncreasePower (integer power)
{: aria-label='Methods' }

___
### Functioning ()
{: aria-label='Methods' }
#### boolean :Functioning ()
{: aria-label='Methods' }

___
### GetDamage ()
{: aria-label='Methods' }
#### number :GetDamage ()
{: aria-label='Methods' }

___
### GetEffectivePower ()
{: aria-label='Methods' }
#### integer :GetEffectivePower ()
{: aria-label='Methods' }

___
### GetId ()
{: aria-label='Methods' }
#### integer :GetId ()
{: aria-label='Methods' }

___
### GetLocked ()
{: aria-label='Methods' }
#### boolean :GetLocked ()
{: aria-label='Methods' }

___
### GetMaxPower ()
{: aria-label='Methods' }
#### integer :GetMaxPower ()
{: aria-label='Methods' }

___
### GetNeedsPower ()
{: aria-label='Methods' }
#### boolean :GetNeedsPower ()
{: aria-label='Methods' }

___
### GetPowerCap ()
{: aria-label='Methods' }
#### integer :GetPowerCap ()
{: aria-label='Methods' }

___
### GetRoomId ()
{: aria-label='Methods' }
#### integer :GetRoomId ()
{: aria-label='Methods' }

___
### GetSelected ()
{: aria-label='Methods' }
#### integer :GetSelected ()
{: aria-label='Methods' }

___
### IncreasePower ()
{: aria-label='Methods' }
#### boolean :IncreasePower (integer amount, boolean force)
{: aria-label='Methods' }

___
### IonDamage ()
{: aria-label='Methods' }
#### void :IonDamage (integer amount)
{: aria-label='Methods' }

___
### Ioned ()
{: aria-label='Methods' }
#### boolean :Ioned ()
{: aria-label='Methods' }

___
### Ioned ()
{: aria-label='Methods' }
#### boolean :Ioned (integer num)
{: aria-label='Methods' }

___
### IsMannedBoost ()
{: aria-label='Methods' }
#### integer :IsMannedBoost ()
{: aria-label='Methods' }

___
### IsRoomBased ()
{: aria-label='Methods' }
#### boolean :IsRoomBased ()
{: aria-label='Methods' }

___
### LockSystem ()
{: aria-label='Methods' }
#### void :LockSystem (integer lock)
{: aria-label='Methods' }

___
### NeedsRepairing ()
{: aria-label='Methods' }
#### boolean :NeedsRepairing ()
{: aria-label='Methods' }

___
### PartialDamage ()
{: aria-label='Methods' }
#### boolean :PartialDamage (number amount)
{: aria-label='Methods' }
Must be called every tick or else you will not see any change

___
### PartialRepair ()
{: aria-label='Methods' }
#### boolean :PartialRepair (number speed, boolean autoRepair)
{: aria-label='Methods' }
Cause a partial repair of a system (opposite of partialDamage) must be called every tick or else you will not see any change

___
### Powered ()
{: aria-label='Methods' }
#### boolean :Powered ()
{: aria-label='Methods' }

___
### RemoveBatteryPower ()
{: aria-label='Methods' }
#### void :RemoveBatteryPower ()
{: aria-label='Methods' }

___
### Repair ()
{: aria-label='Methods' }
#### void :Repair ()
{: aria-label='Methods' }
Not sure if this is a function called every tick to cause repairs or what, probably not useful to lua

___
### SetBonusPower ()
{: aria-label='Methods' }
#### void :SetBonusPower (integer amount, integer permanentPower)
{: aria-label='Methods' }

___
### SetDamage ()
{: aria-label='Methods' }
#### void :SetDamage (number damage)
{: aria-label='Methods' }

___
### SetHackingLevel ()
{: aria-label='Methods' }
#### void :SetHackingLevel (integer hackingLevel)
{: aria-label='Methods' }

___
### SetLocation ()
{: aria-label='Methods' }
#### void :SetLocation ([Point](../Hyperspace/Point) pos)
{: aria-label='Methods' }

___
### SetMaxDamage ()
{: aria-label='Methods' }
#### void :SetMaxDamage (number maxDamage)
{: aria-label='Methods' }

___
### SetName ()
{: aria-label='Methods' }
#### void :SetName (string name)
{: aria-label='Methods' }

___
### SetPowerCap ()
{: aria-label='Methods' }
#### void :SetPowerCap (integer cap)
{: aria-label='Methods' }

___
### SetPowerLoss ()
{: aria-label='Methods' }
#### integer :SetPowerLoss (integer power)
{: aria-label='Methods' }

___
### SetRoomId ()
{: aria-label='Methods' }
#### void :SetRoomId ()
{: aria-label='Methods' }

___
### SetSelected ()
{: aria-label='Methods' }
#### void :SetSelected (integer selectedState)
{: aria-label='Methods' }

___
### StopHacking ()
{: aria-label='Methods' }
#### void :StopHacking ()
{: aria-label='Methods' }

___
### UpgradeSystem ()
{: aria-label='Methods' }
#### boolean :UpgradeSystem (integer amount)
{: aria-label='Methods' }
Upgrading a system is basically the same as changing the max power of a system although I think max power might reset after a jump? Not sure haven't tested.
I think negative upgrades (downgrades) are allowed, please report if they are not.

___


## Fields
### _shipObj
{: aria-label='Fields' }
#### [ShipObject](../Hyperspace/ShipObject) ._shipObj
{: aria-label='Fields' }

___
### bBoostable
{: aria-label='Fields' }
#### boolean .bBoostable
{: aria-label='Fields' }
If the system can be manned by a crewmember.

___
### bBreached
{: aria-label='Fields' }
#### boolean .bBreached
{: aria-label='Fields' }

___
### bExploded
{: aria-label='Fields' }
#### boolean .bExploded
{: aria-label='Fields' }

___
### bFriendlies
{: aria-label='Fields' }
#### boolean .bFriendlies
{: aria-label='Fields' }

___
### bLevelBoostable
{: aria-label='Fields' }
#### boolean .bLevelBoostable
{: aria-label='Fields' }
If the system is given an additional level when manned by a crewmember (e.g. doors, sensors).

___
### bManned
{: aria-label='Fields' }
#### boolean .bManned
{: aria-label='Fields' }

___
### bNeedsManned
{: aria-label='Fields' }
#### boolean .bNeedsManned
{: aria-label='Fields' }
If the system requires manning to function.

___
### bNeedsPower
{: aria-label='Fields' }
#### boolean .bNeedsPower
{: aria-label='Fields' }
True for regular systems, false for subsystems.

___
### bOccupied
{: aria-label='Fields' }
#### boolean .bOccupied
{: aria-label='Fields' }

___
### bOnFire
{: aria-label='Fields' }
#### boolean .bOnFire
{: aria-label='Fields' }

___
### bTriggerIon
{: aria-label='Fields' }
#### boolean .bTriggerIon
{: aria-label='Fields' }

___
### bUnderAttack
{: aria-label='Fields' }
#### boolean .bUnderAttack
{: aria-label='Fields' }

___
### bpCost
{: aria-label='Fields' }
#### integer .bpCost
{: aria-label='Fields' }

___
### computerLevel
{: aria-label='Fields' }
#### integer .computerLevel
{: aria-label='Fields' }

___
### damagedLastFrame
{: aria-label='Fields' }
#### boolean .damagedLastFrame
{: aria-label='Fields' }
I don't know if this can be set to true per-frame to hold the damage over time progression counter, it might be able to freeze the graphic so it doesn't count down.

___
### extend (Read-only)
{: aria-label='Fields' }
#### [ShipSystem_Extend](../Hyperspace/ShipSystem_Extend) .extend
{: aria-label='Fields' }
**Since 1.4.0**

___
### fDamage
{: aria-label='Fields' }
#### number .fDamage
{: aria-label='Fields' }

___
### fDamageOverTime
{: aria-label='Fields' }
#### number .fDamageOverTime
{: aria-label='Fields' }

___
### fMaxDamage
{: aria-label='Fields' }
#### number .fMaxDamage
{: aria-label='Fields' }

___
### fRepairOverTime
{: aria-label='Fields' }
#### number .fRepairOverTime
{: aria-label='Fields' }

___
### flashTracker
{: aria-label='Fields' }
#### [AnimationTracker](../Hyperspace/AnimationTracker) .flashTracker
{: aria-label='Fields' }

___
### healthState
{: aria-label='Fields' }
#### pair\<integer, integer\> .healthState
{: aria-label='Fields' }

___
### iActiveManned
{: aria-label='Fields' }
#### integer .iActiveManned
{: aria-label='Fields' }

___
### iBatteryPower
{: aria-label='Fields' }
#### integer .iBatteryPower
{: aria-label='Fields' }

___
### iBonusPower
{: aria-label='Fields' }
#### integer .iBonusPower
{: aria-label='Fields' }

___
### iHackEffect
{: aria-label='Fields' }
#### integer .iHackEffect
{: aria-label='Fields' }

___
### iLastBonusPower
{: aria-label='Fields' }
#### integer .iLastBonusPower
{: aria-label='Fields' }

___
### iLockCount
{: aria-label='Fields' }
#### integer .iLockCount
{: aria-label='Fields' }

___
### iRepairCount
{: aria-label='Fields' }
#### integer .iRepairCount
{: aria-label='Fields' }

___
### iRequiredPower
{: aria-label='Fields' }
#### integer .iRequiredPower
{: aria-label='Fields' }

___
### iSystemType
{: aria-label='Fields' }
#### integer .iSystemType
{: aria-label='Fields' }

___
### iTempDividePower
{: aria-label='Fields' }
#### integer .iTempDividePower
{: aria-label='Fields' }

___
### iTempPowerCap
{: aria-label='Fields' }
#### integer .iTempPowerCap
{: aria-label='Fields' }

___
### iTempPowerLoss
{: aria-label='Fields' }
#### integer .iTempPowerLoss
{: aria-label='Fields' }

___
### interiorImage
{: aria-label='Fields' }
#### [GL_Primitive](../Graphics/GL_Primitive) .interiorImage
{: aria-label='Fields' }

___
### interiorImageManned
{: aria-label='Fields' }
#### [GL_Primitive](../Graphics/GL_Primitive) .interiorImageManned
{: aria-label='Fields' }

___
### interiorImageMannedFancy
{: aria-label='Fields' }
#### [GL_Primitive](../Graphics/GL_Primitive) .interiorImageMannedFancy
{: aria-label='Fields' }

___
### interiorImageName
{: aria-label='Fields' }
#### string .interiorImageName
{: aria-label='Fields' }

___
### interiorImageOn
{: aria-label='Fields' }
#### [GL_Primitive](../Graphics/GL_Primitive) .interiorImageOn
{: aria-label='Fields' }

___
### lastUserPower
{: aria-label='Fields' }
#### integer .lastUserPower
{: aria-label='Fields' }

___
### location
{: aria-label='Fields' }
#### [Pointf](../Hyperspace/Pointf) .location
{: aria-label='Fields' }

___
### lockTimer
{: aria-label='Fields' }
#### [TimerHelper](../Hyperspace/TimerHelper) .lockTimer
{: aria-label='Fields' }

___
### maxLevel
{: aria-label='Fields' }
#### integer .maxLevel
{: aria-label='Fields' }

___
### name
{: aria-label='Fields' }
#### string .name
{: aria-label='Fields' }

___
### originalPower
{: aria-label='Fields' }
#### integer .originalPower
{: aria-label='Fields' }

___
### pLoc
{: aria-label='Fields' }
#### [Point](../Hyperspace/Point) .pLoc
{: aria-label='Fields' }

___
### powerState
{: aria-label='Fields' }
#### pair\<integer, integer\> .powerState
{: aria-label='Fields' }

___
### repairedLastFrame
{: aria-label='Fields' }
#### boolean .repairedLastFrame
{: aria-label='Fields' }
I don't know if this can be set to true per-frame to hold the repair over time progression counter, it might be able to freeze the graphic so it doesn't count down.

___
### roomId
{: aria-label='Fields' }
#### integer .roomId
{: aria-label='Fields' }

___
