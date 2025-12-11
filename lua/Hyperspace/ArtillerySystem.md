---
layout: lua
title: ArtillerySystem
lang: en
---

# Class "ArtillerySystem"


Extends: [ShipSystem](../Hyperspace/ShipSystem)






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
### bCloaked
{: #bCloaked aria-label='Fields' }
#### boolean .bCloaked
{: aria-label='Fields' }

___
### projectileFactory
{: #projectileFactory aria-label='Fields' }
#### [ProjectileFactory](../Hyperspace/ProjectileFactory) .projectileFactory
{: aria-label='Fields' }

___
### target
{: #target aria-label='Fields' }
#### [Targetable](../Hyperspace/Targetable) .target
{: aria-label='Fields' }

___
