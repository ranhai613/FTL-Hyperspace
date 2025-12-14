---
layout: lua
title: Drone
lang: en
category: Class
---

# Class "Drone"



Subclasses: [SpaceDrone](../Hyperspace/SpaceDrone)





## Methods
{: #Methods .lua-content-section}
### BlowUp ()
{: #BlowUp .lua-content-item aria-label='Methods' }
#### void :BlowUp (boolean silent)
{: aria-label='Methods' }

___
### CanBeDeployed ()
{: #CanBeDeployed .lua-content-item aria-label='Methods' }
#### boolean :CanBeDeployed ()
{: aria-label='Methods' }

___
### CanBeRecovered ()
{: #CanBeRecovered .lua-content-item aria-label='Methods' }
#### boolean :CanBeRecovered ()
{: aria-label='Methods' }

___
### Destroyed ()
{: #Destroyed .lua-content-item aria-label='Methods' }
#### boolean :Destroyed ()
{: aria-label='Methods' }

___
### GetDeployed ()
{: #GetDeployed .lua-content-item aria-label='Methods' }
#### boolean :GetDeployed ()
{: aria-label='Methods' }

___
### GetDroneHealth ()
{: #GetDroneHealth .lua-content-item aria-label='Methods' }
#### integer :GetDroneHealth ()
{: aria-label='Methods' }

___
### GetDroneSlot ()
{: #GetDroneSlot .lua-content-item aria-label='Methods' }
#### [Slot](../Hyperspace/Slot) :GetDroneSlot ([Drone](../Hyperspace/Drone) drone)
{: aria-label='Methods' }

___
### GetName ()
{: #GetName .lua-content-item aria-label='Methods' }
#### string :GetName ([Drone](../Hyperspace/Drone) drone)
{: aria-label='Methods' }

___
### GetPowered ()
{: #GetPowered .lua-content-item aria-label='Methods' }
#### boolean :GetPowered ()
{: aria-label='Methods' }

___
### GetRequiredPower ()
{: #GetRequiredPower .lua-content-item aria-label='Methods' }
#### integer :GetRequiredPower ()
{: aria-label='Methods' }

___
### GetStunned ()
{: #GetStunned .lua-content-item aria-label='Methods' }
#### boolean :GetStunned ()
{: aria-label='Methods' }

___
### GetWorldLocation ()
{: #GetWorldLocation .lua-content-item aria-label='Methods' }
#### [Point](../Hyperspace/Point) :GetWorldLocation ()
{: aria-label='Methods' }

___
### LoadState ()
{: #LoadState .lua-content-item aria-label='Methods' }
#### void :LoadState (integer fh)
{: aria-label='Methods' }

___
### NeedsRoom ()
{: #NeedsRoom .lua-content-item aria-label='Methods' }
#### boolean :NeedsRoom ()
{: aria-label='Methods' }

___
### OnDestroy ()
{: #OnDestroy .lua-content-item aria-label='Methods' }
#### void :OnDestroy ()
{: aria-label='Methods' }

___
### OnInit ()
{: #OnInit .lua-content-item aria-label='Methods' }
#### void :OnInit ()
{: aria-label='Methods' }

___
### OnLoop ()
{: #OnLoop .lua-content-item aria-label='Methods' }
#### void :OnLoop ()
{: aria-label='Methods' }

___
### RecallOnJump ()
{: #RecallOnJump .lua-content-item aria-label='Methods' }
#### boolean :RecallOnJump ()
{: aria-label='Methods' }

___
### RenderIcon ()
{: #RenderIcon .lua-content-item aria-label='Methods' }
#### void :RenderIcon ()
{: aria-label='Methods' }

___
### SaveState ()
{: #SaveState .lua-content-item aria-label='Methods' }
#### void :SaveState (integer fh)
{: aria-label='Methods' }

___
### SetCurrentShip ()
{: #SetCurrentShip .lua-content-item aria-label='Methods' }
#### void :SetCurrentShip (integer shipId)
{: aria-label='Methods' }

___
### SetDeployed ()
{: #SetDeployed .lua-content-item aria-label='Methods' }
#### void :SetDeployed (boolean _deployed)
{: aria-label='Methods' }

___
### SetDestroyed ()
{: #SetDestroyed .lua-content-item aria-label='Methods' }
#### void :SetDestroyed (boolean dead, boolean setTimer)
{: aria-label='Methods' }

___
### SetHacked ()
{: #SetHacked .lua-content-item aria-label='Methods' }
#### void :SetHacked (integer level)
{: aria-label='Methods' }

___
### SetInstantPowered ()
{: #SetInstantPowered .lua-content-item aria-label='Methods' }
#### void :SetInstantPowered ()
{: aria-label='Methods' }

___
### SetPowered ()
{: #SetPowered .lua-content-item aria-label='Methods' }
#### void :SetPowered (boolean _powered)
{: aria-label='Methods' }

___
### SetSlot ()
{: #SetSlot .lua-content-item aria-label='Methods' }
#### void :SetSlot (integer room, integer slot)
{: aria-label='Methods' }

___
### SetWorldLocation ()
{: #SetWorldLocation .lua-content-item aria-label='Methods' }
#### void :SetWorldLocation ([Point](../Hyperspace/Point) point)
{: aria-label='Methods' }

___


## Fields
{: #Fields .lua-content-section}
### bDead
{: #bDead .lua-content-item aria-label='Fields' }
#### boolean .bDead
{: aria-label='Fields' }

___
### blueprint (Read-only)
{: #blueprint .lua-content-item aria-label='Fields' }
#### [DroneBlueprint](../Hyperspace/DroneBlueprint) .blueprint
{: aria-label='Fields' }
**Read-only**

___
### deployed
{: #deployed .lua-content-item aria-label='Fields' }
#### boolean .deployed
{: aria-label='Fields' }

___
### destroyedTimer
{: #destroyedTimer .lua-content-item aria-label='Fields' }
#### number .destroyedTimer
{: aria-label='Fields' }

___
### hackTime
{: #hackTime .lua-content-item aria-label='Fields' }
#### number .hackTime
{: aria-label='Fields' }

___
### iBonusPower
{: #iBonusPower .lua-content-item aria-label='Fields' }
#### integer .iBonusPower
{: aria-label='Fields' }

___
### iHackLevel
{: #iHackLevel .lua-content-item aria-label='Fields' }
#### integer .iHackLevel
{: aria-label='Fields' }

___
### iShipId
{: #iShipId .lua-content-item aria-label='Fields' }
#### integer .iShipId
{: aria-label='Fields' }
**Read-only**

___
### powerRequired
{: #powerRequired .lua-content-item aria-label='Fields' }
#### integer .powerRequired
{: aria-label='Fields' }

___
### powered
{: #powered .lua-content-item aria-label='Fields' }
#### boolean .powered
{: aria-label='Fields' }

___
### poweredAtLocation
{: #poweredAtLocation .lua-content-item aria-label='Fields' }
#### boolean .poweredAtLocation
{: aria-label='Fields' }

___
### selfId (Read-only)
{: #selfId .lua-content-item aria-label='Fields' }
#### integer .selfId
{: aria-label='Fields' }

___
### type
{: #type .lua-content-item aria-label='Fields' }
#### integer .type
{: aria-label='Fields' }

___
