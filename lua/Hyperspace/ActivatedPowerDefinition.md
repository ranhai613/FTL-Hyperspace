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

______
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

______
### AssignGroup ()
{: aria-label='Methods' }
#### void :AssignGroup (string _name)
{: aria-label='Methods' }

______
### AssignIndex ()
{: aria-label='Methods' }
#### void :AssignIndex ()
{: aria-label='Methods' }

______
### AssignName ()
{: aria-label='Methods' }
#### void :AssignName (string _name)
{: aria-label='Methods' }

______
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

______
### activateReadyEnemies
{: aria-label='Fields' }
#### boolean .activateReadyEnemies
{: aria-label='Fields' }

______
### activateWhenReady
{: aria-label='Fields' }
#### boolean .activateWhenReady
{: aria-label='Fields' }

______
### animFrame
{: aria-label='Fields' }
#### integer .animFrame
{: aria-label='Fields' }

______
### buttonLabel
{: aria-label='Fields' }
#### [TextString](../Hyperspace/TextString) .buttonLabel
{: aria-label='Fields' }

______
### chargeReq
{: aria-label='Fields' }
#### [ActivatedPowerRequirements](../Hyperspace/ActivatedPowerRequirements) .chargeReq
{: aria-label='Fields' }

______
### chargesPerJump
{: aria-label='Fields' }
#### integer .chargesPerJump
{: aria-label='Fields' }

______
### cooldown
{: aria-label='Fields' }
#### number .cooldown
{: aria-label='Fields' }

______
### cooldownColor
{: aria-label='Fields' }
#### [GL_Color](../Graphics/GL_Color) .cooldownColor
{: aria-label='Fields' }

______
### crewHealth
{: aria-label='Fields' }
#### number .crewHealth
{: aria-label='Fields' }

______
### crewSpawns
{: aria-label='Fields' }
#### vector\<CrewSpawn\> .crewSpawns
{: aria-label='Fields' }

______
### damage
{: aria-label='Fields' }
#### [Damage](../Hyperspace/Damage) .damage
{: aria-label='Fields' }

______
### disabledCharges
{: aria-label='Fields' }
#### integer .disabledCharges
{: aria-label='Fields' }

______
### disabledCooldown
{: aria-label='Fields' }
#### integer .disabledCooldown
{: aria-label='Fields' }

______
### effectAnim
{: aria-label='Fields' }
#### string .effectAnim
{: aria-label='Fields' }

______
### effectPostAnim
{: aria-label='Fields' }
#### string .effectPostAnim
{: aria-label='Fields' }

______
### effectSounds
{: aria-label='Fields' }
#### vector\<string\> .effectSounds
{: aria-label='Fields' }

______
### effectSoundsEnemy
{: aria-label='Fields' }
#### boolean .effectSoundsEnemy
{: aria-label='Fields' }

______
### enemyHealth
{: aria-label='Fields' }
#### number .enemyHealth
{: aria-label='Fields' }

______
### enemyReq
{: aria-label='Fields' }
#### [ActivatedPowerRequirements](../Hyperspace/ActivatedPowerRequirements) .enemyReq
{: aria-label='Fields' }

______
### event
{: aria-label='Fields' }
#### array\<string, 2\> .event
{: aria-label='Fields' }

______
### followCrew
{: aria-label='Fields' }
#### boolean .followCrew
{: aria-label='Fields' }

______
### hasSpecialPower
{: aria-label='Fields' }
#### boolean .hasSpecialPower
{: aria-label='Fields' }

______
### hasTemporaryPower
{: aria-label='Fields' }
#### boolean .hasTemporaryPower
{: aria-label='Fields' }

______
### hideButton
{: aria-label='Fields' }
#### boolean .hideButton
{: aria-label='Fields' }

______
### hideCharges
{: aria-label='Fields' }
#### boolean .hideCharges
{: aria-label='Fields' }

______
### hideCooldown
{: aria-label='Fields' }
#### boolean .hideCooldown
{: aria-label='Fields' }

______
### initialCharges
{: aria-label='Fields' }
#### integer .initialCharges
{: aria-label='Fields' }

______
### initialCooldownFraction
{: aria-label='Fields' }
#### number .initialCooldownFraction
{: aria-label='Fields' }

______
### jumpCooldown
{: aria-label='Fields' }
#### integer .jumpCooldown
{: aria-label='Fields' }

______
### name (Read-only)
{: aria-label='Fields' }
#### string .name
{: aria-label='Fields' }
**read-only**

______
### onDeath
{: aria-label='Fields' }
#### integer .onDeath
{: aria-label='Fields' }

______
### onHotkey
{: aria-label='Fields' }
#### integer .onHotkey
{: aria-label='Fields' }

______
### playerReq
{: aria-label='Fields' }
#### [ActivatedPowerRequirements](../Hyperspace/ActivatedPowerRequirements) .playerReq
{: aria-label='Fields' }

______
### powerCharges
{: aria-label='Fields' }
#### integer .powerCharges
{: aria-label='Fields' }

______
### powerResources
{: aria-label='Fields' }
#### vector\<[PowerResourceDefinition](../Hyperspace/PowerResourceDefinition)\> .powerResources
{: aria-label='Fields' }

______
### replaceGroupIndex (Read-only)
{: aria-label='Fields' }
#### uint .replaceGroupIndex
{: aria-label='Fields' }
**read-only**

______
### respawnCharges
{: aria-label='Fields' }
#### integer .respawnCharges
{: aria-label='Fields' }

______
### roomStatBoosts
{: aria-label='Fields' }
#### vector\<[StatBoostDefinition](../Hyperspace/StatBoostDefinition)\> .roomStatBoosts
{: aria-label='Fields' }

______
### selfHealth
{: aria-label='Fields' }
#### number .selfHealth
{: aria-label='Fields' }

______
### shipFriendlyFire
{: aria-label='Fields' }
#### boolean .shipFriendlyFire
{: aria-label='Fields' }

______
### sortOrder
{: aria-label='Fields' }
#### integer .sortOrder
{: aria-label='Fields' }

______
### sounds
{: aria-label='Fields' }
#### vector\<string\> .sounds
{: aria-label='Fields' }

______
### soundsEnemy
{: aria-label='Fields' }
#### boolean .soundsEnemy
{: aria-label='Fields' }

______
### statBoosts
{: aria-label='Fields' }
#### vector\<[StatBoostDefinition](../Hyperspace/StatBoostDefinition)\> .statBoosts
{: aria-label='Fields' }

______
### tempPower
{: aria-label='Fields' }
#### [TemporaryPowerDefinition](../Hyperspace/TemporaryPowerDefinition) .tempPower
{: aria-label='Fields' }

______
### tooltip
{: aria-label='Fields' }
#### [TextString](../Hyperspace/TextString) .tooltip
{: aria-label='Fields' }

______
### transformRace
{: aria-label='Fields' }
#### string .transformRace
{: aria-label='Fields' }

______
### win
{: aria-label='Fields' }
#### boolean .win
{: aria-label='Fields' }

___
