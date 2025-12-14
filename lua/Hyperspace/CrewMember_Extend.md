---
layout: lua
title: CrewMember_Extend
lang: en
category: Class
---

# Class "CrewMember_Extend"

<!-- Head content to be pulled from "lua-source-parts-inject/Hyperspace/CrewMember_Extend/_head.md" -->


## Constructors
{: #Constructors .lua-content-section}
### CrewMember_Extend ()
{: #CrewMember_Extend .lua-content-item aria-label='Constructors' }
#### [CrewMember_Extend](../Hyperspace/CrewMember_Extend) CrewMember_Extend ()
{: aria-label='Constructors' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/CrewMember_Extend/CrewMember_Extend().md" -->

___




## Methods
{: #Methods .lua-content-section}
### CalculateStat ()
{: #CalculateStat .lua-content-item aria-label='Methods' }
#### number :CalculateStat ([CrewStat](../Hyperspace/CrewStat) stat, [CrewDefinition](../Hyperspace/CrewDefinition) def, boolean boolValue=nullptr)
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/CrewMember_Extend/CalculateStat(Hyperspace.CrewStat,Hyperspace.CrewDefinition,boolean).md" -->

___
### CalculateStat ()
{: #CalculateStat .lua-content-item aria-label='Methods' }
#### number :CalculateStat ([CrewStat](../Hyperspace/CrewStat) stat, boolean boolValue=nullptr)
{: aria-label='Methods' }
<!-- Content pulled from "lua-source-parts-inject/Hyperspace/CrewMember_Extend/CalculateStat(Hyperspace.CrewStat,boolean).md" -->
Returns the current `float` and `bool` value for the given `CrewStat`.
<!-- End of content -->

___
### GetDefinition ()
{: #GetDefinition .lua-content-item aria-label='Methods' }
#### [CrewDefinition](../Hyperspace/CrewDefinition) :GetDefinition ()
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/CrewMember_Extend/GetDefinition().md" -->

___
### InitiateTeleport ()
{: #InitiateTeleport .lua-content-item aria-label='Methods' }
#### void :InitiateTeleport (integer shipId, integer roomId=-1, integer slotId=-1)
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/CrewMember_Extend/InitiateTeleport(integer,integer,integer).md" -->

___


## Fields
{: #Fields .lua-content-section}
### canPhaseThroughDoors
{: #canPhaseThroughDoors .lua-content-item aria-label='Fields' }
#### boolean .canPhaseThroughDoors
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/CrewMember_Extend/canPhaseThroughDoors.md" -->

___
### crewPowers (Read-only)
{: #crewPowers .lua-content-item aria-label='Fields' }
#### vector\<[ActivatedPower](../Hyperspace/ActivatedPower)\> .crewPowers
{: aria-label='Fields' }
<!-- Content pulled from "lua-source-parts-inject/Hyperspace/CrewMember_Extend/crewPowers.md" -->
**read-only**
<!-- End of content -->

___
### customTele
{: #customTele .lua-content-item aria-label='Fields' }
#### [CustomTeleport](../Hyperspace/CustomTeleport) .customTele
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/CrewMember_Extend/customTele.md" -->

___
### deathTimer
{: #deathTimer .lua-content-item aria-label='Fields' }
#### [TimerHelper](../Hyperspace/TimerHelper) .deathTimer
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/CrewMember_Extend/deathTimer.md" -->

___
### exploded
{: #exploded .lua-content-item aria-label='Fields' }
#### boolean .exploded
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/CrewMember_Extend/exploded.md" -->

___
### hasSpecialPower
{: #hasSpecialPower .lua-content-item aria-label='Fields' }
#### boolean .hasSpecialPower
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/CrewMember_Extend/hasSpecialPower.md" -->

___
### isHealing
{: #isHealing .lua-content-item aria-label='Fields' }
#### boolean .isHealing
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/CrewMember_Extend/isHealing.md" -->

___
### lastRoom
{: #lastRoom .lua-content-item aria-label='Fields' }
#### integer .lastRoom
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/CrewMember_Extend/lastRoom.md" -->

___
### lastShipId
{: #lastShipId .lua-content-item aria-label='Fields' }
#### integer .lastShipId
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/CrewMember_Extend/lastShipId.md" -->

___
### noClone
{: #noClone .lua-content-item aria-label='Fields' }
#### boolean .noClone
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/CrewMember_Extend/noClone.md" -->

___
### noSlot
{: #noSlot .lua-content-item aria-label='Fields' }
#### boolean .noSlot
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/CrewMember_Extend/noSlot.md" -->

___
### orig (Read-only)
{: #orig .lua-content-item aria-label='Fields' }
#### [CrewMember](../Hyperspace/CrewMember) .orig
{: aria-label='Fields' }
<!-- Content pulled from "lua-source-parts-inject/Hyperspace/CrewMember_Extend/orig.md" -->
**read-only**
<!-- End of content -->

___
### passiveHealTimer
{: #passiveHealTimer .lua-content-item aria-label='Fields' }
#### [TimerHelper](../Hyperspace/TimerHelper) .passiveHealTimer
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/CrewMember_Extend/passiveHealTimer.md" -->

___
### powerChange
{: #powerChange .lua-content-item aria-label='Fields' }
#### vector\<[ActivatedPowerDefinition](../Hyperspace/ActivatedPowerDefinition)\> .powerChange
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/CrewMember_Extend/powerChange.md" -->

___
### powerResourceMap (Read-only)
{: #powerResourceMap .lua-content-item aria-label='Fields' }
#### unordered_map\<uint, [ActivatedPowerResource](../Hyperspace/ActivatedPowerResource)\> .powerResourceMap
{: aria-label='Fields' }
<!-- Content pulled from "lua-source-parts-inject/Hyperspace/CrewMember_Extend/powerResourceMap.md" -->
**read-only**
<!-- End of content -->

___
### powerResources (Read-only)
{: #powerResources .lua-content-item aria-label='Fields' }
#### vector\<[ActivatedPowerResource](../Hyperspace/ActivatedPowerResource)\> .powerResources
{: aria-label='Fields' }
<!-- Content pulled from "lua-source-parts-inject/Hyperspace/CrewMember_Extend/powerResources.md" -->
**read-only**
<!-- End of content -->

___
### selfId (Read-only)
{: #selfId .lua-content-item aria-label='Fields' }
#### integer .selfId
{: aria-label='Fields' }
<!-- Content pulled from "lua-source-parts-inject/Hyperspace/CrewMember_Extend/selfId.md" -->
**read-only**
<!-- End of content -->

___
### transformRace
{: #transformRace .lua-content-item aria-label='Fields' }
#### string .transformRace
{: aria-label='Fields' }
<!-- Content pulled from "lua-source-parts-inject/Hyperspace/CrewMember_Extend/transformRace.md" -->
Can be set within a CalculateStat callback to transform a crew to a different race.
<!-- End of content -->

___
### triggerExplosion
{: #triggerExplosion .lua-content-item aria-label='Fields' }
#### boolean .triggerExplosion
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/CrewMember_Extend/triggerExplosion.md" -->

___
