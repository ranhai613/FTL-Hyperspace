---
layout: lua
title: ActivatedPowerResource
lang: en
category: Class
---

# Class "ActivatedPowerResource"

<!-- Head content to be pulled from "lua-source-parts-inject/Hyperspace/ActivatedPowerResource/_head.md" -->


## Constructors
{: #Constructors .lua-content-section}
### ActivatedPowerResource ()
{: #ActivatedPowerResource .lua-content-item aria-label='Constructors' }
#### [ActivatedPowerResource](../Hyperspace/ActivatedPowerResource) ActivatedPowerResource ([PowerResourceDefinition](../Hyperspace/PowerResourceDefinition) _def)
{: aria-label='Constructors' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ActivatedPowerResource/ActivatedPowerResource(Hyperspace.PowerResourceDefinition).md" -->

___
### ActivatedPowerResource ()
{: #ActivatedPowerResource .lua-content-item aria-label='Constructors' }
#### [ActivatedPowerResource](../Hyperspace/ActivatedPowerResource) ActivatedPowerResource ([PowerResourceDefinition](../Hyperspace/PowerResourceDefinition) _def, [CrewMember](../Hyperspace/CrewMember) _crew, [CrewMember_Extend](../Hyperspace/CrewMember_Extend) _ex)
{: aria-label='Constructors' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ActivatedPowerResource/ActivatedPowerResource(Hyperspace.PowerResourceDefinition,Hyperspace.CrewMember,Hyperspace.CrewMember_Extend).md" -->

___
### ActivatedPowerResource ()
{: #ActivatedPowerResource .lua-content-item aria-label='Constructors' }
#### [ActivatedPowerResource](../Hyperspace/ActivatedPowerResource) ActivatedPowerResource ([PowerResourceDefinition](../Hyperspace/PowerResourceDefinition) _def, [CrewMember](../Hyperspace/CrewMember) _crew)
{: aria-label='Constructors' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ActivatedPowerResource/ActivatedPowerResource(Hyperspace.PowerResourceDefinition,Hyperspace.CrewMember).md" -->

___
### ActivatedPowerResource ()
{: #ActivatedPowerResource .lua-content-item aria-label='Constructors' }
#### [ActivatedPowerResource](../Hyperspace/ActivatedPowerResource) ActivatedPowerResource ([PowerResourceDefinition](../Hyperspace/PowerResourceDefinition) _def, [CrewMember_Extend](../Hyperspace/CrewMember_Extend) _ex)
{: aria-label='Constructors' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ActivatedPowerResource/ActivatedPowerResource(Hyperspace.PowerResourceDefinition,Hyperspace.CrewMember_Extend).md" -->

___




## Methods
{: #Methods .lua-content-section}
### DisablePower ()
{: #DisablePower .lua-content-item aria-label='Methods' }
#### void :DisablePower ()
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ActivatedPowerResource/DisablePower().md" -->

___
### EnableInit ()
{: #EnableInit .lua-content-item aria-label='Methods' }
#### void :EnableInit ()
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ActivatedPowerResource/EnableInit().md" -->

___
### EnablePower ()
{: #EnablePower .lua-content-item aria-label='Methods' }
#### void :EnablePower ()
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ActivatedPowerResource/EnablePower().md" -->

___
### GetCrewBoxResourceWidth ()
{: #GetCrewBoxResourceWidth .lua-content-item aria-label='Methods' }
#### integer :GetCrewBoxResourceWidth (integer mode)
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ActivatedPowerResource/GetCrewBoxResourceWidth(integer).md" -->

___
### GetLinkedPowers ()
{: #GetLinkedPowers .lua-content-item aria-label='Methods' }
#### void :GetLinkedPowers ()
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ActivatedPowerResource/GetLinkedPowers().md" -->

___
### OnUpdate ()
{: #OnUpdate .lua-content-item aria-label='Methods' }
#### void :OnUpdate ()
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ActivatedPowerResource/OnUpdate().md" -->

___
### PowerReq ()
{: #PowerReq .lua-content-item aria-label='Methods' }
#### PowerReadyState :PowerReq ([ActivatedPowerRequirements](../Hyperspace/ActivatedPowerRequirements) req)
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ActivatedPowerResource/PowerReq(Hyperspace.ActivatedPowerRequirements).md" -->

___


## Fields
{: #Fields .lua-content-section}
### crew (Read-only)
{: #crew .lua-content-item aria-label='Fields' }
#### [CrewMember](../Hyperspace/CrewMember) .crew
{: aria-label='Fields' }
<!-- Content pulled from "lua-source-parts-inject/Hyperspace/ActivatedPowerResource/crew.md" -->
**read-only**
<!-- End of content -->

___
### crew_ex (Read-only)
{: #crew_ex .lua-content-item aria-label='Fields' }
#### [CrewMember_Extend](../Hyperspace/CrewMember_Extend) .crew_ex
{: aria-label='Fields' }
<!-- Content pulled from "lua-source-parts-inject/Hyperspace/ActivatedPowerResource/crew_ex.md" -->
**read-only**
<!-- End of content -->

___
### def (Read-only)
{: #def .lua-content-item aria-label='Fields' }
#### [PowerResourceDefinition](../Hyperspace/PowerResourceDefinition) .def
{: aria-label='Fields' }
<!-- Content pulled from "lua-source-parts-inject/Hyperspace/ActivatedPowerResource/def.md" -->
**read-only**
<!-- End of content -->

___
### enabled
{: #enabled .lua-content-item aria-label='Fields' }
#### boolean .enabled
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ActivatedPowerResource/enabled.md" -->

___
### modifiedChargesPerJump
{: #modifiedChargesPerJump .lua-content-item aria-label='Fields' }
#### number .modifiedChargesPerJump
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ActivatedPowerResource/modifiedChargesPerJump.md" -->

___
### modifiedPowerCharges
{: #modifiedPowerCharges .lua-content-item aria-label='Fields' }
#### number .modifiedPowerCharges
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ActivatedPowerResource/modifiedPowerCharges.md" -->

___
### powerCharges
{: #powerCharges .lua-content-item aria-label='Fields' }
#### pair\<integer, integer\> .powerCharges
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ActivatedPowerResource/powerCharges.md" -->

___
### powerCooldown
{: #powerCooldown .lua-content-item aria-label='Fields' }
#### pair\<number, number\> .powerCooldown
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ActivatedPowerResource/powerCooldown.md" -->

___
