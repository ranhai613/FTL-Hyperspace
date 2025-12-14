---
layout: lua
title: ActivatedPower
lang: en
category: Class
---

# Class "ActivatedPower"


## Constructors
{: #Constructors .lua-content-section}
### ActivatedPower ()
{: #ActivatedPower .lua-content-item aria-label='Constructors' }
#### [ActivatedPower](../Hyperspace/ActivatedPower) ActivatedPower ([ActivatedPowerDefinition](../Hyperspace/ActivatedPowerDefinition) _def)
{: aria-label='Constructors' }

___
### ActivatedPower ()
{: #ActivatedPower .lua-content-item aria-label='Constructors' }
#### [ActivatedPower](../Hyperspace/ActivatedPower) ActivatedPower ([ActivatedPowerDefinition](../Hyperspace/ActivatedPowerDefinition) _def, [CrewMember](../Hyperspace/CrewMember) _crew, [CrewMember_Extend](../Hyperspace/CrewMember_Extend) _ex)
{: aria-label='Constructors' }

___
### ActivatedPower ()
{: #ActivatedPower .lua-content-item aria-label='Constructors' }
#### [ActivatedPower](../Hyperspace/ActivatedPower) ActivatedPower ([ActivatedPowerDefinition](../Hyperspace/ActivatedPowerDefinition) _def, [CrewMember](../Hyperspace/CrewMember) _crew)
{: aria-label='Constructors' }

___
### ActivatedPower ()
{: #ActivatedPower .lua-content-item aria-label='Constructors' }
#### [ActivatedPower](../Hyperspace/ActivatedPower) ActivatedPower ([ActivatedPowerDefinition](../Hyperspace/ActivatedPowerDefinition) _def, [CrewMember_Extend](../Hyperspace/CrewMember_Extend) _ex)
{: aria-label='Constructors' }

___




## Methods
{: #Methods .lua-content-section}
### ActivatePower ()
{: #ActivatePower .lua-content-item aria-label='Methods' }
#### void :ActivatePower ()
{: aria-label='Methods' }

___
### ActivateTemporaryPower ()
{: #ActivateTemporaryPower .lua-content-item aria-label='Methods' }
#### void :ActivateTemporaryPower ()
{: aria-label='Methods' }

___
### CancelPower ()
{: #CancelPower .lua-content-item aria-label='Methods' }
#### void :CancelPower (boolean clearAnim)
{: aria-label='Methods' }

___
### ChangePowerDef ()
{: #ChangePowerDef .lua-content-item aria-label='Methods' }
#### void :ChangePowerDef ([ActivatedPowerDefinition](../Hyperspace/ActivatedPowerDefinition) newDef)
{: aria-label='Methods' }

___
### DisablePower ()
{: #DisablePower .lua-content-item aria-label='Methods' }
#### void :DisablePower ()
{: aria-label='Methods' }

___
### EnableInit ()
{: #EnableInit .lua-content-item aria-label='Methods' }
#### void :EnableInit ()
{: aria-label='Methods' }

___
### EnablePower ()
{: #EnablePower .lua-content-item aria-label='Methods' }
#### void :EnablePower ()
{: aria-label='Methods' }

___
### GetCrewBoxResourceWidth ()
{: #GetCrewBoxResourceWidth .lua-content-item aria-label='Methods' }
#### integer :GetCrewBoxResourceWidth (integer mode)
{: aria-label='Methods' }

___
### GetPowerDamage ()
{: #GetPowerDamage .lua-content-item aria-label='Methods' }
#### [Damage](../Hyperspace/Damage) :GetPowerDamage ()
{: aria-label='Methods' }

___
### OnUpdate ()
{: #OnUpdate .lua-content-item aria-label='Methods' }
#### void :OnUpdate ()
{: aria-label='Methods' }

___
### PowerReady ()
{: #PowerReady .lua-content-item aria-label='Methods' }
#### PowerReadyState :PowerReady ()
{: aria-label='Methods' }

___
### PowerReq ()
{: #PowerReq .lua-content-item aria-label='Methods' }
#### PowerReadyState :PowerReq ([ActivatedPowerRequirements](../Hyperspace/ActivatedPowerRequirements) req)
{: aria-label='Methods' }

___
### PrepareAnimation ()
{: #PrepareAnimation .lua-content-item aria-label='Methods' }
#### void :PrepareAnimation ()
{: aria-label='Methods' }

___
### PreparePower ()
{: #PreparePower .lua-content-item aria-label='Methods' }
#### void :PreparePower ()
{: aria-label='Methods' }

___
### PrepareTemporaryAnimation ()
{: #PrepareTemporaryAnimation .lua-content-item aria-label='Methods' }
#### void :PrepareTemporaryAnimation ()
{: aria-label='Methods' }

___
### TemporaryPowerFinished ()
{: #TemporaryPowerFinished .lua-content-item aria-label='Methods' }
#### void :TemporaryPowerFinished ()
{: aria-label='Methods' }

___


## Fields
{: #Fields .lua-content-section}
### crew (Read-only)
{: #crew .lua-content-item aria-label='Fields' }
#### [CrewMember](../Hyperspace/CrewMember) .crew
{: aria-label='Fields' }
**read-only**

___
### crew_ex (Read-only)
{: #crew_ex .lua-content-item aria-label='Fields' }
#### [CrewMember_Extend](../Hyperspace/CrewMember_Extend) .crew_ex
{: aria-label='Fields' }
**read-only**

___
### def (Read-only)
{: #def .lua-content-item aria-label='Fields' }
#### [ActivatedPowerDefinition](../Hyperspace/ActivatedPowerDefinition) .def
{: aria-label='Fields' }
**read-only**

___
### effectAnim (Read-only)
{: #effectAnim .lua-content-item aria-label='Fields' }
#### [Animation](../Hyperspace/Animation) .effectAnim
{: aria-label='Fields' }

___
### effectFinishAnim (Read-only)
{: #effectFinishAnim .lua-content-item aria-label='Fields' }
#### [Animation](../Hyperspace/Animation) .effectFinishAnim
{: aria-label='Fields' }

___
### effectPos
{: #effectPos .lua-content-item aria-label='Fields' }
#### [Pointf](../Hyperspace/Pointf) .effectPos
{: aria-label='Fields' }

___
### effectWorldPos
{: #effectWorldPos .lua-content-item aria-label='Fields' }
#### [Pointf](../Hyperspace/Pointf) .effectWorldPos
{: aria-label='Fields' }

___
### enabled
{: #enabled .lua-content-item aria-label='Fields' }
#### boolean .enabled
{: aria-label='Fields' }

___
### extraAnims
{: #extraAnims .lua-content-item aria-label='Fields' }
#### vector\<[Animation](../Hyperspace/Animation)\> .extraAnims
{: aria-label='Fields' }

___
### modifiedChargesPerJump
{: #modifiedChargesPerJump .lua-content-item aria-label='Fields' }
#### number .modifiedChargesPerJump
{: aria-label='Fields' }

___
### modifiedPowerCharges
{: #modifiedPowerCharges .lua-content-item aria-label='Fields' }
#### number .modifiedPowerCharges
{: aria-label='Fields' }

___
### powerActivated
{: #powerActivated .lua-content-item aria-label='Fields' }
#### boolean .powerActivated
{: aria-label='Fields' }

___
### powerCharges
{: #powerCharges .lua-content-item aria-label='Fields' }
#### pair\<integer, integer\> .powerCharges
{: aria-label='Fields' }

___
### powerCooldown
{: #powerCooldown .lua-content-item aria-label='Fields' }
#### pair\<number, number\> .powerCooldown
{: aria-label='Fields' }

___
### powerDone
{: #powerDone .lua-content-item aria-label='Fields' }
#### boolean .powerDone
{: aria-label='Fields' }

___
### powerResources (Read-only)
{: #powerResources .lua-content-item aria-label='Fields' }
#### vector\<[ActivatedPowerResource](../Hyperspace/ActivatedPowerResource)\> .powerResources
{: aria-label='Fields' }

___
### powerRoom
{: #powerRoom .lua-content-item aria-label='Fields' }
#### integer .powerRoom
{: aria-label='Fields' }

___
### powerShip
{: #powerShip .lua-content-item aria-label='Fields' }
#### integer .powerShip
{: aria-label='Fields' }

___
### tempEffectAnim (Read-only)
{: #tempEffectAnim .lua-content-item aria-label='Fields' }
#### [Animation](../Hyperspace/Animation) .tempEffectAnim
{: aria-label='Fields' }

___
### tempEffectStrip
{: #tempEffectStrip .lua-content-item aria-label='Fields' }
#### [GL_Texture](../Graphics/GL_Texture) .tempEffectStrip
{: aria-label='Fields' }

___
### temporaryPowerActive
{: #temporaryPowerActive .lua-content-item aria-label='Fields' }
#### boolean .temporaryPowerActive
{: aria-label='Fields' }

___
### temporaryPowerDone
{: #temporaryPowerDone .lua-content-item aria-label='Fields' }
#### boolean .temporaryPowerDone
{: aria-label='Fields' }

___
### temporaryPowerDuration
{: #temporaryPowerDuration .lua-content-item aria-label='Fields' }
#### pair\<number, number\> .temporaryPowerDuration
{: aria-label='Fields' }

___
