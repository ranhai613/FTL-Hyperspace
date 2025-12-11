---
layout: lua
title: Drone
lang: en
---

# Class "Drone"



Subclasses: [SpaceDrone](../Hyperspace/SpaceDrone)





## Methods
{: #Methods .section}
### BlowUp ()
{: #BlowUp aria-label='Methods' }
#### void :BlowUp (boolean silent)
{: aria-label='Methods' }

___
### CanBeDeployed ()
{: #CanBeDeployed aria-label='Methods' }
#### boolean :CanBeDeployed ()
{: aria-label='Methods' }

___
### CanBeRecovered ()
{: #CanBeRecovered aria-label='Methods' }
#### boolean :CanBeRecovered ()
{: aria-label='Methods' }

___
### Destroyed ()
{: #Destroyed aria-label='Methods' }
#### boolean :Destroyed ()
{: aria-label='Methods' }

___
### GetDeployed ()
{: #GetDeployed aria-label='Methods' }
#### boolean :GetDeployed ()
{: aria-label='Methods' }

___
### GetDroneHealth ()
{: #GetDroneHealth aria-label='Methods' }
#### integer :GetDroneHealth ()
{: aria-label='Methods' }

___
### GetDroneSlot ()
{: #GetDroneSlot aria-label='Methods' }
#### [Slot](../Hyperspace/Slot) :GetDroneSlot ([Drone](../Hyperspace/Drone) drone)
{: aria-label='Methods' }

___
### GetName ()
{: #GetName aria-label='Methods' }
#### string :GetName ([Drone](../Hyperspace/Drone) drone)
{: aria-label='Methods' }

___
### GetPowered ()
{: #GetPowered aria-label='Methods' }
#### boolean :GetPowered ()
{: aria-label='Methods' }

___
### GetRequiredPower ()
{: #GetRequiredPower aria-label='Methods' }
#### integer :GetRequiredPower ()
{: aria-label='Methods' }

___
### GetStunned ()
{: #GetStunned aria-label='Methods' }
#### boolean :GetStunned ()
{: aria-label='Methods' }

___
### GetWorldLocation ()
{: #GetWorldLocation aria-label='Methods' }
#### [Point](../Hyperspace/Point) :GetWorldLocation ()
{: aria-label='Methods' }

___
### LoadState ()
{: #LoadState aria-label='Methods' }
#### void :LoadState (integer fh)
{: aria-label='Methods' }

___
### NeedsRoom ()
{: #NeedsRoom aria-label='Methods' }
#### boolean :NeedsRoom ()
{: aria-label='Methods' }

___
### OnDestroy ()
{: #OnDestroy aria-label='Methods' }
#### void :OnDestroy ()
{: aria-label='Methods' }

___
### OnInit ()
{: #OnInit aria-label='Methods' }
#### void :OnInit ()
{: aria-label='Methods' }

___
### OnLoop ()
{: #OnLoop aria-label='Methods' }
#### void :OnLoop ()
{: aria-label='Methods' }

___
### RecallOnJump ()
{: #RecallOnJump aria-label='Methods' }
#### boolean :RecallOnJump ()
{: aria-label='Methods' }

___
### RenderIcon ()
{: #RenderIcon aria-label='Methods' }
#### void :RenderIcon ()
{: aria-label='Methods' }

___
### SaveState ()
{: #SaveState aria-label='Methods' }
#### void :SaveState (integer fh)
{: aria-label='Methods' }

___
### SetCurrentShip ()
{: #SetCurrentShip aria-label='Methods' }
#### void :SetCurrentShip (integer shipId)
{: aria-label='Methods' }

___
### SetDeployed ()
{: #SetDeployed aria-label='Methods' }
#### void :SetDeployed (boolean _deployed)
{: aria-label='Methods' }

___
### SetDestroyed ()
{: #SetDestroyed aria-label='Methods' }
#### void :SetDestroyed (boolean dead, boolean setTimer)
{: aria-label='Methods' }

___
### SetHacked ()
{: #SetHacked aria-label='Methods' }
#### void :SetHacked (integer level)
{: aria-label='Methods' }

___
### SetInstantPowered ()
{: #SetInstantPowered aria-label='Methods' }
#### void :SetInstantPowered ()
{: aria-label='Methods' }

___
### SetPowered ()
{: #SetPowered aria-label='Methods' }
#### void :SetPowered (boolean _powered)
{: aria-label='Methods' }

___
### SetSlot ()
{: #SetSlot aria-label='Methods' }
#### void :SetSlot (integer room, integer slot)
{: aria-label='Methods' }

___
### SetWorldLocation ()
{: #SetWorldLocation aria-label='Methods' }
#### void :SetWorldLocation ([Point](../Hyperspace/Point) point)
{: aria-label='Methods' }

___


## Fields
{: #Fields .section}
### bDead
{: #bDead aria-label='Fields' }
#### boolean .bDead
{: aria-label='Fields' }

___
### blueprint (Read-only)
{: #blueprint aria-label='Fields' }
#### [DroneBlueprint](../Hyperspace/DroneBlueprint) .blueprint
{: aria-label='Fields' }
**Read-only**

___
### deployed
{: #deployed aria-label='Fields' }
#### boolean .deployed
{: aria-label='Fields' }

___
### destroyedTimer
{: #destroyedTimer aria-label='Fields' }
#### number .destroyedTimer
{: aria-label='Fields' }

___
### hackTime
{: #hackTime aria-label='Fields' }
#### number .hackTime
{: aria-label='Fields' }

___
### iBonusPower
{: #iBonusPower aria-label='Fields' }
#### integer .iBonusPower
{: aria-label='Fields' }

___
### iHackLevel
{: #iHackLevel aria-label='Fields' }
#### integer .iHackLevel
{: aria-label='Fields' }

___
### iShipId
{: #iShipId aria-label='Fields' }
#### integer .iShipId
{: aria-label='Fields' }
**Read-only**

___
### powerRequired
{: #powerRequired aria-label='Fields' }
#### integer .powerRequired
{: aria-label='Fields' }

___
### powered
{: #powered aria-label='Fields' }
#### boolean .powered
{: aria-label='Fields' }

___
### poweredAtLocation
{: #poweredAtLocation aria-label='Fields' }
#### boolean .poweredAtLocation
{: aria-label='Fields' }

___
### selfId (Read-only)
{: #selfId aria-label='Fields' }
#### integer .selfId
{: aria-label='Fields' }

___
### type
{: #type aria-label='Fields' }
#### integer .type
{: aria-label='Fields' }

___
