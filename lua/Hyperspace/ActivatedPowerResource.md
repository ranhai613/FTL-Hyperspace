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
### GetLinkedPowers ()
{: aria-label='Functions' }
#### void :GetLinkedPowers ()
{: aria-label='Functions' }

______
### OnUpdate ()
{: aria-label='Functions' }
#### void :OnUpdate ()
{: aria-label='Functions' }

______
### PowerReq ()
{: aria-label='Functions' }
#### PowerReadyState :PowerReq ([ActivatedPowerRequirements](../Hyperspace/ActivatedPowerRequirements) req)
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
#### [PowerResourceDefinition](../Hyperspace/PowerResourceDefinition) .def
{: aria-label='Variables' }
**read-only**

______
### enabled
{: aria-label='Variables' }
#### boolean .enabled
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
### powerCharges
{: aria-label='Variables' }
#### pair\<integer, integer\> .powerCharges
{: aria-label='Variables' }

______
### powerCooldown
{: aria-label='Variables' }
#### pair\<number, number\> .powerCooldown
{: aria-label='Variables' }

___
