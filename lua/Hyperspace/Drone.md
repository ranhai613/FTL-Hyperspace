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

______
### CanBeDeployed ()
{: aria-label='Methods' }
#### boolean :CanBeDeployed ()
{: aria-label='Methods' }

______
### CanBeRecovered ()
{: aria-label='Methods' }
#### boolean :CanBeRecovered ()
{: aria-label='Methods' }

______
### Destroyed ()
{: aria-label='Methods' }
#### boolean :Destroyed ()
{: aria-label='Methods' }

______
### GetDeployed ()
{: aria-label='Methods' }
#### boolean :GetDeployed ()
{: aria-label='Methods' }

______
### GetDroneHealth ()
{: aria-label='Methods' }
#### integer :GetDroneHealth ()
{: aria-label='Methods' }

______
### GetDroneSlot ()
{: aria-label='Methods' }
#### [Slot](../Hyperspace/Slot) :GetDroneSlot ([Drone](../Hyperspace/Drone) drone)
{: aria-label='Methods' }

______
### GetName ()
{: aria-label='Methods' }
#### string :GetName ([Drone](../Hyperspace/Drone) drone)
{: aria-label='Methods' }

______
### GetPowered ()
{: aria-label='Methods' }
#### boolean :GetPowered ()
{: aria-label='Methods' }

______
### GetRequiredPower ()
{: aria-label='Methods' }
#### integer :GetRequiredPower ()
{: aria-label='Methods' }

______
### GetStunned ()
{: aria-label='Methods' }
#### boolean :GetStunned ()
{: aria-label='Methods' }

______
### GetWorldLocation ()
{: aria-label='Methods' }
#### [Point](../Hyperspace/Point) :GetWorldLocation ()
{: aria-label='Methods' }

______
### LoadState ()
{: aria-label='Methods' }
#### void :LoadState (integer fh)
{: aria-label='Methods' }

______
### NeedsRoom ()
{: aria-label='Methods' }
#### boolean :NeedsRoom ()
{: aria-label='Methods' }

______
### OnDestroy ()
{: aria-label='Methods' }
#### void :OnDestroy ()
{: aria-label='Methods' }

______
### OnInit ()
{: aria-label='Methods' }
#### void :OnInit ()
{: aria-label='Methods' }

______
### OnLoop ()
{: aria-label='Methods' }
#### void :OnLoop ()
{: aria-label='Methods' }

______
### RecallOnJump ()
{: aria-label='Methods' }
#### boolean :RecallOnJump ()
{: aria-label='Methods' }

______
### RenderIcon ()
{: aria-label='Methods' }
#### void :RenderIcon ()
{: aria-label='Methods' }

______
### SaveState ()
{: aria-label='Methods' }
#### void :SaveState (integer fh)
{: aria-label='Methods' }

______
### SetCurrentShip ()
{: aria-label='Methods' }
#### void :SetCurrentShip (integer shipId)
{: aria-label='Methods' }

______
### SetDeployed ()
{: aria-label='Methods' }
#### void :SetDeployed (boolean _deployed)
{: aria-label='Methods' }

______
### SetDestroyed ()
{: aria-label='Methods' }
#### void :SetDestroyed (boolean dead, boolean setTimer)
{: aria-label='Methods' }

______
### SetHacked ()
{: aria-label='Methods' }
#### void :SetHacked (integer level)
{: aria-label='Methods' }

______
### SetInstantPowered ()
{: aria-label='Methods' }
#### void :SetInstantPowered ()
{: aria-label='Methods' }

______
### SetPowered ()
{: aria-label='Methods' }
#### void :SetPowered (boolean _powered)
{: aria-label='Methods' }

______
### SetSlot ()
{: aria-label='Methods' }
#### void :SetSlot (integer room, integer slot)
{: aria-label='Methods' }

______
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

______
### blueprint (Read-only)
{: aria-label='Fields' }
#### [DroneBlueprint](../Hyperspace/DroneBlueprint) .blueprint
{: aria-label='Fields' }
**Read-only**

______
### deployed
{: aria-label='Fields' }
#### boolean .deployed
{: aria-label='Fields' }

______
### destroyedTimer
{: aria-label='Fields' }
#### number .destroyedTimer
{: aria-label='Fields' }

______
### hackTime
{: aria-label='Fields' }
#### number .hackTime
{: aria-label='Fields' }

______
### iBonusPower
{: aria-label='Fields' }
#### integer .iBonusPower
{: aria-label='Fields' }

______
### iHackLevel
{: aria-label='Fields' }
#### integer .iHackLevel
{: aria-label='Fields' }

______
### iShipId
{: aria-label='Fields' }
#### integer .iShipId
{: aria-label='Fields' }
**Read-only**

______
### powerRequired
{: aria-label='Fields' }
#### integer .powerRequired
{: aria-label='Fields' }

______
### powered
{: aria-label='Fields' }
#### boolean .powered
{: aria-label='Fields' }

______
### poweredAtLocation
{: aria-label='Fields' }
#### boolean .poweredAtLocation
{: aria-label='Fields' }

______
### selfId (Read-only)
{: aria-label='Fields' }
#### integer .selfId
{: aria-label='Fields' }

______
### type
{: aria-label='Fields' }
#### integer .type
{: aria-label='Fields' }

___
