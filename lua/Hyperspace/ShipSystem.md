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

______
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

______
### IsSubsystem ()
{: aria-label='StaticMethods' }
#### boolean .IsSubsystem (integer systemType)
{: aria-label='StaticMethods' }

______
### NameToSystemId ()
{: aria-label='StaticMethods' }
#### integer .NameToSystemId (string name)
{: aria-label='StaticMethods' }

______
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

______
### AddLock ()
{: aria-label='Methods' }
#### void :AddLock (integer lock)
{: aria-label='Methods' }

______
### CanBeSabotaged ()
{: aria-label='Methods' }
#### boolean :CanBeSabotaged ()
{: aria-label='Methods' }

______
### CheckForRepower ()
{: aria-label='Methods' }
#### void :CheckForRepower ()
{: aria-label='Methods' }

______
### CheckMaxPower ()
{: aria-label='Methods' }
#### void :CheckMaxPower ()
{: aria-label='Methods' }

______
### ClearStatus ()
{: aria-label='Methods' }
#### void :ClearStatus ()
{: aria-label='Methods' }

______
### Clickable ()
{: aria-label='Methods' }
#### boolean :Clickable ()
{: aria-label='Methods' }

______
### CompletelyDestroyed ()
{: aria-label='Methods' }
#### boolean :CompletelyDestroyed ()
{: aria-label='Methods' }

______
### DamageOverTime ()
{: aria-label='Methods' }
#### boolean :DamageOverTime (number unk)
{: aria-label='Methods' }

______
### DecreasePower ()
{: aria-label='Methods' }
#### boolean :DecreasePower (boolean force)
{: aria-label='Methods' }

______
### ForceBatteryPower ()
{: aria-label='Methods' }
#### void :ForceBatteryPower (integer power)
{: aria-label='Methods' }

______
### ForceDecreasePower ()
{: aria-label='Methods' }
#### boolean :ForceDecreasePower (integer powerLoss)
{: aria-label='Methods' }

______
### ForceIncreasePower ()
{: aria-label='Methods' }
#### boolean :ForceIncreasePower (integer power)
{: aria-label='Methods' }

______
### Functioning ()
{: aria-label='Methods' }
#### boolean :Functioning ()
{: aria-label='Methods' }

______
### GetDamage ()
{: aria-label='Methods' }
#### number :GetDamage ()
{: aria-label='Methods' }

______
### GetEffectivePower ()
{: aria-label='Methods' }
#### integer :GetEffectivePower ()
{: aria-label='Methods' }

______
### GetId ()
{: aria-label='Methods' }
#### integer :GetId ()
{: aria-label='Methods' }

______
### GetLocked ()
{: aria-label='Methods' }
#### boolean :GetLocked ()
{: aria-label='Methods' }

______
### GetMaxPower ()
{: aria-label='Methods' }
#### integer :GetMaxPower ()
{: aria-label='Methods' }

______
### GetNeedsPower ()
{: aria-label='Methods' }
#### boolean :GetNeedsPower ()
{: aria-label='Methods' }

______
### GetPowerCap ()
{: aria-label='Methods' }
#### integer :GetPowerCap ()
{: aria-label='Methods' }

______
### GetRoomId ()
{: aria-label='Methods' }
#### integer :GetRoomId ()
{: aria-label='Methods' }

______
### GetSelected ()
{: aria-label='Methods' }
#### integer :GetSelected ()
{: aria-label='Methods' }

______
### IncreasePower ()
{: aria-label='Methods' }
#### boolean :IncreasePower (integer amount, boolean force)
{: aria-label='Methods' }

______
### IonDamage ()
{: aria-label='Methods' }
#### void :IonDamage (integer amount)
{: aria-label='Methods' }

______
### Ioned ()
{: aria-label='Methods' }
#### boolean :Ioned ()
{: aria-label='Methods' }

______
### Ioned ()
{: aria-label='Methods' }
#### boolean :Ioned (integer num)
{: aria-label='Methods' }

______
### IsMannedBoost ()
{: aria-label='Methods' }
#### integer :IsMannedBoost ()
{: aria-label='Methods' }

______
### IsRoomBased ()
{: aria-label='Methods' }
#### boolean :IsRoomBased ()
{: aria-label='Methods' }

______
### LockSystem ()
{: aria-label='Methods' }
#### void :LockSystem (integer lock)
{: aria-label='Methods' }

______
### NeedsRepairing ()
{: aria-label='Methods' }
#### boolean :NeedsRepairing ()
{: aria-label='Methods' }

______
### PartialDamage ()
{: aria-label='Methods' }
#### boolean :PartialDamage (number amount)
{: aria-label='Methods' }
Must be called every tick or else you will not see any change

______
### PartialRepair ()
{: aria-label='Methods' }
#### boolean :PartialRepair (number speed, boolean autoRepair)
{: aria-label='Methods' }
Cause a partial repair of a system (opposite of partialDamage) must be called every tick or else you will not see any change

______
### Powered ()
{: aria-label='Methods' }
#### boolean :Powered ()
{: aria-label='Methods' }

______
### RemoveBatteryPower ()
{: aria-label='Methods' }
#### void :RemoveBatteryPower ()
{: aria-label='Methods' }

______
### Repair ()
{: aria-label='Methods' }
#### void :Repair ()
{: aria-label='Methods' }
Not sure if this is a function called every tick to cause repairs or what, probably not useful to lua

______
### SetBonusPower ()
{: aria-label='Methods' }
#### void :SetBonusPower (integer amount, integer permanentPower)
{: aria-label='Methods' }

______
### SetDamage ()
{: aria-label='Methods' }
#### void :SetDamage (number damage)
{: aria-label='Methods' }

______
### SetHackingLevel ()
{: aria-label='Methods' }
#### void :SetHackingLevel (integer hackingLevel)
{: aria-label='Methods' }

______
### SetLocation ()
{: aria-label='Methods' }
#### void :SetLocation ([Point](../Hyperspace/Point) pos)
{: aria-label='Methods' }

______
### SetMaxDamage ()
{: aria-label='Methods' }
#### void :SetMaxDamage (number maxDamage)
{: aria-label='Methods' }

______
### SetName ()
{: aria-label='Methods' }
#### void :SetName (string name)
{: aria-label='Methods' }

______
### SetPowerCap ()
{: aria-label='Methods' }
#### void :SetPowerCap (integer cap)
{: aria-label='Methods' }

______
### SetPowerLoss ()
{: aria-label='Methods' }
#### integer :SetPowerLoss (integer power)
{: aria-label='Methods' }

______
### SetRoomId ()
{: aria-label='Methods' }
#### void :SetRoomId ()
{: aria-label='Methods' }

______
### SetSelected ()
{: aria-label='Methods' }
#### void :SetSelected (integer selectedState)
{: aria-label='Methods' }

______
### StopHacking ()
{: aria-label='Methods' }
#### void :StopHacking ()
{: aria-label='Methods' }

______
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

______
### bBoostable
{: aria-label='Fields' }
#### boolean .bBoostable
{: aria-label='Fields' }
If the system can be manned by a crewmember.

______
### bBreached
{: aria-label='Fields' }
#### boolean .bBreached
{: aria-label='Fields' }

______
### bExploded
{: aria-label='Fields' }
#### boolean .bExploded
{: aria-label='Fields' }

______
### bFriendlies
{: aria-label='Fields' }
#### boolean .bFriendlies
{: aria-label='Fields' }

______
### bLevelBoostable
{: aria-label='Fields' }
#### boolean .bLevelBoostable
{: aria-label='Fields' }
If the system is given an additional level when manned by a crewmember (e.g. doors, sensors).

______
### bManned
{: aria-label='Fields' }
#### boolean .bManned
{: aria-label='Fields' }

______
### bNeedsManned
{: aria-label='Fields' }
#### boolean .bNeedsManned
{: aria-label='Fields' }
If the system requires manning to function.

______
### bNeedsPower
{: aria-label='Fields' }
#### boolean .bNeedsPower
{: aria-label='Fields' }
True for regular systems, false for subsystems.

______
### bOccupied
{: aria-label='Fields' }
#### boolean .bOccupied
{: aria-label='Fields' }

______
### bOnFire
{: aria-label='Fields' }
#### boolean .bOnFire
{: aria-label='Fields' }

______
### bTriggerIon
{: aria-label='Fields' }
#### boolean .bTriggerIon
{: aria-label='Fields' }

______
### bUnderAttack
{: aria-label='Fields' }
#### boolean .bUnderAttack
{: aria-label='Fields' }

______
### bpCost
{: aria-label='Fields' }
#### integer .bpCost
{: aria-label='Fields' }

______
### computerLevel
{: aria-label='Fields' }
#### integer .computerLevel
{: aria-label='Fields' }

______
### damagedLastFrame
{: aria-label='Fields' }
#### boolean .damagedLastFrame
{: aria-label='Fields' }
I don't know if this can be set to true per-frame to hold the damage over time progression counter, it might be able to freeze the graphic so it doesn't count down.

______
### extend (Read-only)
{: aria-label='Fields' }
#### [ShipSystem_Extend](../Hyperspace/ShipSystem_Extend) .extend
{: aria-label='Fields' }
**Since 1.4.0**

______
### fDamage
{: aria-label='Fields' }
#### number .fDamage
{: aria-label='Fields' }

______
### fDamageOverTime
{: aria-label='Fields' }
#### number .fDamageOverTime
{: aria-label='Fields' }

______
### fMaxDamage
{: aria-label='Fields' }
#### number .fMaxDamage
{: aria-label='Fields' }

______
### fRepairOverTime
{: aria-label='Fields' }
#### number .fRepairOverTime
{: aria-label='Fields' }

______
### flashTracker
{: aria-label='Fields' }
#### [AnimationTracker](../Hyperspace/AnimationTracker) .flashTracker
{: aria-label='Fields' }

______
### healthState
{: aria-label='Fields' }
#### pair\<integer, integer\> .healthState
{: aria-label='Fields' }

______
### iActiveManned
{: aria-label='Fields' }
#### integer .iActiveManned
{: aria-label='Fields' }

______
### iBatteryPower
{: aria-label='Fields' }
#### integer .iBatteryPower
{: aria-label='Fields' }

______
### iBonusPower
{: aria-label='Fields' }
#### integer .iBonusPower
{: aria-label='Fields' }

______
### iHackEffect
{: aria-label='Fields' }
#### integer .iHackEffect
{: aria-label='Fields' }

______
### iLastBonusPower
{: aria-label='Fields' }
#### integer .iLastBonusPower
{: aria-label='Fields' }

______
### iLockCount
{: aria-label='Fields' }
#### integer .iLockCount
{: aria-label='Fields' }

______
### iRepairCount
{: aria-label='Fields' }
#### integer .iRepairCount
{: aria-label='Fields' }

______
### iRequiredPower
{: aria-label='Fields' }
#### integer .iRequiredPower
{: aria-label='Fields' }

______
### iSystemType
{: aria-label='Fields' }
#### integer .iSystemType
{: aria-label='Fields' }

______
### iTempDividePower
{: aria-label='Fields' }
#### integer .iTempDividePower
{: aria-label='Fields' }

______
### iTempPowerCap
{: aria-label='Fields' }
#### integer .iTempPowerCap
{: aria-label='Fields' }

______
### iTempPowerLoss
{: aria-label='Fields' }
#### integer .iTempPowerLoss
{: aria-label='Fields' }

______
### interiorImage
{: aria-label='Fields' }
#### [GL_Primitive](../Graphics/GL_Primitive) .interiorImage
{: aria-label='Fields' }

______
### interiorImageManned
{: aria-label='Fields' }
#### [GL_Primitive](../Graphics/GL_Primitive) .interiorImageManned
{: aria-label='Fields' }

______
### interiorImageMannedFancy
{: aria-label='Fields' }
#### [GL_Primitive](../Graphics/GL_Primitive) .interiorImageMannedFancy
{: aria-label='Fields' }

______
### interiorImageName
{: aria-label='Fields' }
#### string .interiorImageName
{: aria-label='Fields' }

______
### interiorImageOn
{: aria-label='Fields' }
#### [GL_Primitive](../Graphics/GL_Primitive) .interiorImageOn
{: aria-label='Fields' }

______
### lastUserPower
{: aria-label='Fields' }
#### integer .lastUserPower
{: aria-label='Fields' }

______
### location
{: aria-label='Fields' }
#### [Pointf](../Hyperspace/Pointf) .location
{: aria-label='Fields' }

______
### lockTimer
{: aria-label='Fields' }
#### [TimerHelper](../Hyperspace/TimerHelper) .lockTimer
{: aria-label='Fields' }

______
### maxLevel
{: aria-label='Fields' }
#### integer .maxLevel
{: aria-label='Fields' }

______
### name
{: aria-label='Fields' }
#### string .name
{: aria-label='Fields' }

______
### originalPower
{: aria-label='Fields' }
#### integer .originalPower
{: aria-label='Fields' }

______
### pLoc
{: aria-label='Fields' }
#### [Point](../Hyperspace/Point) .pLoc
{: aria-label='Fields' }

______
### powerState
{: aria-label='Fields' }
#### pair\<integer, integer\> .powerState
{: aria-label='Fields' }

______
### repairedLastFrame
{: aria-label='Fields' }
#### boolean .repairedLastFrame
{: aria-label='Fields' }
I don't know if this can be set to true per-frame to hold the repair over time progression counter, it might be able to freeze the graphic so it doesn't count down.

______
### roomId
{: aria-label='Fields' }
#### integer .roomId
{: aria-label='Fields' }

___
