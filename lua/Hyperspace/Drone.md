---
layout: lua
title: Drone
lang: en
---

# Class "Drone"





## Methods
### BlowUp ()
{: aria-label='Functions' }
#### void :BlowUp (boolean silent)
{: aria-label='Functions' }

______
### CanBeDeployed ()
{: aria-label='Functions' }
#### boolean :CanBeDeployed ()
{: aria-label='Functions' }

______
### CanBeRecovered ()
{: aria-label='Functions' }
#### boolean :CanBeRecovered ()
{: aria-label='Functions' }

______
### Destroyed ()
{: aria-label='Functions' }
#### boolean :Destroyed ()
{: aria-label='Functions' }

______
### GetDeployed ()
{: aria-label='Functions' }
#### boolean :GetDeployed ()
{: aria-label='Functions' }

______
### GetDroneHealth ()
{: aria-label='Functions' }
#### integer :GetDroneHealth ()
{: aria-label='Functions' }

______
### GetDroneSlot ()
{: aria-label='Functions' }
#### [Slot](../Hyperspace/Slot) :GetDroneSlot ([Drone](../Hyperspace/Drone) drone)
{: aria-label='Functions' }

______
### GetName ()
{: aria-label='Functions' }
#### string :GetName ([Drone](../Hyperspace/Drone) drone)
{: aria-label='Functions' }

______
### GetPowered ()
{: aria-label='Functions' }
#### boolean :GetPowered ()
{: aria-label='Functions' }

______
### GetRequiredPower ()
{: aria-label='Functions' }
#### integer :GetRequiredPower ()
{: aria-label='Functions' }

______
### GetStunned ()
{: aria-label='Functions' }
#### boolean :GetStunned ()
{: aria-label='Functions' }

______
### GetWorldLocation ()
{: aria-label='Functions' }
#### [Point](../Hyperspace/Point) :GetWorldLocation ()
{: aria-label='Functions' }

______
### LoadState ()
{: aria-label='Functions' }
#### void :LoadState (integer fh)
{: aria-label='Functions' }

______
### NeedsRoom ()
{: aria-label='Functions' }
#### boolean :NeedsRoom ()
{: aria-label='Functions' }

______
### OnDestroy ()
{: aria-label='Functions' }
#### void :OnDestroy ()
{: aria-label='Functions' }

______
### OnInit ()
{: aria-label='Functions' }
#### void :OnInit ()
{: aria-label='Functions' }

______
### OnLoop ()
{: aria-label='Functions' }
#### void :OnLoop ()
{: aria-label='Functions' }

______
### RecallOnJump ()
{: aria-label='Functions' }
#### boolean :RecallOnJump ()
{: aria-label='Functions' }

______
### RenderIcon ()
{: aria-label='Functions' }
#### void :RenderIcon ()
{: aria-label='Functions' }

______
### SaveState ()
{: aria-label='Functions' }
#### void :SaveState (integer fh)
{: aria-label='Functions' }

______
### SetCurrentShip ()
{: aria-label='Functions' }
#### void :SetCurrentShip (integer shipId)
{: aria-label='Functions' }

______
### SetDeployed ()
{: aria-label='Functions' }
#### void :SetDeployed (boolean _deployed)
{: aria-label='Functions' }

______
### SetDestroyed ()
{: aria-label='Functions' }
#### void :SetDestroyed (boolean dead, boolean setTimer)
{: aria-label='Functions' }

______
### SetHacked ()
{: aria-label='Functions' }
#### void :SetHacked (integer level)
{: aria-label='Functions' }

______
### SetInstantPowered ()
{: aria-label='Functions' }
#### void :SetInstantPowered ()
{: aria-label='Functions' }

______
### SetPowered ()
{: aria-label='Functions' }
#### void :SetPowered (boolean _powered)
{: aria-label='Functions' }

______
### SetSlot ()
{: aria-label='Functions' }
#### void :SetSlot (integer room, integer slot)
{: aria-label='Functions' }

______
### SetWorldLocation ()
{: aria-label='Functions' }
#### void :SetWorldLocation ([Point](../Hyperspace/Point) point)
{: aria-label='Functions' }

___


## Fields
### bDead
{: aria-label='Variables' }
#### boolean .bDead
{: aria-label='Variables' }

______
### blueprint (Read-only)
{: aria-label='Variables' }
#### [DroneBlueprint](../Hyperspace/DroneBlueprint) .blueprint
{: aria-label='Variables' }
**Read-only**

______
### deployed
{: aria-label='Variables' }
#### boolean .deployed
{: aria-label='Variables' }

______
### destroyedTimer
{: aria-label='Variables' }
#### number .destroyedTimer
{: aria-label='Variables' }

______
### hackTime
{: aria-label='Variables' }
#### number .hackTime
{: aria-label='Variables' }

______
### iBonusPower
{: aria-label='Variables' }
#### integer .iBonusPower
{: aria-label='Variables' }

______
### iHackLevel
{: aria-label='Variables' }
#### integer .iHackLevel
{: aria-label='Variables' }

______
### iShipId
{: aria-label='Variables' }
#### integer .iShipId
{: aria-label='Variables' }
**Read-only**

______
### powerRequired
{: aria-label='Variables' }
#### integer .powerRequired
{: aria-label='Variables' }

______
### powered
{: aria-label='Variables' }
#### boolean .powered
{: aria-label='Variables' }

______
### poweredAtLocation
{: aria-label='Variables' }
#### boolean .poweredAtLocation
{: aria-label='Variables' }

______
### selfId (Read-only)
{: aria-label='Variables' }
#### integer .selfId
{: aria-label='Variables' }

______
### type
{: aria-label='Variables' }
#### integer .type
{: aria-label='Variables' }

___
