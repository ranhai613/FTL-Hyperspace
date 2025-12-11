---
layout: lua
title: Shields
lang: en
---

# Class "Shields"


Extends: [ShipSystem](../Hyperspace/ShipSystem)


## Constructors
{: #Constructors .section}
### Shields ()
{: #Shields aria-label='Constructors' }
#### [Shields](../Hyperspace/Shields) Shields (integer roomId, integer shipId, integer startingPower, string shieldFile)
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
### AddSuperShield ()
{: #AddSuperShield aria-label='Methods' }
#### void :AddSuperShield ([Point](../Hyperspace/Point) pos)
{: aria-label='Methods' }

___
### CollisionReal ()
{: #CollisionReal aria-label='Methods' }
#### [CollisionResponse](../Hyperspace/CollisionResponse) :CollisionReal (number x, number y, [Damage](../Hyperspace/Damage) damage, boolean force)
{: aria-label='Methods' }

___
### InstantCharge ()
{: #InstantCharge aria-label='Methods' }
#### void :InstantCharge ()
{: aria-label='Methods' }

___
### SetBaseEllipse ()
{: #SetBaseEllipse aria-label='Methods' }
#### void :SetBaseEllipse ([Ellipse](../Hyperspace/Ellipse) ellipse)
{: aria-label='Methods' }

___
### SetHackingLevel ()
{: #SetHackingLevel aria-label='Methods' }
#### void :SetHackingLevel (integer hackingLevel)
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
### bBarrierMode
{: #bBarrierMode aria-label='Fields' }
#### boolean .bBarrierMode
{: aria-label='Fields' }

___
### bEnemyPresent
{: #bEnemyPresent aria-label='Fields' }
#### boolean .bEnemyPresent
{: aria-label='Fields' }

___
### bExcessChargeHack
{: #bExcessChargeHack aria-label='Fields' }
#### boolean .bExcessChargeHack
{: aria-label='Fields' }

___
### baseShield
{: #baseShield aria-label='Fields' }
#### [Ellipse](../Hyperspace/Ellipse) .baseShield
{: aria-label='Fields' }

___
### center
{: #center aria-label='Fields' }
#### [Point](../Hyperspace/Point) .center
{: aria-label='Fields' }

___
### chargeTime
{: #chargeTime aria-label='Fields' }
#### number .chargeTime
{: aria-label='Fields' }

___
### ellipseRatio
{: #ellipseRatio aria-label='Fields' }
#### number .ellipseRatio
{: aria-label='Fields' }

___
### iHighlightedSide
{: #iHighlightedSide aria-label='Fields' }
#### integer .iHighlightedSide
{: aria-label='Fields' }

___
### lastHitShieldLevel
{: #lastHitShieldLevel aria-label='Fields' }
#### integer .lastHitShieldLevel
{: aria-label='Fields' }

___
### lastHitTimer
{: #lastHitTimer aria-label='Fields' }
#### number .lastHitTimer
{: aria-label='Fields' }

___
### shieldHits
{: #shieldHits aria-label='Fields' }
#### vector\<[Shields.ShieldAnimation](../Hyperspace/Shields.ShieldAnimation)\> .shieldHits
{: aria-label='Fields' }

___
### shieldImage
{: #shieldImage aria-label='Fields' }
#### [GL_Texture](../Graphics/GL_Texture) .shieldImage
{: aria-label='Fields' }

___
### shieldImageName
{: #shieldImageName aria-label='Fields' }
#### string .shieldImageName
{: aria-label='Fields' }

___
### shieldPrimitive
{: #shieldPrimitive aria-label='Fields' }
#### [GL_Primitive](../Graphics/GL_Primitive) .shieldPrimitive
{: aria-label='Fields' }

___
### shields
{: #shields aria-label='Fields' }
#### [Shield](../Hyperspace/Shield) .shields
{: aria-label='Fields' }

___
### shieldsDown
{: #shieldsDown aria-label='Fields' }
#### [AnimationTracker](../Hyperspace/AnimationTracker) .shieldsDown
{: aria-label='Fields' }

___
### shieldsDownPoint
{: #shieldsDownPoint aria-label='Fields' }
#### [Pointf](../Hyperspace/Pointf) .shieldsDownPoint
{: aria-label='Fields' }

___
### shieldsUp
{: #shieldsUp aria-label='Fields' }
#### [AnimationTracker](../Hyperspace/AnimationTracker) .shieldsUp
{: aria-label='Fields' }

___
### shields_shutdown
{: #shields_shutdown aria-label='Fields' }
#### boolean .shields_shutdown
{: aria-label='Fields' }

___
### superShieldDown
{: #superShieldDown aria-label='Fields' }
#### boolean .superShieldDown
{: aria-label='Fields' }

___
### superShieldUp
{: #superShieldUp aria-label='Fields' }
#### [AnimationTracker](../Hyperspace/AnimationTracker) .superShieldUp
{: aria-label='Fields' }

___
### superUpLoc
{: #superUpLoc aria-label='Fields' }
#### [Point](../Hyperspace/Point) .superUpLoc
{: aria-label='Fields' }

___
