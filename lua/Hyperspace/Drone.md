---
layout: lua
title: Drone
lang: en
---

# Class "Drone"





## Methods
### BlowUp ()
{: aria-label='Methods' }
#### void :BlowUp (boolean silent)
{: aria-label='Methods' }

___
### CanBeDeployed ()
{: aria-label='Methods' }
#### boolean :CanBeDeployed ()
{: aria-label='Methods' }

___
### CanBeRecovered ()
{: aria-label='Methods' }
#### boolean :CanBeRecovered ()
{: aria-label='Methods' }

___
### Destroyed ()
{: aria-label='Methods' }
#### boolean :Destroyed ()
{: aria-label='Methods' }

___
### GetDeployed ()
{: aria-label='Methods' }
#### boolean :GetDeployed ()
{: aria-label='Methods' }

___
### GetDroneHealth ()
{: aria-label='Methods' }
#### integer :GetDroneHealth ()
{: aria-label='Methods' }

___
### GetDroneSlot ()
{: aria-label='Methods' }
#### [Slot](../Hyperspace/Slot) :GetDroneSlot ([Drone](../Hyperspace/Drone) drone)
{: aria-label='Methods' }

___
### GetName ()
{: aria-label='Methods' }
#### string :GetName ([Drone](../Hyperspace/Drone) drone)
{: aria-label='Methods' }

___
### GetPowered ()
{: aria-label='Methods' }
#### boolean :GetPowered ()
{: aria-label='Methods' }

___
### GetRequiredPower ()
{: aria-label='Methods' }
#### integer :GetRequiredPower ()
{: aria-label='Methods' }

___
### GetStunned ()
{: aria-label='Methods' }
#### boolean :GetStunned ()
{: aria-label='Methods' }

___
### GetWorldLocation ()
{: aria-label='Methods' }
#### [Point](../Hyperspace/Point) :GetWorldLocation ()
{: aria-label='Methods' }

___
### LoadState ()
{: aria-label='Methods' }
#### void :LoadState (integer fh)
{: aria-label='Methods' }

___
### NeedsRoom ()
{: aria-label='Methods' }
#### boolean :NeedsRoom ()
{: aria-label='Methods' }

___
### OnDestroy ()
{: aria-label='Methods' }
#### void :OnDestroy ()
{: aria-label='Methods' }

___
### OnInit ()
{: aria-label='Methods' }
#### void :OnInit ()
{: aria-label='Methods' }

___
### OnLoop ()
{: aria-label='Methods' }
#### void :OnLoop ()
{: aria-label='Methods' }

___
### RecallOnJump ()
{: aria-label='Methods' }
#### boolean :RecallOnJump ()
{: aria-label='Methods' }

___
### RenderIcon ()
{: aria-label='Methods' }
#### void :RenderIcon ()
{: aria-label='Methods' }

___
### SaveState ()
{: aria-label='Methods' }
#### void :SaveState (integer fh)
{: aria-label='Methods' }

___
### SetCurrentShip ()
{: aria-label='Methods' }
#### void :SetCurrentShip (integer shipId)
{: aria-label='Methods' }

___
### SetDeployed ()
{: aria-label='Methods' }
#### void :SetDeployed (boolean _deployed)
{: aria-label='Methods' }

___
### SetDestroyed ()
{: aria-label='Methods' }
#### void :SetDestroyed (boolean dead, boolean setTimer)
{: aria-label='Methods' }

___
### SetHacked ()
{: aria-label='Methods' }
#### void :SetHacked (integer level)
{: aria-label='Methods' }

___
### SetInstantPowered ()
{: aria-label='Methods' }
#### void :SetInstantPowered ()
{: aria-label='Methods' }

___
### SetPowered ()
{: aria-label='Methods' }
#### void :SetPowered (boolean _powered)
{: aria-label='Methods' }

___
### SetSlot ()
{: aria-label='Methods' }
#### void :SetSlot (integer room, integer slot)
{: aria-label='Methods' }

___
### SetWorldLocation ()
{: aria-label='Methods' }
#### void :SetWorldLocation ([Point](../Hyperspace/Point) point)
{: aria-label='Methods' }

___


## Fields
### bDead
{: aria-label='Fields' }
#### boolean .bDead
{: aria-label='Fields' }

___
### blueprint (Read-only)
{: aria-label='Fields' }
#### [DroneBlueprint](../Hyperspace/DroneBlueprint) .blueprint
{: aria-label='Fields' }
**Read-only**

___
### deployed
{: aria-label='Fields' }
#### boolean .deployed
{: aria-label='Fields' }

___
### destroyedTimer
{: aria-label='Fields' }
#### number .destroyedTimer
{: aria-label='Fields' }

___
### hackTime
{: aria-label='Fields' }
#### number .hackTime
{: aria-label='Fields' }

___
### iBonusPower
{: aria-label='Fields' }
#### integer .iBonusPower
{: aria-label='Fields' }

___
### iHackLevel
{: aria-label='Fields' }
#### integer .iHackLevel
{: aria-label='Fields' }

___
### iShipId
{: aria-label='Fields' }
#### integer .iShipId
{: aria-label='Fields' }
**Read-only**

___
### powerRequired
{: aria-label='Fields' }
#### integer .powerRequired
{: aria-label='Fields' }

___
### powered
{: aria-label='Fields' }
#### boolean .powered
{: aria-label='Fields' }

___
### poweredAtLocation
{: aria-label='Fields' }
#### boolean .poweredAtLocation
{: aria-label='Fields' }

___
### selfId (Read-only)
{: aria-label='Fields' }
#### integer .selfId
{: aria-label='Fields' }

___
### type
{: aria-label='Fields' }
#### integer .type
{: aria-label='Fields' }

___
