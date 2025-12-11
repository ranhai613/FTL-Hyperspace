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

______
### ActivatedPower ()
{: aria-label='Constructors' }
#### [ActivatedPower](../Hyperspace/ActivatedPower) ActivatedPower ([ActivatedPowerDefinition](../Hyperspace/ActivatedPowerDefinition) _def, [CrewMember](../Hyperspace/CrewMember) _crew, [CrewMember_Extend](../Hyperspace/CrewMember_Extend) _ex)
{: aria-label='Constructors' }

______
### ActivatedPower ()
{: aria-label='Constructors' }
#### [ActivatedPower](../Hyperspace/ActivatedPower) ActivatedPower ([ActivatedPowerDefinition](../Hyperspace/ActivatedPowerDefinition) _def, [CrewMember](../Hyperspace/CrewMember) _crew)
{: aria-label='Constructors' }

______
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

______
### ActivateTemporaryPower ()
{: aria-label='Methods' }
#### void :ActivateTemporaryPower ()
{: aria-label='Methods' }

______
### CancelPower ()
{: aria-label='Methods' }
#### void :CancelPower (boolean clearAnim)
{: aria-label='Methods' }

______
### ChangePowerDef ()
{: aria-label='Methods' }
#### void :ChangePowerDef ([ActivatedPowerDefinition](../Hyperspace/ActivatedPowerDefinition) newDef)
{: aria-label='Methods' }

______
### DisablePower ()
{: aria-label='Methods' }
#### void :DisablePower ()
{: aria-label='Methods' }

______
### EnableInit ()
{: aria-label='Methods' }
#### void :EnableInit ()
{: aria-label='Methods' }

______
### EnablePower ()
{: aria-label='Methods' }
#### void :EnablePower ()
{: aria-label='Methods' }

______
### GetCrewBoxResourceWidth ()
{: aria-label='Methods' }
#### integer :GetCrewBoxResourceWidth (integer mode)
{: aria-label='Methods' }

______
### GetPowerDamage ()
{: aria-label='Methods' }
#### [Damage](../Hyperspace/Damage) :GetPowerDamage ()
{: aria-label='Methods' }

______
### OnUpdate ()
{: aria-label='Methods' }
#### void :OnUpdate ()
{: aria-label='Methods' }

______
### PowerReady ()
{: aria-label='Methods' }
#### PowerReadyState :PowerReady ()
{: aria-label='Methods' }

______
### PowerReq ()
{: aria-label='Methods' }
#### PowerReadyState :PowerReq ([ActivatedPowerRequirements](../Hyperspace/ActivatedPowerRequirements) req)
{: aria-label='Methods' }

______
### PrepareAnimation ()
{: aria-label='Methods' }
#### void :PrepareAnimation ()
{: aria-label='Methods' }

______
### PreparePower ()
{: aria-label='Methods' }
#### void :PreparePower ()
{: aria-label='Methods' }

______
### PrepareTemporaryAnimation ()
{: aria-label='Methods' }
#### void :PrepareTemporaryAnimation ()
{: aria-label='Methods' }

______
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

______
### crew_ex (Read-only)
{: aria-label='Fields' }
#### [CrewMember_Extend](../Hyperspace/CrewMember_Extend) .crew_ex
{: aria-label='Fields' }
**read-only**

______
### def (Read-only)
{: aria-label='Fields' }
#### [ActivatedPowerDefinition](../Hyperspace/ActivatedPowerDefinition) .def
{: aria-label='Fields' }
**read-only**

______
### effectAnim (Read-only)
{: aria-label='Fields' }
#### [Animation](../Hyperspace/Animation) .effectAnim
{: aria-label='Fields' }

______
### effectFinishAnim (Read-only)
{: aria-label='Fields' }
#### [Animation](../Hyperspace/Animation) .effectFinishAnim
{: aria-label='Fields' }

______
### effectPos
{: aria-label='Fields' }
#### [Pointf](../Hyperspace/Pointf) .effectPos
{: aria-label='Fields' }

______
### effectWorldPos
{: aria-label='Fields' }
#### [Pointf](../Hyperspace/Pointf) .effectWorldPos
{: aria-label='Fields' }

______
### enabled
{: aria-label='Fields' }
#### boolean .enabled
{: aria-label='Fields' }

______
### extraAnims
{: aria-label='Fields' }
#### vector\<[Animation](../Hyperspace/Animation)\> .extraAnims
{: aria-label='Fields' }

______
### modifiedChargesPerJump
{: aria-label='Fields' }
#### number .modifiedChargesPerJump
{: aria-label='Fields' }

______
### modifiedPowerCharges
{: aria-label='Fields' }
#### number .modifiedPowerCharges
{: aria-label='Fields' }

______
### powerActivated
{: aria-label='Fields' }
#### boolean .powerActivated
{: aria-label='Fields' }

______
### powerCharges
{: aria-label='Fields' }
#### pair\<integer, integer\> .powerCharges
{: aria-label='Fields' }

______
### powerCooldown
{: aria-label='Fields' }
#### pair\<number, number\> .powerCooldown
{: aria-label='Fields' }

______
### powerDone
{: aria-label='Fields' }
#### boolean .powerDone
{: aria-label='Fields' }

______
### powerResources (Read-only)
{: aria-label='Fields' }
#### vector\<[ActivatedPowerResource](../Hyperspace/ActivatedPowerResource)\> .powerResources
{: aria-label='Fields' }

______
### powerRoom
{: aria-label='Fields' }
#### integer .powerRoom
{: aria-label='Fields' }

______
### powerShip
{: aria-label='Fields' }
#### integer .powerShip
{: aria-label='Fields' }

______
### tempEffectAnim (Read-only)
{: aria-label='Fields' }
#### [Animation](../Hyperspace/Animation) .tempEffectAnim
{: aria-label='Fields' }

______
### tempEffectStrip
{: aria-label='Fields' }
#### [GL_Texture](../Graphics/GL_Texture) .tempEffectStrip
{: aria-label='Fields' }

______
### temporaryPowerActive
{: aria-label='Fields' }
#### boolean .temporaryPowerActive
{: aria-label='Fields' }

______
### temporaryPowerDone
{: aria-label='Fields' }
#### boolean .temporaryPowerDone
{: aria-label='Fields' }

______
### temporaryPowerDuration
{: aria-label='Fields' }
#### pair\<number, number\> .temporaryPowerDuration
{: aria-label='Fields' }

___
