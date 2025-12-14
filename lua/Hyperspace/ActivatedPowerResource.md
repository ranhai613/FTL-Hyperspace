---
layout: lua
title: ActivatedPowerResource
lang: en
category: Class
---

# Class "ActivatedPowerResource"


## Constructors
{: #Constructors .lua-content-section}
### ActivatedPowerResource ()
{: #ActivatedPowerResource .lua-content-item aria-label='Constructors' }
#### [ActivatedPowerResource](../Hyperspace/ActivatedPowerResource) ActivatedPowerResource ([PowerResourceDefinition](../Hyperspace/PowerResourceDefinition) _def)
{: aria-label='Constructors' }

___
### ActivatedPowerResource ()
{: #ActivatedPowerResource .lua-content-item aria-label='Constructors' }
#### [ActivatedPowerResource](../Hyperspace/ActivatedPowerResource) ActivatedPowerResource ([PowerResourceDefinition](../Hyperspace/PowerResourceDefinition) _def, [CrewMember](../Hyperspace/CrewMember) _crew, [CrewMember_Extend](../Hyperspace/CrewMember_Extend) _ex)
{: aria-label='Constructors' }

___
### ActivatedPowerResource ()
{: #ActivatedPowerResource .lua-content-item aria-label='Constructors' }
#### [ActivatedPowerResource](../Hyperspace/ActivatedPowerResource) ActivatedPowerResource ([PowerResourceDefinition](../Hyperspace/PowerResourceDefinition) _def, [CrewMember](../Hyperspace/CrewMember) _crew)
{: aria-label='Constructors' }

___
### ActivatedPowerResource ()
{: #ActivatedPowerResource .lua-content-item aria-label='Constructors' }
#### [ActivatedPowerResource](../Hyperspace/ActivatedPowerResource) ActivatedPowerResource ([PowerResourceDefinition](../Hyperspace/PowerResourceDefinition) _def, [CrewMember_Extend](../Hyperspace/CrewMember_Extend) _ex)
{: aria-label='Constructors' }

___




## Methods
{: #Methods .lua-content-section}
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
### GetLinkedPowers ()
{: #GetLinkedPowers .lua-content-item aria-label='Methods' }
#### void :GetLinkedPowers ()
{: aria-label='Methods' }

___
### OnUpdate ()
{: #OnUpdate .lua-content-item aria-label='Methods' }
#### void :OnUpdate ()
{: aria-label='Methods' }

___
### PowerReq ()
{: #PowerReq .lua-content-item aria-label='Methods' }
#### PowerReadyState :PowerReq ([ActivatedPowerRequirements](../Hyperspace/ActivatedPowerRequirements) req)
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
#### [PowerResourceDefinition](../Hyperspace/PowerResourceDefinition) .def
{: aria-label='Fields' }
**read-only**

___
### enabled
{: #enabled .lua-content-item aria-label='Fields' }
#### boolean .enabled
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
