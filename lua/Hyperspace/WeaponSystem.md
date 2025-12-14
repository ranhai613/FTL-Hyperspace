---
layout: lua
title: WeaponSystem
lang: en
category: Class
---

# Class "WeaponSystem"


Extends: [ShipSystem](../Hyperspace/ShipSystem)




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
### ForceIncreasePower ()
{: #ForceIncreasePower .lua-content-item aria-label='Methods' }
#### boolean :ForceIncreasePower (integer amount)
{: aria-label='Methods' }

___
### RemoveWeapon ()
{: #RemoveWeapon .lua-content-item aria-label='Methods' }
#### [ProjectileFactory](../Hyperspace/ProjectileFactory) :RemoveWeapon (integer slot)
{: aria-label='Methods' }

___
### SetBonusPower ()
{: #SetBonusPower .lua-content-item aria-label='Methods' }
#### void :SetBonusPower (integer amount, integer permanentPower)
{: aria-label='Methods' }

___


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
### iStartingBatteryPower
{: #iStartingBatteryPower .lua-content-item aria-label='Fields' }
#### integer .iStartingBatteryPower
{: aria-label='Fields' }

___
### missile_count
{: #missile_count .lua-content-item aria-label='Fields' }
#### integer .missile_count
{: aria-label='Fields' }

___
### missile_start
{: #missile_start .lua-content-item aria-label='Fields' }
#### integer .missile_start
{: aria-label='Fields' }

___
### repowerList
{: #repowerList .lua-content-item aria-label='Fields' }
#### vector\<boolean\> .repowerList
{: aria-label='Fields' }

___
### shot_count
{: #shot_count .lua-content-item aria-label='Fields' }
#### integer .shot_count
{: aria-label='Fields' }

___
### shot_timer
{: #shot_timer .lua-content-item aria-label='Fields' }
#### number .shot_timer
{: aria-label='Fields' }

___
### slot_count
{: #slot_count .lua-content-item aria-label='Fields' }
#### integer .slot_count
{: aria-label='Fields' }

___
### target
{: #target .lua-content-item aria-label='Fields' }
#### [Pointf](../Hyperspace/Pointf) .target
{: aria-label='Fields' }

___
### userPowered
{: #userPowered .lua-content-item aria-label='Fields' }
#### vector\<boolean\> .userPowered
{: aria-label='Fields' }

___
### weapons
{: #weapons .lua-content-item aria-label='Fields' }
#### vector\<[ProjectileFactory](../Hyperspace/ProjectileFactory)\> .weapons
{: aria-label='Fields' }

___
### weaponsTrashList
{: #weaponsTrashList .lua-content-item aria-label='Fields' }
#### vector\<[ProjectileFactory](../Hyperspace/ProjectileFactory)\> .weaponsTrashList
{: aria-label='Fields' }

___
