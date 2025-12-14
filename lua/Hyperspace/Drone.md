---
layout: lua
title: Drone
lang: en
category: Class
---

# Class "Drone"



Subclasses: [SpaceDrone](../Hyperspace/SpaceDrone)

<!-- Head content to be pulled from "lua-source-parts-inject/Hyperspace/Drone/_head.md" -->





## Methods
{: #Methods .lua-content-section}
### BlowUp ()
{: #BlowUp .lua-content-item aria-label='Methods' }
#### void :BlowUp (boolean silent)
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/Drone/BlowUp(boolean).md" -->

___
### CanBeDeployed ()
{: #CanBeDeployed .lua-content-item aria-label='Methods' }
#### boolean :CanBeDeployed ()
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/Drone/CanBeDeployed().md" -->

___
### CanBeRecovered ()
{: #CanBeRecovered .lua-content-item aria-label='Methods' }
#### boolean :CanBeRecovered ()
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/Drone/CanBeRecovered().md" -->

___
### Destroyed ()
{: #Destroyed .lua-content-item aria-label='Methods' }
#### boolean :Destroyed ()
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/Drone/Destroyed().md" -->

___
### GetDeployed ()
{: #GetDeployed .lua-content-item aria-label='Methods' }
#### boolean :GetDeployed ()
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/Drone/GetDeployed().md" -->

___
### GetDroneHealth ()
{: #GetDroneHealth .lua-content-item aria-label='Methods' }
#### integer :GetDroneHealth ()
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/Drone/GetDroneHealth().md" -->

___
### GetDroneSlot ()
{: #GetDroneSlot .lua-content-item aria-label='Methods' }
#### [Slot](../Hyperspace/Slot) :GetDroneSlot ([Drone](../Hyperspace/Drone) drone)
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/Drone/GetDroneSlot(Hyperspace.Drone).md" -->

___
### GetName ()
{: #GetName .lua-content-item aria-label='Methods' }
#### string :GetName ([Drone](../Hyperspace/Drone) drone)
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/Drone/GetName(Hyperspace.Drone).md" -->

___
### GetPowered ()
{: #GetPowered .lua-content-item aria-label='Methods' }
#### boolean :GetPowered ()
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/Drone/GetPowered().md" -->

___
### GetRequiredPower ()
{: #GetRequiredPower .lua-content-item aria-label='Methods' }
#### integer :GetRequiredPower ()
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/Drone/GetRequiredPower().md" -->

___
### GetStunned ()
{: #GetStunned .lua-content-item aria-label='Methods' }
#### boolean :GetStunned ()
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/Drone/GetStunned().md" -->

___
### GetWorldLocation ()
{: #GetWorldLocation .lua-content-item aria-label='Methods' }
#### [Point](../Hyperspace/Point) :GetWorldLocation ()
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/Drone/GetWorldLocation().md" -->

___
### LoadState ()
{: #LoadState .lua-content-item aria-label='Methods' }
#### void :LoadState (integer fh)
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/Drone/LoadState(integer).md" -->

___
### NeedsRoom ()
{: #NeedsRoom .lua-content-item aria-label='Methods' }
#### boolean :NeedsRoom ()
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/Drone/NeedsRoom().md" -->

___
### OnDestroy ()
{: #OnDestroy .lua-content-item aria-label='Methods' }
#### void :OnDestroy ()
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/Drone/OnDestroy().md" -->

___
### OnInit ()
{: #OnInit .lua-content-item aria-label='Methods' }
#### void :OnInit ()
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/Drone/OnInit().md" -->

___
### OnLoop ()
{: #OnLoop .lua-content-item aria-label='Methods' }
#### void :OnLoop ()
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/Drone/OnLoop().md" -->

___
### RecallOnJump ()
{: #RecallOnJump .lua-content-item aria-label='Methods' }
#### boolean :RecallOnJump ()
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/Drone/RecallOnJump().md" -->

___
### RenderIcon ()
{: #RenderIcon .lua-content-item aria-label='Methods' }
#### void :RenderIcon ()
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/Drone/RenderIcon().md" -->

___
### SaveState ()
{: #SaveState .lua-content-item aria-label='Methods' }
#### void :SaveState (integer fh)
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/Drone/SaveState(integer).md" -->

___
### SetCurrentShip ()
{: #SetCurrentShip .lua-content-item aria-label='Methods' }
#### void :SetCurrentShip (integer shipId)
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/Drone/SetCurrentShip(integer).md" -->

___
### SetDeployed ()
{: #SetDeployed .lua-content-item aria-label='Methods' }
#### void :SetDeployed (boolean _deployed)
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/Drone/SetDeployed(boolean).md" -->

___
### SetDestroyed ()
{: #SetDestroyed .lua-content-item aria-label='Methods' }
#### void :SetDestroyed (boolean dead, boolean setTimer)
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/Drone/SetDestroyed(boolean,boolean).md" -->

___
### SetHacked ()
{: #SetHacked .lua-content-item aria-label='Methods' }
#### void :SetHacked (integer level)
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/Drone/SetHacked(integer).md" -->

___
### SetInstantPowered ()
{: #SetInstantPowered .lua-content-item aria-label='Methods' }
#### void :SetInstantPowered ()
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/Drone/SetInstantPowered().md" -->

___
### SetPowered ()
{: #SetPowered .lua-content-item aria-label='Methods' }
#### void :SetPowered (boolean _powered)
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/Drone/SetPowered(boolean).md" -->

___
### SetSlot ()
{: #SetSlot .lua-content-item aria-label='Methods' }
#### void :SetSlot (integer room, integer slot)
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/Drone/SetSlot(integer,integer).md" -->

___
### SetWorldLocation ()
{: #SetWorldLocation .lua-content-item aria-label='Methods' }
#### void :SetWorldLocation ([Point](../Hyperspace/Point) point)
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/Drone/SetWorldLocation(Hyperspace.Point).md" -->

___


## Fields
{: #Fields .lua-content-section}
### bDead
{: #bDead .lua-content-item aria-label='Fields' }
#### boolean .bDead
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/Drone/bDead.md" -->

___
### blueprint (Read-only)
{: #blueprint .lua-content-item aria-label='Fields' }
#### [DroneBlueprint](../Hyperspace/DroneBlueprint) .blueprint
{: aria-label='Fields' }
<!-- Content pulled from "lua-source-parts-inject/Hyperspace/Drone/blueprint.md" -->
**Read-only**
<!-- End of content -->

___
### deployed
{: #deployed .lua-content-item aria-label='Fields' }
#### boolean .deployed
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/Drone/deployed.md" -->

___
### destroyedTimer
{: #destroyedTimer .lua-content-item aria-label='Fields' }
#### number .destroyedTimer
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/Drone/destroyedTimer.md" -->

___
### hackTime
{: #hackTime .lua-content-item aria-label='Fields' }
#### number .hackTime
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/Drone/hackTime.md" -->

___
### iBonusPower
{: #iBonusPower .lua-content-item aria-label='Fields' }
#### integer .iBonusPower
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/Drone/iBonusPower.md" -->

___
### iHackLevel
{: #iHackLevel .lua-content-item aria-label='Fields' }
#### integer .iHackLevel
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/Drone/iHackLevel.md" -->

___
### iShipId
{: #iShipId .lua-content-item aria-label='Fields' }
#### integer .iShipId
{: aria-label='Fields' }
<!-- Content pulled from "lua-source-parts-inject/Hyperspace/Drone/iShipId.md" -->
**Read-only**
<!-- End of content -->

___
### powerRequired
{: #powerRequired .lua-content-item aria-label='Fields' }
#### integer .powerRequired
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/Drone/powerRequired.md" -->

___
### powered
{: #powered .lua-content-item aria-label='Fields' }
#### boolean .powered
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/Drone/powered.md" -->

___
### poweredAtLocation
{: #poweredAtLocation .lua-content-item aria-label='Fields' }
#### boolean .poweredAtLocation
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/Drone/poweredAtLocation.md" -->

___
### selfId (Read-only)
{: #selfId .lua-content-item aria-label='Fields' }
#### integer .selfId
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/Drone/selfId.md" -->

___
### type
{: #type .lua-content-item aria-label='Fields' }
#### integer .type
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/Drone/type.md" -->

___
