---
layout: lua
title: ActivatedPower
lang: en
---

# Class "ActivatedPower"


## Constructors
### ActivatedPower ()
{: aria-label='Constructors' }
#### [ActivatedPower](../Hyperspace/ActivatedPower) ActivatedPower ([ActivatedPowerDefinition](../Hyperspace/ActivatedPowerDefinition) _def)
{: aria-label='Constructors' }

___
### ActivatedPower ()
{: aria-label='Constructors' }
#### [ActivatedPower](../Hyperspace/ActivatedPower) ActivatedPower ([ActivatedPowerDefinition](../Hyperspace/ActivatedPowerDefinition) _def, [CrewMember](../Hyperspace/CrewMember) _crew, [CrewMember_Extend](../Hyperspace/CrewMember_Extend) _ex)
{: aria-label='Constructors' }

___
### ActivatedPower ()
{: aria-label='Constructors' }
#### [ActivatedPower](../Hyperspace/ActivatedPower) ActivatedPower ([ActivatedPowerDefinition](../Hyperspace/ActivatedPowerDefinition) _def, [CrewMember](../Hyperspace/CrewMember) _crew)
{: aria-label='Constructors' }

___
### ActivatedPower ()
{: aria-label='Constructors' }
#### [ActivatedPower](../Hyperspace/ActivatedPower) ActivatedPower ([ActivatedPowerDefinition](../Hyperspace/ActivatedPowerDefinition) _def, [CrewMember_Extend](../Hyperspace/CrewMember_Extend) _ex)
{: aria-label='Constructors' }

___




## Methods
### ActivatePower ()
{: aria-label='Methods' }
#### void :ActivatePower ()
{: aria-label='Methods' }

___
### ActivateTemporaryPower ()
{: aria-label='Methods' }
#### void :ActivateTemporaryPower ()
{: aria-label='Methods' }

___
### CancelPower ()
{: aria-label='Methods' }
#### void :CancelPower (boolean clearAnim)
{: aria-label='Methods' }

___
### ChangePowerDef ()
{: aria-label='Methods' }
#### void :ChangePowerDef ([ActivatedPowerDefinition](../Hyperspace/ActivatedPowerDefinition) newDef)
{: aria-label='Methods' }

___
### DisablePower ()
{: aria-label='Methods' }
#### void :DisablePower ()
{: aria-label='Methods' }

___
### EnableInit ()
{: aria-label='Methods' }
#### void :EnableInit ()
{: aria-label='Methods' }

___
### EnablePower ()
{: aria-label='Methods' }
#### void :EnablePower ()
{: aria-label='Methods' }

___
### GetCrewBoxResourceWidth ()
{: aria-label='Methods' }
#### integer :GetCrewBoxResourceWidth (integer mode)
{: aria-label='Methods' }

___
### GetPowerDamage ()
{: aria-label='Methods' }
#### [Damage](../Hyperspace/Damage) :GetPowerDamage ()
{: aria-label='Methods' }

___
### OnUpdate ()
{: aria-label='Methods' }
#### void :OnUpdate ()
{: aria-label='Methods' }

___
### PowerReady ()
{: aria-label='Methods' }
#### PowerReadyState :PowerReady ()
{: aria-label='Methods' }

___
### PowerReq ()
{: aria-label='Methods' }
#### PowerReadyState :PowerReq ([ActivatedPowerRequirements](../Hyperspace/ActivatedPowerRequirements) req)
{: aria-label='Methods' }

___
### PrepareAnimation ()
{: aria-label='Methods' }
#### void :PrepareAnimation ()
{: aria-label='Methods' }

___
### PreparePower ()
{: aria-label='Methods' }
#### void :PreparePower ()
{: aria-label='Methods' }

___
### PrepareTemporaryAnimation ()
{: aria-label='Methods' }
#### void :PrepareTemporaryAnimation ()
{: aria-label='Methods' }

___
### TemporaryPowerFinished ()
{: aria-label='Methods' }
#### void :TemporaryPowerFinished ()
{: aria-label='Methods' }

___


## Fields
### crew (Read-only)
{: aria-label='Fields' }
#### [CrewMember](../Hyperspace/CrewMember) .crew
{: aria-label='Fields' }
**read-only**

___
### crew_ex (Read-only)
{: aria-label='Fields' }
#### [CrewMember_Extend](../Hyperspace/CrewMember_Extend) .crew_ex
{: aria-label='Fields' }
**read-only**

___
### def (Read-only)
{: aria-label='Fields' }
#### [ActivatedPowerDefinition](../Hyperspace/ActivatedPowerDefinition) .def
{: aria-label='Fields' }
**read-only**

___
### effectAnim (Read-only)
{: aria-label='Fields' }
#### [Animation](../Hyperspace/Animation) .effectAnim
{: aria-label='Fields' }

___
### effectFinishAnim (Read-only)
{: aria-label='Fields' }
#### [Animation](../Hyperspace/Animation) .effectFinishAnim
{: aria-label='Fields' }

___
### effectPos
{: aria-label='Fields' }
#### [Pointf](../Hyperspace/Pointf) .effectPos
{: aria-label='Fields' }

___
### effectWorldPos
{: aria-label='Fields' }
#### [Pointf](../Hyperspace/Pointf) .effectWorldPos
{: aria-label='Fields' }

___
### enabled
{: aria-label='Fields' }
#### boolean .enabled
{: aria-label='Fields' }

___
### extraAnims
{: aria-label='Fields' }
#### vector\<[Animation](../Hyperspace/Animation)\> .extraAnims
{: aria-label='Fields' }

___
### modifiedChargesPerJump
{: aria-label='Fields' }
#### number .modifiedChargesPerJump
{: aria-label='Fields' }

___
### modifiedPowerCharges
{: aria-label='Fields' }
#### number .modifiedPowerCharges
{: aria-label='Fields' }

___
### powerActivated
{: aria-label='Fields' }
#### boolean .powerActivated
{: aria-label='Fields' }

___
### powerCharges
{: aria-label='Fields' }
#### pair\<integer, integer\> .powerCharges
{: aria-label='Fields' }

___
### powerCooldown
{: aria-label='Fields' }
#### pair\<number, number\> .powerCooldown
{: aria-label='Fields' }

___
### powerDone
{: aria-label='Fields' }
#### boolean .powerDone
{: aria-label='Fields' }

___
### powerResources (Read-only)
{: aria-label='Fields' }
#### vector\<[ActivatedPowerResource](../Hyperspace/ActivatedPowerResource)\> .powerResources
{: aria-label='Fields' }

___
### powerRoom
{: aria-label='Fields' }
#### integer .powerRoom
{: aria-label='Fields' }

___
### powerShip
{: aria-label='Fields' }
#### integer .powerShip
{: aria-label='Fields' }

___
### tempEffectAnim (Read-only)
{: aria-label='Fields' }
#### [Animation](../Hyperspace/Animation) .tempEffectAnim
{: aria-label='Fields' }

___
### tempEffectStrip
{: aria-label='Fields' }
#### [GL_Texture](../Graphics/GL_Texture) .tempEffectStrip
{: aria-label='Fields' }

___
### temporaryPowerActive
{: aria-label='Fields' }
#### boolean .temporaryPowerActive
{: aria-label='Fields' }

___
### temporaryPowerDone
{: aria-label='Fields' }
#### boolean .temporaryPowerDone
{: aria-label='Fields' }

___
### temporaryPowerDuration
{: aria-label='Fields' }
#### pair\<number, number\> .temporaryPowerDuration
{: aria-label='Fields' }

___
