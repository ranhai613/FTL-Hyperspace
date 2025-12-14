---
layout: lua
title: CloneSystem
lang: en
category: Class
---

# Class "CloneSystem"


Extends: [ShipSystem](../Hyperspace/ShipSystem)

<!-- Head content to be pulled from "lua-source-parts-inject/Hyperspace/CloneSystem/_head.md" -->




## Static Methods
{: #Static-Methods .lua-content-section}
___
<details markdown="1"><summary id="InheritedStaticMethods" class="lua-content-item" markdown="span">Inherited Static Methods</summary>


#### From [ShipSystem](ShipSystem)

| Return Type | Method |
| --- | --- |
| string | .[GetLevelDescription](ShipSystem#GetLevelDescription) (integer systemId, integer level, boolean tooltip) |
| boolean | .[IsSubsystem](ShipSystem#IsSubsystem) (integer systemType) |
| integer | .[NameToSystemId](ShipSystem#NameToSystemId) (string name) |
| string | .[SystemIdToName](ShipSystem#SystemIdToName) (integer systemId) |

</details>




## Methods
{: #Methods .lua-content-section}
___
<details markdown="1"><summary id="InheritedMethods" class="lua-content-item" markdown="span">Inherited Methods</summary>


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




## Fields
{: #Fields .lua-content-section}
<details markdown="1"><summary id="InheritedFields" class="lua-content-item" markdown="span">Inherited Fields</summary>


#### From [ShipSystem](ShipSystem)

| Type | Field |
| --- | --- |
| [ShipObject](../Hyperspace/ShipObject) | .[_shipObj](ShipSystem#_shipObj) |
| boolean | .[bBoostable](ShipSystem#bBoostable) |
| boolean | .[bBreached](ShipSystem#bBreached) |
| boolean | .[bExploded](ShipSystem#bExploded) |
| boolean | .[bFriendlies](ShipSystem#bFriendlies) |
| boolean | .[bLevelBoostable](ShipSystem#bLevelBoostable) |
| boolean | .[bManned](ShipSystem#bManned) |
| boolean | .[bNeedsManned](ShipSystem#bNeedsManned) |
| boolean | .[bNeedsPower](ShipSystem#bNeedsPower) |
| boolean | .[bOccupied](ShipSystem#bOccupied) |
| boolean | .[bOnFire](ShipSystem#bOnFire) |
| boolean | .[bTriggerIon](ShipSystem#bTriggerIon) |
| boolean | .[bUnderAttack](ShipSystem#bUnderAttack) |
| integer | .[bpCost](ShipSystem#bpCost) |
| integer | .[computerLevel](ShipSystem#computerLevel) |
| boolean | .[damagedLastFrame](ShipSystem#damagedLastFrame) |
| [ShipSystem_Extend](../Hyperspace/ShipSystem_Extend) | .[extend](ShipSystem#extend) |
| number | .[fDamage](ShipSystem#fDamage) |
| number | .[fDamageOverTime](ShipSystem#fDamageOverTime) |
| number | .[fMaxDamage](ShipSystem#fMaxDamage) |
| number | .[fRepairOverTime](ShipSystem#fRepairOverTime) |
| [AnimationTracker](../Hyperspace/AnimationTracker) | .[flashTracker](ShipSystem#flashTracker) |
| pair\<integer, integer\> | .[healthState](ShipSystem#healthState) |
| integer | .[iActiveManned](ShipSystem#iActiveManned) |
| integer | .[iBatteryPower](ShipSystem#iBatteryPower) |
| integer | .[iBonusPower](ShipSystem#iBonusPower) |
| integer | .[iHackEffect](ShipSystem#iHackEffect) |
| integer | .[iLastBonusPower](ShipSystem#iLastBonusPower) |
| integer | .[iLockCount](ShipSystem#iLockCount) |
| integer | .[iRepairCount](ShipSystem#iRepairCount) |
| integer | .[iRequiredPower](ShipSystem#iRequiredPower) |
| integer | .[iSystemType](ShipSystem#iSystemType) |
| integer | .[iTempDividePower](ShipSystem#iTempDividePower) |
| integer | .[iTempPowerCap](ShipSystem#iTempPowerCap) |
| integer | .[iTempPowerLoss](ShipSystem#iTempPowerLoss) |
| [GL_Primitive](../Graphics/GL_Primitive) | .[interiorImage](ShipSystem#interiorImage) |
| [GL_Primitive](../Graphics/GL_Primitive) | .[interiorImageManned](ShipSystem#interiorImageManned) |
| [GL_Primitive](../Graphics/GL_Primitive) | .[interiorImageMannedFancy](ShipSystem#interiorImageMannedFancy) |
| string | .[interiorImageName](ShipSystem#interiorImageName) |
| [GL_Primitive](../Graphics/GL_Primitive) | .[interiorImageOn](ShipSystem#interiorImageOn) |
| integer | .[lastUserPower](ShipSystem#lastUserPower) |
| [Pointf](../Hyperspace/Pointf) | .[location](ShipSystem#location) |
| [TimerHelper](../Hyperspace/TimerHelper) | .[lockTimer](ShipSystem#lockTimer) |
| integer | .[maxLevel](ShipSystem#maxLevel) |
| string | .[name](ShipSystem#name) |
| integer | .[originalPower](ShipSystem#originalPower) |
| [Point](../Hyperspace/Point) | .[pLoc](ShipSystem#pLoc) |
| pair\<integer, integer\> | .[powerState](ShipSystem#powerState) |
| boolean | .[repairedLastFrame](ShipSystem#repairedLastFrame) |
| integer | .[roomId](ShipSystem#roomId) |
| table | .[table](ShipSystem#table) |

</details>

___
### bottom
{: #bottom .lua-content-item aria-label='Fields' }
#### [GL_Texture](../Graphics/GL_Texture) .bottom
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/CloneSystem/bottom.md" -->

___
### clone
{: #clone .lua-content-item aria-label='Fields' }
#### [CrewMember](../Hyperspace/CrewMember) .clone
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/CloneSystem/clone.md" -->

___
### fDeathTime
{: #fDeathTime .lua-content-item aria-label='Fields' }
#### number .fDeathTime
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/CloneSystem/fDeathTime.md" -->

___
### fTimeGoal
{: #fTimeGoal .lua-content-item aria-label='Fields' }
#### number .fTimeGoal
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/CloneSystem/fTimeGoal.md" -->

___
### fTimeToClone
{: #fTimeToClone .lua-content-item aria-label='Fields' }
#### number .fTimeToClone
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/CloneSystem/fTimeToClone.md" -->

___
### gas
{: #gas .lua-content-item aria-label='Fields' }
#### [GL_Texture](../Graphics/GL_Texture) .gas
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/CloneSystem/gas.md" -->

___
### slot
{: #slot .lua-content-item aria-label='Fields' }
#### integer .slot
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/CloneSystem/slot.md" -->

___
### top
{: #top .lua-content-item aria-label='Fields' }
#### [GL_Texture](../Graphics/GL_Texture) .top
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/CloneSystem/top.md" -->

___
