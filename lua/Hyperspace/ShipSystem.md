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
{: aria-label='StaticFunctions' }
#### string .GetLevelDescription (integer systemId, integer level, boolean tooltip)
{: aria-label='StaticFunctions' }

______
### IsSubsystem ()
{: aria-label='StaticFunctions' }
#### boolean .IsSubsystem (integer systemType)
{: aria-label='StaticFunctions' }

______
### NameToSystemId ()
{: aria-label='StaticFunctions' }
#### integer .NameToSystemId (string name)
{: aria-label='StaticFunctions' }

______
### SystemIdToName ()
{: aria-label='StaticFunctions' }
#### string .SystemIdToName (integer systemId)
{: aria-label='StaticFunctions' }

___


## Methods
### AddDamage ()
{: aria-label='Functions' }
#### void :AddDamage (integer amount)
{: aria-label='Functions' }

______
### AddLock ()
{: aria-label='Functions' }
#### void :AddLock (integer lock)
{: aria-label='Functions' }

______
### CanBeSabotaged ()
{: aria-label='Functions' }
#### boolean :CanBeSabotaged ()
{: aria-label='Functions' }

______
### CheckForRepower ()
{: aria-label='Functions' }
#### void :CheckForRepower ()
{: aria-label='Functions' }

______
### CheckMaxPower ()
{: aria-label='Functions' }
#### void :CheckMaxPower ()
{: aria-label='Functions' }

______
### ClearStatus ()
{: aria-label='Functions' }
#### void :ClearStatus ()
{: aria-label='Functions' }

______
### Clickable ()
{: aria-label='Functions' }
#### boolean :Clickable ()
{: aria-label='Functions' }

______
### CompletelyDestroyed ()
{: aria-label='Functions' }
#### boolean :CompletelyDestroyed ()
{: aria-label='Functions' }

______
### DamageOverTime ()
{: aria-label='Functions' }
#### boolean :DamageOverTime (number unk)
{: aria-label='Functions' }

______
### DecreasePower ()
{: aria-label='Functions' }
#### boolean :DecreasePower (boolean force)
{: aria-label='Functions' }

______
### ForceBatteryPower ()
{: aria-label='Functions' }
#### void :ForceBatteryPower (integer power)
{: aria-label='Functions' }

______
### ForceDecreasePower ()
{: aria-label='Functions' }
#### boolean :ForceDecreasePower (integer powerLoss)
{: aria-label='Functions' }

______
### ForceIncreasePower ()
{: aria-label='Functions' }
#### boolean :ForceIncreasePower (integer power)
{: aria-label='Functions' }

______
### Functioning ()
{: aria-label='Functions' }
#### boolean :Functioning ()
{: aria-label='Functions' }

______
### GetDamage ()
{: aria-label='Functions' }
#### number :GetDamage ()
{: aria-label='Functions' }

______
### GetEffectivePower ()
{: aria-label='Functions' }
#### integer :GetEffectivePower ()
{: aria-label='Functions' }

______
### GetId ()
{: aria-label='Functions' }
#### integer :GetId ()
{: aria-label='Functions' }

______
### GetLocked ()
{: aria-label='Functions' }
#### boolean :GetLocked ()
{: aria-label='Functions' }

______
### GetMaxPower ()
{: aria-label='Functions' }
#### integer :GetMaxPower ()
{: aria-label='Functions' }

______
### GetNeedsPower ()
{: aria-label='Functions' }
#### boolean :GetNeedsPower ()
{: aria-label='Functions' }

______
### GetPowerCap ()
{: aria-label='Functions' }
#### integer :GetPowerCap ()
{: aria-label='Functions' }

______
### GetRoomId ()
{: aria-label='Functions' }
#### integer :GetRoomId ()
{: aria-label='Functions' }

______
### GetSelected ()
{: aria-label='Functions' }
#### integer :GetSelected ()
{: aria-label='Functions' }

______
### IncreasePower ()
{: aria-label='Functions' }
#### boolean :IncreasePower (integer amount, boolean force)
{: aria-label='Functions' }

______
### IonDamage ()
{: aria-label='Functions' }
#### void :IonDamage (integer amount)
{: aria-label='Functions' }

______
### Ioned ()
{: aria-label='Functions' }
#### boolean :Ioned ()
{: aria-label='Functions' }

______
### Ioned ()
{: aria-label='Functions' }
#### boolean :Ioned (integer num)
{: aria-label='Functions' }

______
### IsMannedBoost ()
{: aria-label='Functions' }
#### integer :IsMannedBoost ()
{: aria-label='Functions' }

______
### IsRoomBased ()
{: aria-label='Functions' }
#### boolean :IsRoomBased ()
{: aria-label='Functions' }

______
### LockSystem ()
{: aria-label='Functions' }
#### void :LockSystem (integer lock)
{: aria-label='Functions' }

______
### NeedsRepairing ()
{: aria-label='Functions' }
#### boolean :NeedsRepairing ()
{: aria-label='Functions' }

______
### PartialDamage ()
{: aria-label='Functions' }
#### boolean :PartialDamage (number amount)
{: aria-label='Functions' }
Must be called every tick or else you will not see any change

______
### PartialRepair ()
{: aria-label='Functions' }
#### boolean :PartialRepair (number speed, boolean autoRepair)
{: aria-label='Functions' }
Cause a partial repair of a system (opposite of partialDamage) must be called every tick or else you will not see any change

______
### Powered ()
{: aria-label='Functions' }
#### boolean :Powered ()
{: aria-label='Functions' }

______
### RemoveBatteryPower ()
{: aria-label='Functions' }
#### void :RemoveBatteryPower ()
{: aria-label='Functions' }

______
### Repair ()
{: aria-label='Functions' }
#### void :Repair ()
{: aria-label='Functions' }
Not sure if this is a function called every tick to cause repairs or what, probably not useful to lua

______
### SetBonusPower ()
{: aria-label='Functions' }
#### void :SetBonusPower (integer amount, integer permanentPower)
{: aria-label='Functions' }

______
### SetDamage ()
{: aria-label='Functions' }
#### void :SetDamage (number damage)
{: aria-label='Functions' }

______
### SetHackingLevel ()
{: aria-label='Functions' }
#### void :SetHackingLevel (integer hackingLevel)
{: aria-label='Functions' }

______
### SetLocation ()
{: aria-label='Functions' }
#### void :SetLocation ([Point](../Hyperspace/Point) pos)
{: aria-label='Functions' }

______
### SetMaxDamage ()
{: aria-label='Functions' }
#### void :SetMaxDamage (number maxDamage)
{: aria-label='Functions' }

______
### SetName ()
{: aria-label='Functions' }
#### void :SetName (string name)
{: aria-label='Functions' }

______
### SetPowerCap ()
{: aria-label='Functions' }
#### void :SetPowerCap (integer cap)
{: aria-label='Functions' }

______
### SetPowerLoss ()
{: aria-label='Functions' }
#### integer :SetPowerLoss (integer power)
{: aria-label='Functions' }

______
### SetRoomId ()
{: aria-label='Functions' }
#### void :SetRoomId ()
{: aria-label='Functions' }

______
### SetSelected ()
{: aria-label='Functions' }
#### void :SetSelected (integer selectedState)
{: aria-label='Functions' }

______
### StopHacking ()
{: aria-label='Functions' }
#### void :StopHacking ()
{: aria-label='Functions' }

______
### UpgradeSystem ()
{: aria-label='Functions' }
#### boolean :UpgradeSystem (integer amount)
{: aria-label='Functions' }
Upgrading a system is basically the same as changing the max power of a system although I think max power might reset after a jump? Not sure haven't tested.
I think negative upgrades (downgrades) are allowed, please report if they are not.

___


## Fields
### _shipObj
{: aria-label='Variables' }
#### [ShipObject](../Hyperspace/ShipObject) ._shipObj
{: aria-label='Variables' }

______
### bBoostable
{: aria-label='Variables' }
#### boolean .bBoostable
{: aria-label='Variables' }
If the system can be manned by a crewmember.

______
### bBreached
{: aria-label='Variables' }
#### boolean .bBreached
{: aria-label='Variables' }

______
### bExploded
{: aria-label='Variables' }
#### boolean .bExploded
{: aria-label='Variables' }

______
### bFriendlies
{: aria-label='Variables' }
#### boolean .bFriendlies
{: aria-label='Variables' }

______
### bLevelBoostable
{: aria-label='Variables' }
#### boolean .bLevelBoostable
{: aria-label='Variables' }
If the system is given an additional level when manned by a crewmember (e.g. doors, sensors).

______
### bManned
{: aria-label='Variables' }
#### boolean .bManned
{: aria-label='Variables' }

______
### bNeedsManned
{: aria-label='Variables' }
#### boolean .bNeedsManned
{: aria-label='Variables' }
If the system requires manning to function.

______
### bNeedsPower
{: aria-label='Variables' }
#### boolean .bNeedsPower
{: aria-label='Variables' }
True for regular systems, false for subsystems.

______
### bOccupied
{: aria-label='Variables' }
#### boolean .bOccupied
{: aria-label='Variables' }

______
### bOnFire
{: aria-label='Variables' }
#### boolean .bOnFire
{: aria-label='Variables' }

______
### bTriggerIon
{: aria-label='Variables' }
#### boolean .bTriggerIon
{: aria-label='Variables' }

______
### bUnderAttack
{: aria-label='Variables' }
#### boolean .bUnderAttack
{: aria-label='Variables' }

______
### bpCost
{: aria-label='Variables' }
#### integer .bpCost
{: aria-label='Variables' }

______
### computerLevel
{: aria-label='Variables' }
#### integer .computerLevel
{: aria-label='Variables' }

______
### damagedLastFrame
{: aria-label='Variables' }
#### boolean .damagedLastFrame
{: aria-label='Variables' }
I don't know if this can be set to true per-frame to hold the damage over time progression counter, it might be able to freeze the graphic so it doesn't count down.

______
### extend (Read-only)
{: aria-label='Variables' }
#### [ShipSystem_Extend](../Hyperspace/ShipSystem_Extend) .extend
{: aria-label='Variables' }
**Since 1.4.0**

______
### fDamage
{: aria-label='Variables' }
#### number .fDamage
{: aria-label='Variables' }

______
### fDamageOverTime
{: aria-label='Variables' }
#### number .fDamageOverTime
{: aria-label='Variables' }

______
### fMaxDamage
{: aria-label='Variables' }
#### number .fMaxDamage
{: aria-label='Variables' }

______
### fRepairOverTime
{: aria-label='Variables' }
#### number .fRepairOverTime
{: aria-label='Variables' }

______
### flashTracker
{: aria-label='Variables' }
#### [AnimationTracker](../Hyperspace/AnimationTracker) .flashTracker
{: aria-label='Variables' }

______
### healthState
{: aria-label='Variables' }
#### pair\<integer, integer\> .healthState
{: aria-label='Variables' }

______
### iActiveManned
{: aria-label='Variables' }
#### integer .iActiveManned
{: aria-label='Variables' }

______
### iBatteryPower
{: aria-label='Variables' }
#### integer .iBatteryPower
{: aria-label='Variables' }

______
### iBonusPower
{: aria-label='Variables' }
#### integer .iBonusPower
{: aria-label='Variables' }

______
### iHackEffect
{: aria-label='Variables' }
#### integer .iHackEffect
{: aria-label='Variables' }

______
### iLastBonusPower
{: aria-label='Variables' }
#### integer .iLastBonusPower
{: aria-label='Variables' }

______
### iLockCount
{: aria-label='Variables' }
#### integer .iLockCount
{: aria-label='Variables' }

______
### iRepairCount
{: aria-label='Variables' }
#### integer .iRepairCount
{: aria-label='Variables' }

______
### iRequiredPower
{: aria-label='Variables' }
#### integer .iRequiredPower
{: aria-label='Variables' }

______
### iSystemType
{: aria-label='Variables' }
#### integer .iSystemType
{: aria-label='Variables' }

______
### iTempDividePower
{: aria-label='Variables' }
#### integer .iTempDividePower
{: aria-label='Variables' }

______
### iTempPowerCap
{: aria-label='Variables' }
#### integer .iTempPowerCap
{: aria-label='Variables' }

______
### iTempPowerLoss
{: aria-label='Variables' }
#### integer .iTempPowerLoss
{: aria-label='Variables' }

______
### interiorImage
{: aria-label='Variables' }
#### [GL_Primitive](../Graphics/GL_Primitive) .interiorImage
{: aria-label='Variables' }

______
### interiorImageManned
{: aria-label='Variables' }
#### [GL_Primitive](../Graphics/GL_Primitive) .interiorImageManned
{: aria-label='Variables' }

______
### interiorImageMannedFancy
{: aria-label='Variables' }
#### [GL_Primitive](../Graphics/GL_Primitive) .interiorImageMannedFancy
{: aria-label='Variables' }

______
### interiorImageName
{: aria-label='Variables' }
#### string .interiorImageName
{: aria-label='Variables' }

______
### interiorImageOn
{: aria-label='Variables' }
#### [GL_Primitive](../Graphics/GL_Primitive) .interiorImageOn
{: aria-label='Variables' }

______
### lastUserPower
{: aria-label='Variables' }
#### integer .lastUserPower
{: aria-label='Variables' }

______
### location
{: aria-label='Variables' }
#### [Pointf](../Hyperspace/Pointf) .location
{: aria-label='Variables' }

______
### lockTimer
{: aria-label='Variables' }
#### [TimerHelper](../Hyperspace/TimerHelper) .lockTimer
{: aria-label='Variables' }

______
### maxLevel
{: aria-label='Variables' }
#### integer .maxLevel
{: aria-label='Variables' }

______
### name
{: aria-label='Variables' }
#### string .name
{: aria-label='Variables' }

______
### originalPower
{: aria-label='Variables' }
#### integer .originalPower
{: aria-label='Variables' }

______
### pLoc
{: aria-label='Variables' }
#### [Point](../Hyperspace/Point) .pLoc
{: aria-label='Variables' }

______
### powerState
{: aria-label='Variables' }
#### pair\<integer, integer\> .powerState
{: aria-label='Variables' }

______
### repairedLastFrame
{: aria-label='Variables' }
#### boolean .repairedLastFrame
{: aria-label='Variables' }
I don't know if this can be set to true per-frame to hold the repair over time progression counter, it might be able to freeze the graphic so it doesn't count down.

______
### roomId
{: aria-label='Variables' }
#### integer .roomId
{: aria-label='Variables' }

___
