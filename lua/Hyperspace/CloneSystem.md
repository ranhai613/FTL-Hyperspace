---
layout: lua
title: CloneSystem
lang: en
---

# Class "CloneSystem"


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
### bottom
{: #bottom aria-label='Fields' }
#### [GL_Texture](../Graphics/GL_Texture) .bottom
{: aria-label='Fields' }

___
### clone
{: #clone aria-label='Fields' }
#### [CrewMember](../Hyperspace/CrewMember) .clone
{: aria-label='Fields' }

___
### fDeathTime
{: #fDeathTime aria-label='Fields' }
#### number .fDeathTime
{: aria-label='Fields' }

___
### fTimeGoal
{: #fTimeGoal aria-label='Fields' }
#### number .fTimeGoal
{: aria-label='Fields' }

___
### fTimeToClone
{: #fTimeToClone aria-label='Fields' }
#### number .fTimeToClone
{: aria-label='Fields' }

___
### gas
{: #gas aria-label='Fields' }
#### [GL_Texture](../Graphics/GL_Texture) .gas
{: aria-label='Fields' }

___
### slot
{: #slot aria-label='Fields' }
#### integer .slot
{: aria-label='Fields' }

___
### top
{: #top aria-label='Fields' }
#### [GL_Texture](../Graphics/GL_Texture) .top
{: aria-label='Fields' }

___
