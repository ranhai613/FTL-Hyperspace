---
layout: lua
title: ActivatedPowerRequirements
lang: en
---

# Class "ActivatedPowerRequirements"


## Constructors
{: #Constructors .lua-content-section}
### ActivatedPowerRequirements ()
{: #ActivatedPowerRequirements .lua-content-item aria-label='Constructors' }
#### [ActivatedPowerRequirements](../Hyperspace/ActivatedPowerRequirements) ActivatedPowerRequirements ()
{: aria-label='Constructors' }

___
### ActivatedPowerRequirements ()
{: #ActivatedPowerRequirements .lua-content-item aria-label='Constructors' }
#### [ActivatedPowerRequirements](../Hyperspace/ActivatedPowerRequirements) ActivatedPowerRequirements ([ActivatedPowerRequirements.Type](../Hyperspace/ActivatedPowerRequirements.Type) unknown)
{: aria-label='Constructors' }

___


## Constants
{: #Constants .lua-content-section}
### ActivatedPowerRequirements.Type_CHARGE
{: #Type_CHARGE .lua-content-item aria-label='Constants' }
#### integer .Type_CHARGE
{: aria-label='Constants' }
Equivalent to `2`.

___
### ActivatedPowerRequirements.Type_ENEMY
{: #Type_ENEMY .lua-content-item aria-label='Constants' }
#### integer .Type_ENEMY
{: aria-label='Constants' }
Equivalent to `1`.

___
### ActivatedPowerRequirements.Type_PLAYER
{: #Type_PLAYER .lua-content-item aria-label='Constants' }
#### integer .Type_PLAYER
{: aria-label='Constants' }
Equivalent to `0`.

___
### ActivatedPowerRequirements.Type_UNKNOWN
{: #Type_UNKNOWN .lua-content-item aria-label='Constants' }
#### integer .Type_UNKNOWN
{: aria-label='Constants' }
Equivalent to `3`.

___




## Fields
{: #Fields .lua-content-section}
### aiDisabled
{: #aiDisabled .lua-content-item aria-label='Fields' }
#### boolean .aiDisabled
{: aria-label='Fields' }

___
### checkRoomCrew
{: #checkRoomCrew .lua-content-item aria-label='Fields' }
#### boolean .checkRoomCrew
{: aria-label='Fields' }

___
### enemyBlackList
{: #enemyBlackList .lua-content-item aria-label='Fields' }
#### vector\<string\> .enemyBlackList
{: aria-label='Fields' }

___
### enemyInRoom
{: #enemyInRoom .lua-content-item aria-label='Fields' }
#### boolean .enemyInRoom
{: aria-label='Fields' }

___
### enemyShip
{: #enemyShip .lua-content-item aria-label='Fields' }
#### boolean .enemyShip
{: aria-label='Fields' }

___
### enemyWhiteList
{: #enemyWhiteList .lua-content-item aria-label='Fields' }
#### vector\<string\> .enemyWhiteList
{: aria-label='Fields' }

___
### extraConditions
{: #extraConditions .lua-content-item aria-label='Fields' }
#### vector\<[CrewExtraCondition](../pair<Hyperspace/CrewExtraCondition), boolean>\> .extraConditions
{: aria-label='Fields' }

___
### extraOrConditions
{: #extraOrConditions .lua-content-item aria-label='Fields' }
#### vector\<[CrewExtraCondition](../pair<Hyperspace/CrewExtraCondition), boolean>\> .extraOrConditions
{: aria-label='Fields' }

___
### extraOrConditionsTooltip
{: #extraOrConditionsTooltip .lua-content-item aria-label='Fields' }
#### [TextString](../Hyperspace/TextString) .extraOrConditionsTooltip
{: aria-label='Fields' }

___
### friendlyBlackList
{: #friendlyBlackList .lua-content-item aria-label='Fields' }
#### vector\<string\> .friendlyBlackList
{: aria-label='Fields' }

___
### friendlyInRoom
{: #friendlyInRoom .lua-content-item aria-label='Fields' }
#### boolean .friendlyInRoom
{: aria-label='Fields' }

___
### friendlyWhiteList
{: #friendlyWhiteList .lua-content-item aria-label='Fields' }
#### vector\<string\> .friendlyWhiteList
{: aria-label='Fields' }

___
### hasClonebay
{: #hasClonebay .lua-content-item aria-label='Fields' }
#### boolean .hasClonebay
{: aria-label='Fields' }

___
### inCombat
{: #inCombat .lua-content-item aria-label='Fields' }
#### boolean .inCombat
{: aria-label='Fields' }

___
### maxHealth
{: #maxHealth .lua-content-item aria-label='Fields' }
#### ToggleValue\<integer\> .maxHealth
{: aria-label='Fields' }

___
### minHealth
{: #minHealth .lua-content-item aria-label='Fields' }
#### ToggleValue\<integer\> .minHealth
{: aria-label='Fields' }

___
### outOfCombat
{: #outOfCombat .lua-content-item aria-label='Fields' }
#### boolean .outOfCombat
{: aria-label='Fields' }

___
### playerShip
{: #playerShip .lua-content-item aria-label='Fields' }
#### boolean .playerShip
{: aria-label='Fields' }

___
### requiredSystem
{: #requiredSystem .lua-content-item aria-label='Fields' }
#### integer .requiredSystem
{: aria-label='Fields' }

___
### requiredSystemFunctional
{: #requiredSystemFunctional .lua-content-item aria-label='Fields' }
#### boolean .requiredSystemFunctional
{: aria-label='Fields' }

___
### systemDamaged
{: #systemDamaged .lua-content-item aria-label='Fields' }
#### boolean .systemDamaged
{: aria-label='Fields' }

___
### systemInRoom
{: #systemInRoom .lua-content-item aria-label='Fields' }
#### boolean .systemInRoom
{: aria-label='Fields' }

___
### type
{: #type .lua-content-item aria-label='Fields' }
#### [ActivatedPowerRequirements.Type](../Hyperspace/ActivatedPowerRequirements.Type) .type
{: aria-label='Fields' }

___
### whiteList
{: #whiteList .lua-content-item aria-label='Fields' }
#### vector\<string\> .whiteList
{: aria-label='Fields' }

___
