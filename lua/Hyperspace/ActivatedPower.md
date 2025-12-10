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
{: aria-label='Functions' }
#### void :ActivatePower ()
{: aria-label='Functions' }

______
### ActivateTemporaryPower ()
{: aria-label='Functions' }
#### void :ActivateTemporaryPower ()
{: aria-label='Functions' }

______
### CancelPower ()
{: aria-label='Functions' }
#### void :CancelPower (boolean clearAnim)
{: aria-label='Functions' }

______
### ChangePowerDef ()
{: aria-label='Functions' }
#### void :ChangePowerDef ([ActivatedPowerDefinition](../Hyperspace/ActivatedPowerDefinition) newDef)
{: aria-label='Functions' }

______
### DisablePower ()
{: aria-label='Functions' }
#### void :DisablePower ()
{: aria-label='Functions' }

______
### EnableInit ()
{: aria-label='Functions' }
#### void :EnableInit ()
{: aria-label='Functions' }

______
### EnablePower ()
{: aria-label='Functions' }
#### void :EnablePower ()
{: aria-label='Functions' }

______
### GetCrewBoxResourceWidth ()
{: aria-label='Functions' }
#### integer :GetCrewBoxResourceWidth (integer mode)
{: aria-label='Functions' }

______
### GetPowerDamage ()
{: aria-label='Functions' }
#### [Damage](../Hyperspace/Damage) :GetPowerDamage ()
{: aria-label='Functions' }

______
### OnUpdate ()
{: aria-label='Functions' }
#### void :OnUpdate ()
{: aria-label='Functions' }

______
### PowerReady ()
{: aria-label='Functions' }
#### PowerReadyState :PowerReady ()
{: aria-label='Functions' }

______
### PowerReq ()
{: aria-label='Functions' }
#### PowerReadyState :PowerReq ([ActivatedPowerRequirements](../Hyperspace/ActivatedPowerRequirements) req)
{: aria-label='Functions' }

______
### PrepareAnimation ()
{: aria-label='Functions' }
#### void :PrepareAnimation ()
{: aria-label='Functions' }

______
### PreparePower ()
{: aria-label='Functions' }
#### void :PreparePower ()
{: aria-label='Functions' }

______
### PrepareTemporaryAnimation ()
{: aria-label='Functions' }
#### void :PrepareTemporaryAnimation ()
{: aria-label='Functions' }

______
### TemporaryPowerFinished ()
{: aria-label='Functions' }
#### void :TemporaryPowerFinished ()
{: aria-label='Functions' }

___


## Fields
### crew (Read-only)
{: aria-label='Variables' }
#### [CrewMember](../Hyperspace/CrewMember) .crew
{: aria-label='Variables' }
**read-only**

______
### crew_ex (Read-only)
{: aria-label='Variables' }
#### [CrewMember_Extend](../Hyperspace/CrewMember_Extend) .crew_ex
{: aria-label='Variables' }
**read-only**

______
### def (Read-only)
{: aria-label='Variables' }
#### [ActivatedPowerDefinition](../Hyperspace/ActivatedPowerDefinition) .def
{: aria-label='Variables' }
**read-only**

______
### effectAnim (Read-only)
{: aria-label='Variables' }
#### [Animation](../Hyperspace/Animation) .effectAnim
{: aria-label='Variables' }

______
### effectFinishAnim (Read-only)
{: aria-label='Variables' }
#### [Animation](../Hyperspace/Animation) .effectFinishAnim
{: aria-label='Variables' }

______
### effectPos
{: aria-label='Variables' }
#### [Pointf](../Hyperspace/Pointf) .effectPos
{: aria-label='Variables' }

______
### effectWorldPos
{: aria-label='Variables' }
#### [Pointf](../Hyperspace/Pointf) .effectWorldPos
{: aria-label='Variables' }

______
### enabled
{: aria-label='Variables' }
#### boolean .enabled
{: aria-label='Variables' }

______
### extraAnims
{: aria-label='Variables' }
#### vector\<[Animation](../Hyperspace/Animation)\> .extraAnims
{: aria-label='Variables' }

______
### modifiedChargesPerJump
{: aria-label='Variables' }
#### number .modifiedChargesPerJump
{: aria-label='Variables' }

______
### modifiedPowerCharges
{: aria-label='Variables' }
#### number .modifiedPowerCharges
{: aria-label='Variables' }

______
### powerActivated
{: aria-label='Variables' }
#### boolean .powerActivated
{: aria-label='Variables' }

______
### powerCharges
{: aria-label='Variables' }
#### pair\<integer, integer\> .powerCharges
{: aria-label='Variables' }

______
### powerCooldown
{: aria-label='Variables' }
#### pair\<number, number\> .powerCooldown
{: aria-label='Variables' }

______
### powerDone
{: aria-label='Variables' }
#### boolean .powerDone
{: aria-label='Variables' }

______
### powerResources (Read-only)
{: aria-label='Variables' }
#### vector\<[ActivatedPowerResource](../Hyperspace/ActivatedPowerResource)\> .powerResources
{: aria-label='Variables' }

______
### powerRoom
{: aria-label='Variables' }
#### integer .powerRoom
{: aria-label='Variables' }

______
### powerShip
{: aria-label='Variables' }
#### integer .powerShip
{: aria-label='Variables' }

______
### tempEffectAnim (Read-only)
{: aria-label='Variables' }
#### [Animation](../Hyperspace/Animation) .tempEffectAnim
{: aria-label='Variables' }

______
### tempEffectStrip
{: aria-label='Variables' }
#### [GL_Texture](../Graphics/GL_Texture) .tempEffectStrip
{: aria-label='Variables' }

______
### temporaryPowerActive
{: aria-label='Variables' }
#### boolean .temporaryPowerActive
{: aria-label='Variables' }

______
### temporaryPowerDone
{: aria-label='Variables' }
#### boolean .temporaryPowerDone
{: aria-label='Variables' }

______
### temporaryPowerDuration
{: aria-label='Variables' }
#### pair\<number, number\> .temporaryPowerDuration
{: aria-label='Variables' }

___
