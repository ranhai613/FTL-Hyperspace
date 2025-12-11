---
layout: lua
title: ActivatedPowerDefinition
lang: en
---

# Class "ActivatedPowerDefinition"


## Constructors
### ActivatedPowerDefinition ()
{: aria-label='Constructors' }
#### [ActivatedPowerDefinition](../Hyperspace/ActivatedPowerDefinition) ActivatedPowerDefinition ()
{: aria-label='Constructors' }

___



## Static Methods
### AddNamedDefinition ()
{: aria-label='StaticMethods' }
#### [ActivatedPowerDefinition](../Hyperspace/ActivatedPowerDefinition) .AddNamedDefinition (string _name, [ActivatedPowerDefinition](../Hyperspace/ActivatedPowerDefinition) copyDef)
{: aria-label='StaticMethods' }

___
### GetPowerByName ()
{: aria-label='StaticMethods' }
#### [ActivatedPowerDefinition](../Hyperspace/ActivatedPowerDefinition) .GetPowerByName (string _name)
{: aria-label='StaticMethods' }

___


## Methods
### AssignActivateGroup ()
{: aria-label='Methods' }
#### void :AssignActivateGroup (string _name)
{: aria-label='Methods' }

___
### AssignGroup ()
{: aria-label='Methods' }
#### void :AssignGroup (string _name)
{: aria-label='Methods' }

___
### AssignIndex ()
{: aria-label='Methods' }
#### void :AssignIndex ()
{: aria-label='Methods' }

___
### AssignName ()
{: aria-label='Methods' }
#### void :AssignName (string _name)
{: aria-label='Methods' }

___
### AssignReplaceGroup ()
{: aria-label='Methods' }
#### void :AssignReplaceGroup (string _name)
{: aria-label='Methods' }

___


## Fields
### activateGroupIndex (Read-only)
{: aria-label='Fields' }
#### uint .activateGroupIndex
{: aria-label='Fields' }
**read-only**

___
### activateReadyEnemies
{: aria-label='Fields' }
#### boolean .activateReadyEnemies
{: aria-label='Fields' }

___
### activateWhenReady
{: aria-label='Fields' }
#### boolean .activateWhenReady
{: aria-label='Fields' }

___
### animFrame
{: aria-label='Fields' }
#### integer .animFrame
{: aria-label='Fields' }

___
### buttonLabel
{: aria-label='Fields' }
#### [TextString](../Hyperspace/TextString) .buttonLabel
{: aria-label='Fields' }

___
### chargeReq
{: aria-label='Fields' }
#### [ActivatedPowerRequirements](../Hyperspace/ActivatedPowerRequirements) .chargeReq
{: aria-label='Fields' }

___
### chargesPerJump
{: aria-label='Fields' }
#### integer .chargesPerJump
{: aria-label='Fields' }

___
### cooldown
{: aria-label='Fields' }
#### number .cooldown
{: aria-label='Fields' }

___
### cooldownColor
{: aria-label='Fields' }
#### [GL_Color](../Graphics/GL_Color) .cooldownColor
{: aria-label='Fields' }

___
### crewHealth
{: aria-label='Fields' }
#### number .crewHealth
{: aria-label='Fields' }

___
### crewSpawns
{: aria-label='Fields' }
#### vector\<CrewSpawn\> .crewSpawns
{: aria-label='Fields' }

___
### damage
{: aria-label='Fields' }
#### [Damage](../Hyperspace/Damage) .damage
{: aria-label='Fields' }

___
### disabledCharges
{: aria-label='Fields' }
#### integer .disabledCharges
{: aria-label='Fields' }

___
### disabledCooldown
{: aria-label='Fields' }
#### integer .disabledCooldown
{: aria-label='Fields' }

___
### effectAnim
{: aria-label='Fields' }
#### string .effectAnim
{: aria-label='Fields' }

___
### effectPostAnim
{: aria-label='Fields' }
#### string .effectPostAnim
{: aria-label='Fields' }

___
### effectSounds
{: aria-label='Fields' }
#### vector\<string\> .effectSounds
{: aria-label='Fields' }

___
### effectSoundsEnemy
{: aria-label='Fields' }
#### boolean .effectSoundsEnemy
{: aria-label='Fields' }

___
### enemyHealth
{: aria-label='Fields' }
#### number .enemyHealth
{: aria-label='Fields' }

___
### enemyReq
{: aria-label='Fields' }
#### [ActivatedPowerRequirements](../Hyperspace/ActivatedPowerRequirements) .enemyReq
{: aria-label='Fields' }

___
### event
{: aria-label='Fields' }
#### array\<string, 2\> .event
{: aria-label='Fields' }

___
### followCrew
{: aria-label='Fields' }
#### boolean .followCrew
{: aria-label='Fields' }

___
### hasSpecialPower
{: aria-label='Fields' }
#### boolean .hasSpecialPower
{: aria-label='Fields' }

___
### hasTemporaryPower
{: aria-label='Fields' }
#### boolean .hasTemporaryPower
{: aria-label='Fields' }

___
### hideButton
{: aria-label='Fields' }
#### boolean .hideButton
{: aria-label='Fields' }

___
### hideCharges
{: aria-label='Fields' }
#### boolean .hideCharges
{: aria-label='Fields' }

___
### hideCooldown
{: aria-label='Fields' }
#### boolean .hideCooldown
{: aria-label='Fields' }

___
### initialCharges
{: aria-label='Fields' }
#### integer .initialCharges
{: aria-label='Fields' }

___
### initialCooldownFraction
{: aria-label='Fields' }
#### number .initialCooldownFraction
{: aria-label='Fields' }

___
### jumpCooldown
{: aria-label='Fields' }
#### integer .jumpCooldown
{: aria-label='Fields' }

___
### name (Read-only)
{: aria-label='Fields' }
#### string .name
{: aria-label='Fields' }
**read-only**

___
### onDeath
{: aria-label='Fields' }
#### integer .onDeath
{: aria-label='Fields' }

___
### onHotkey
{: aria-label='Fields' }
#### integer .onHotkey
{: aria-label='Fields' }

___
### playerReq
{: aria-label='Fields' }
#### [ActivatedPowerRequirements](../Hyperspace/ActivatedPowerRequirements) .playerReq
{: aria-label='Fields' }

___
### powerCharges
{: aria-label='Fields' }
#### integer .powerCharges
{: aria-label='Fields' }

___
### powerResources
{: aria-label='Fields' }
#### vector\<[PowerResourceDefinition](../Hyperspace/PowerResourceDefinition)\> .powerResources
{: aria-label='Fields' }

___
### replaceGroupIndex (Read-only)
{: aria-label='Fields' }
#### uint .replaceGroupIndex
{: aria-label='Fields' }
**read-only**

___
### respawnCharges
{: aria-label='Fields' }
#### integer .respawnCharges
{: aria-label='Fields' }

___
### roomStatBoosts
{: aria-label='Fields' }
#### vector\<[StatBoostDefinition](../Hyperspace/StatBoostDefinition)\> .roomStatBoosts
{: aria-label='Fields' }

___
### selfHealth
{: aria-label='Fields' }
#### number .selfHealth
{: aria-label='Fields' }

___
### shipFriendlyFire
{: aria-label='Fields' }
#### boolean .shipFriendlyFire
{: aria-label='Fields' }

___
### sortOrder
{: aria-label='Fields' }
#### integer .sortOrder
{: aria-label='Fields' }

___
### sounds
{: aria-label='Fields' }
#### vector\<string\> .sounds
{: aria-label='Fields' }

___
### soundsEnemy
{: aria-label='Fields' }
#### boolean .soundsEnemy
{: aria-label='Fields' }

___
### statBoosts
{: aria-label='Fields' }
#### vector\<[StatBoostDefinition](../Hyperspace/StatBoostDefinition)\> .statBoosts
{: aria-label='Fields' }

___
### tempPower
{: aria-label='Fields' }
#### [TemporaryPowerDefinition](../Hyperspace/TemporaryPowerDefinition) .tempPower
{: aria-label='Fields' }

___
### tooltip
{: aria-label='Fields' }
#### [TextString](../Hyperspace/TextString) .tooltip
{: aria-label='Fields' }

___
### transformRace
{: aria-label='Fields' }
#### string .transformRace
{: aria-label='Fields' }

___
### win
{: aria-label='Fields' }
#### boolean .win
{: aria-label='Fields' }

___
