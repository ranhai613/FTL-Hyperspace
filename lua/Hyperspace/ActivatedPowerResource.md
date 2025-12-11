---
layout: lua
title: ActivatedPowerResource
lang: en
---

# Class "ActivatedPowerResource"


## Constructors
### ActivatedPowerResource ()
{: aria-label='Constructors' }
#### [ActivatedPowerResource](../Hyperspace/ActivatedPowerResource) ActivatedPowerResource ([PowerResourceDefinition](../Hyperspace/PowerResourceDefinition) _def)
{: aria-label='Constructors' }

______
### ActivatedPowerResource ()
{: aria-label='Constructors' }
#### [ActivatedPowerResource](../Hyperspace/ActivatedPowerResource) ActivatedPowerResource ([PowerResourceDefinition](../Hyperspace/PowerResourceDefinition) _def, [CrewMember](../Hyperspace/CrewMember) _crew, [CrewMember_Extend](../Hyperspace/CrewMember_Extend) _ex)
{: aria-label='Constructors' }

______
### ActivatedPowerResource ()
{: aria-label='Constructors' }
#### [ActivatedPowerResource](../Hyperspace/ActivatedPowerResource) ActivatedPowerResource ([PowerResourceDefinition](../Hyperspace/PowerResourceDefinition) _def, [CrewMember](../Hyperspace/CrewMember) _crew)
{: aria-label='Constructors' }

______
### ActivatedPowerResource ()
{: aria-label='Constructors' }
#### [ActivatedPowerResource](../Hyperspace/ActivatedPowerResource) ActivatedPowerResource ([PowerResourceDefinition](../Hyperspace/PowerResourceDefinition) _def, [CrewMember_Extend](../Hyperspace/CrewMember_Extend) _ex)
{: aria-label='Constructors' }

___




## Methods
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
### GetLinkedPowers ()
{: aria-label='Methods' }
#### void :GetLinkedPowers ()
{: aria-label='Methods' }

______
### OnUpdate ()
{: aria-label='Methods' }
#### void :OnUpdate ()
{: aria-label='Methods' }

______
### PowerReq ()
{: aria-label='Methods' }
#### PowerReadyState :PowerReq ([ActivatedPowerRequirements](../Hyperspace/ActivatedPowerRequirements) req)
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
#### [PowerResourceDefinition](../Hyperspace/PowerResourceDefinition) .def
{: aria-label='Fields' }
**read-only**

______
### enabled
{: aria-label='Fields' }
#### boolean .enabled
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
### powerCharges
{: aria-label='Fields' }
#### pair\<integer, integer\> .powerCharges
{: aria-label='Fields' }

______
### powerCooldown
{: aria-label='Fields' }
#### pair\<number, number\> .powerCooldown
{: aria-label='Fields' }

___
