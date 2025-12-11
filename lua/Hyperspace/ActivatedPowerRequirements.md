---
layout: lua
title: ActivatedPowerRequirements
lang: en
---

# Class "ActivatedPowerRequirements"


## Constructors
{: #Constructors .section}
### ActivatedPowerRequirements ()
{: #ActivatedPowerRequirements aria-label='Constructors' }
#### [ActivatedPowerRequirements](../Hyperspace/ActivatedPowerRequirements) ActivatedPowerRequirements ()
{: aria-label='Constructors' }

___
### ActivatedPowerRequirements ()
{: #ActivatedPowerRequirements aria-label='Constructors' }
#### [ActivatedPowerRequirements](../Hyperspace/ActivatedPowerRequirements) ActivatedPowerRequirements ([ActivatedPowerRequirements.Type](../Hyperspace/ActivatedPowerRequirements.Type) unknown)
{: aria-label='Constructors' }

___


## Constants
{: #Constants .section}
### ActivatedPowerRequirements.Type_CHARGE
{: #Type_CHARGE aria-label='Constants' }
Equivalent to `2`.

___
### ActivatedPowerRequirements.Type_ENEMY
{: #Type_ENEMY aria-label='Constants' }
Equivalent to `1`.

___
### ActivatedPowerRequirements.Type_PLAYER
{: #Type_PLAYER aria-label='Constants' }
Equivalent to `0`.

___
### ActivatedPowerRequirements.Type_UNKNOWN
{: #Type_UNKNOWN aria-label='Constants' }
Equivalent to `3`.

___




## Fields
{: #Fields .section}
### aiDisabled
{: #aiDisabled aria-label='Fields' }
#### boolean .aiDisabled
{: aria-label='Fields' }

___
### checkRoomCrew
{: #checkRoomCrew aria-label='Fields' }
#### boolean .checkRoomCrew
{: aria-label='Fields' }

___
### enemyBlackList
{: #enemyBlackList aria-label='Fields' }
#### vector\<string\> .enemyBlackList
{: aria-label='Fields' }

___
### enemyInRoom
{: #enemyInRoom aria-label='Fields' }
#### boolean .enemyInRoom
{: aria-label='Fields' }

___
### enemyShip
{: #enemyShip aria-label='Fields' }
#### boolean .enemyShip
{: aria-label='Fields' }

___
### enemyWhiteList
{: #enemyWhiteList aria-label='Fields' }
#### vector\<string\> .enemyWhiteList
{: aria-label='Fields' }

___
### extraConditions
{: #extraConditions aria-label='Fields' }
#### vector\<[CrewExtraCondition](../pair<Hyperspace/CrewExtraCondition), boolean>\> .extraConditions
{: aria-label='Fields' }

___
### extraOrConditions
{: #extraOrConditions aria-label='Fields' }
#### vector\<[CrewExtraCondition](../pair<Hyperspace/CrewExtraCondition), boolean>\> .extraOrConditions
{: aria-label='Fields' }

___
### extraOrConditionsTooltip
{: #extraOrConditionsTooltip aria-label='Fields' }
#### [TextString](../Hyperspace/TextString) .extraOrConditionsTooltip
{: aria-label='Fields' }

___
### friendlyBlackList
{: #friendlyBlackList aria-label='Fields' }
#### vector\<string\> .friendlyBlackList
{: aria-label='Fields' }

___
### friendlyInRoom
{: #friendlyInRoom aria-label='Fields' }
#### boolean .friendlyInRoom
{: aria-label='Fields' }

___
### friendlyWhiteList
{: #friendlyWhiteList aria-label='Fields' }
#### vector\<string\> .friendlyWhiteList
{: aria-label='Fields' }

___
### hasClonebay
{: #hasClonebay aria-label='Fields' }
#### boolean .hasClonebay
{: aria-label='Fields' }

___
### inCombat
{: #inCombat aria-label='Fields' }
#### boolean .inCombat
{: aria-label='Fields' }

___
### maxHealth
{: #maxHealth aria-label='Fields' }
#### ToggleValue\<integer\> .maxHealth
{: aria-label='Fields' }

___
### minHealth
{: #minHealth aria-label='Fields' }
#### ToggleValue\<integer\> .minHealth
{: aria-label='Fields' }

___
### outOfCombat
{: #outOfCombat aria-label='Fields' }
#### boolean .outOfCombat
{: aria-label='Fields' }

___
### playerShip
{: #playerShip aria-label='Fields' }
#### boolean .playerShip
{: aria-label='Fields' }

___
### requiredSystem
{: #requiredSystem aria-label='Fields' }
#### integer .requiredSystem
{: aria-label='Fields' }

___
### requiredSystemFunctional
{: #requiredSystemFunctional aria-label='Fields' }
#### boolean .requiredSystemFunctional
{: aria-label='Fields' }

___
### systemDamaged
{: #systemDamaged aria-label='Fields' }
#### boolean .systemDamaged
{: aria-label='Fields' }

___
### systemInRoom
{: #systemInRoom aria-label='Fields' }
#### boolean .systemInRoom
{: aria-label='Fields' }

___
### type
{: #type aria-label='Fields' }
#### [ActivatedPowerRequirements.Type](../Hyperspace/ActivatedPowerRequirements.Type) .type
{: aria-label='Fields' }

___
### whiteList
{: #whiteList aria-label='Fields' }
#### vector\<string\> .whiteList
{: aria-label='Fields' }

___
