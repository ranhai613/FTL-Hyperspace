---
layout: lua
title: OxygenSystem
lang: en
---

# Class "OxygenSystem"


Extends: [ShipSystem](../Hyperspace/ShipSystem)


## Constructors
{: #Constructors .section}
### OxygenSystem ()
{: #OxygenSystem aria-label='Constructors' }
#### [OxygenSystem](../Hyperspace/OxygenSystem) OxygenSystem (integer numRooms, integer roomId, integer shipId, integer startingPower)
{: aria-label='Constructors' }

___




## Methods
{: #Methods .section}
<details markdown="1"><summary markdown="span">Inherited Methods</summary>


#### From [ShipSystem](ShipSystem)

| Return Type | Method |
| --- | --- |
| void | :[AddDamage](ShipSystem#AddDamage) (integer amount) |
| void | :[AddLock](ShipSystem#AddLock) (integer lock) |
| boolean | :[CanBeSabotaged](ShipSystem#CanBeSabotaged) () |
| void | :[CheckForRepower](ShipSystem#CheckForRepower) () |
| void | :[CheckMaxPower](ShipSystem#CheckMaxPower) () |
| void | :[ClearStatus](ShipSystem#ClearStatus) () |
| boolean | :[Clickable](ShipSystem#Clickable) () |
| boolean | :[CompletelyDestroyed](ShipSystem#CompletelyDestroyed) () |
| boolean | :[DamageOverTime](ShipSystem#DamageOverTime) (number unk) |
| boolean | :[DecreasePower](ShipSystem#DecreasePower) (boolean force) |
| void | :[ForceBatteryPower](ShipSystem#ForceBatteryPower) (integer power) |
| boolean | :[ForceDecreasePower](ShipSystem#ForceDecreasePower) (integer powerLoss) |
| boolean | :[ForceIncreasePower](ShipSystem#ForceIncreasePower) (integer power) |
| boolean | :[Functioning](ShipSystem#Functioning) () |
| number | :[GetDamage](ShipSystem#GetDamage) () |
| integer | :[GetEffectivePower](ShipSystem#GetEffectivePower) () |
| integer | :[GetId](ShipSystem#GetId) () |
| boolean | :[GetLocked](ShipSystem#GetLocked) () |
| integer | :[GetMaxPower](ShipSystem#GetMaxPower) () |
| boolean | :[GetNeedsPower](ShipSystem#GetNeedsPower) () |
| integer | :[GetPowerCap](ShipSystem#GetPowerCap) () |
| integer | :[GetRoomId](ShipSystem#GetRoomId) () |
| integer | :[GetSelected](ShipSystem#GetSelected) () |
| boolean | :[IncreasePower](ShipSystem#IncreasePower) (integer amount, boolean force) |
| void | :[IonDamage](ShipSystem#IonDamage) (integer amount) |
| boolean | :[Ioned](ShipSystem#Ioned) () |
| boolean | :[Ioned](ShipSystem#Ioned) (integer num) |
| integer | :[IsMannedBoost](ShipSystem#IsMannedBoost) () |
| boolean | :[IsRoomBased](ShipSystem#IsRoomBased) () |
| void | :[LockSystem](ShipSystem#LockSystem) (integer lock) |
| boolean | :[NeedsRepairing](ShipSystem#NeedsRepairing) () |
| boolean | :[PartialDamage](ShipSystem#PartialDamage) (number amount) |
| boolean | :[PartialRepair](ShipSystem#PartialRepair) (number speed, boolean autoRepair) |
| boolean | :[Powered](ShipSystem#Powered) () |
| void | :[RemoveBatteryPower](ShipSystem#RemoveBatteryPower) () |
| void | :[Repair](ShipSystem#Repair) () |
| void | :[SetBonusPower](ShipSystem#SetBonusPower) (integer amount, integer permanentPower) |
| void | :[SetDamage](ShipSystem#SetDamage) (number damage) |
| void | :[SetHackingLevel](ShipSystem#SetHackingLevel) (integer hackingLevel) |
| void | :[SetLocation](ShipSystem#SetLocation) ([Point](../Hyperspace/Point) pos) |
| void | :[SetMaxDamage](ShipSystem#SetMaxDamage) (number maxDamage) |
| void | :[SetName](ShipSystem#SetName) (string name) |
| void | :[SetPowerCap](ShipSystem#SetPowerCap) (integer cap) |
| integer | :[SetPowerLoss](ShipSystem#SetPowerLoss) (integer power) |
| void | :[SetRoomId](ShipSystem#SetRoomId) () |
| void | :[SetSelected](ShipSystem#SetSelected) (integer selectedState) |
| void | :[StopHacking](ShipSystem#StopHacking) () |
| boolean | :[UpgradeSystem](ShipSystem#UpgradeSystem) (integer amount) |

</details>
___
### EmptyOxygen ()
{: #EmptyOxygen aria-label='Methods' }
#### void :EmptyOxygen (integer roomId)
{: aria-label='Methods' }

___
### GetRefillSpeed ()
{: #GetRefillSpeed aria-label='Methods' }
#### number :GetRefillSpeed ()
{: aria-label='Methods' }

___
### ModifyRoomOxygen ()
{: #ModifyRoomOxygen aria-label='Methods' }
#### void :ModifyRoomOxygen (integer roomId, number value)
{: aria-label='Methods' }

___


## Fields
{: #Fields .section}
<details markdown="1"><summary markdown="span">Inherited Fields</summary>


#### From [ShipSystem](ShipSystem)

| Type | Field |
| --- | --- |
| [ShipObject](../Hyperspace/ShipObject) | .[_shipObj](ShipSystem#_shipObj-) |
| boolean | .[bBoostable](ShipSystem#bBoostable-) |
| boolean | .[bBreached](ShipSystem#bBreached-) |
| boolean | .[bExploded](ShipSystem#bExploded-) |
| boolean | .[bFriendlies](ShipSystem#bFriendlies-) |
| boolean | .[bLevelBoostable](ShipSystem#bLevelBoostable-) |
| boolean | .[bManned](ShipSystem#bManned-) |
| boolean | .[bNeedsManned](ShipSystem#bNeedsManned-) |
| boolean | .[bNeedsPower](ShipSystem#bNeedsPower-) |
| boolean | .[bOccupied](ShipSystem#bOccupied-) |
| boolean | .[bOnFire](ShipSystem#bOnFire-) |
| boolean | .[bTriggerIon](ShipSystem#bTriggerIon-) |
| boolean | .[bUnderAttack](ShipSystem#bUnderAttack-) |
| integer | .[bpCost](ShipSystem#bpCost-) |
| integer | .[computerLevel](ShipSystem#computerLevel-) |
| boolean | .[damagedLastFrame](ShipSystem#damagedLastFrame-) |
| [ShipSystem_Extend](../Hyperspace/ShipSystem_Extend) | .[extend](ShipSystem#extend-) |
| number | .[fDamage](ShipSystem#fDamage-) |
| number | .[fDamageOverTime](ShipSystem#fDamageOverTime-) |
| number | .[fMaxDamage](ShipSystem#fMaxDamage-) |
| number | .[fRepairOverTime](ShipSystem#fRepairOverTime-) |
| [AnimationTracker](../Hyperspace/AnimationTracker) | .[flashTracker](ShipSystem#flashTracker-) |
| pair\<integer, integer\> | .[healthState](ShipSystem#healthState-) |
| integer | .[iActiveManned](ShipSystem#iActiveManned-) |
| integer | .[iBatteryPower](ShipSystem#iBatteryPower-) |
| integer | .[iBonusPower](ShipSystem#iBonusPower-) |
| integer | .[iHackEffect](ShipSystem#iHackEffect-) |
| integer | .[iLastBonusPower](ShipSystem#iLastBonusPower-) |
| integer | .[iLockCount](ShipSystem#iLockCount-) |
| integer | .[iRepairCount](ShipSystem#iRepairCount-) |
| integer | .[iRequiredPower](ShipSystem#iRequiredPower-) |
| integer | .[iSystemType](ShipSystem#iSystemType-) |
| integer | .[iTempDividePower](ShipSystem#iTempDividePower-) |
| integer | .[iTempPowerCap](ShipSystem#iTempPowerCap-) |
| integer | .[iTempPowerLoss](ShipSystem#iTempPowerLoss-) |
| [GL_Primitive](../Graphics/GL_Primitive) | .[interiorImage](ShipSystem#interiorImage-) |
| [GL_Primitive](../Graphics/GL_Primitive) | .[interiorImageManned](ShipSystem#interiorImageManned-) |
| [GL_Primitive](../Graphics/GL_Primitive) | .[interiorImageMannedFancy](ShipSystem#interiorImageMannedFancy-) |
| string | .[interiorImageName](ShipSystem#interiorImageName-) |
| [GL_Primitive](../Graphics/GL_Primitive) | .[interiorImageOn](ShipSystem#interiorImageOn-) |
| integer | .[lastUserPower](ShipSystem#lastUserPower-) |
| [Pointf](../Hyperspace/Pointf) | .[location](ShipSystem#location-) |
| [TimerHelper](../Hyperspace/TimerHelper) | .[lockTimer](ShipSystem#lockTimer-) |
| integer | .[maxLevel](ShipSystem#maxLevel-) |
| string | .[name](ShipSystem#name-) |
| integer | .[originalPower](ShipSystem#originalPower-) |
| [Point](../Hyperspace/Point) | .[pLoc](ShipSystem#pLoc-) |
| pair\<integer, integer\> | .[powerState](ShipSystem#powerState-) |
| boolean | .[repairedLastFrame](ShipSystem#repairedLastFrame-) |
| integer | .[roomId](ShipSystem#roomId-) |

</details>
___
### bLeakingO2 (Read-only)
{: #bLeakingO2 aria-label='Fields' }
#### boolean .bLeakingO2
{: aria-label='Fields' }

___
### fTotalOxygen
{: #fTotalOxygen aria-label='Fields' }
#### number .fTotalOxygen
{: aria-label='Fields' }

___
### leakModifier (Read-only)
{: #leakModifier aria-label='Fields' }
#### number .leakModifier
{: aria-label='Fields' }
**Read-only**
A multiplier to the rate at which airlocks and breaches drain oxygen.
Can be changed with `CALCULATE_LEAK_MODIFIER` callback.

___
### max_oxygen
{: #max_oxygen aria-label='Fields' }
#### number .max_oxygen
{: aria-label='Fields' }

___
### oxygenLevels
{: #oxygenLevels aria-label='Fields' }
#### vector\<number\> .oxygenLevels
{: aria-label='Fields' }

___
