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
{: aria-label='StaticFunctions' }
#### [ActivatedPowerDefinition](../Hyperspace/ActivatedPowerDefinition) .AddNamedDefinition (string _name, [ActivatedPowerDefinition](../Hyperspace/ActivatedPowerDefinition) copyDef)
{: aria-label='StaticFunctions' }

______
### GetPowerByName ()
{: aria-label='StaticFunctions' }
#### [ActivatedPowerDefinition](../Hyperspace/ActivatedPowerDefinition) .GetPowerByName (string _name)
{: aria-label='StaticFunctions' }

___


## Methods
### AssignActivateGroup ()
{: aria-label='Functions' }
#### void :AssignActivateGroup (string _name)
{: aria-label='Functions' }

______
### AssignGroup ()
{: aria-label='Functions' }
#### void :AssignGroup (string _name)
{: aria-label='Functions' }

______
### AssignIndex ()
{: aria-label='Functions' }
#### void :AssignIndex ()
{: aria-label='Functions' }

______
### AssignName ()
{: aria-label='Functions' }
#### void :AssignName (string _name)
{: aria-label='Functions' }

______
### AssignReplaceGroup ()
{: aria-label='Functions' }
#### void :AssignReplaceGroup (string _name)
{: aria-label='Functions' }

___


## Fields
### activateGroupIndex (Read-only)
{: aria-label='Variables' }
#### uint .activateGroupIndex
{: aria-label='Variables' }
**read-only**

______
### activateReadyEnemies
{: aria-label='Variables' }
#### boolean .activateReadyEnemies
{: aria-label='Variables' }

______
### activateWhenReady
{: aria-label='Variables' }
#### boolean .activateWhenReady
{: aria-label='Variables' }

______
### animFrame
{: aria-label='Variables' }
#### integer .animFrame
{: aria-label='Variables' }

______
### buttonLabel
{: aria-label='Variables' }
#### [TextString](../Hyperspace/TextString) .buttonLabel
{: aria-label='Variables' }

______
### chargeReq
{: aria-label='Variables' }
#### [ActivatedPowerRequirements](../Hyperspace/ActivatedPowerRequirements) .chargeReq
{: aria-label='Variables' }

______
### chargesPerJump
{: aria-label='Variables' }
#### integer .chargesPerJump
{: aria-label='Variables' }

______
### cooldown
{: aria-label='Variables' }
#### number .cooldown
{: aria-label='Variables' }

______
### cooldownColor
{: aria-label='Variables' }
#### [GL_Color](../Graphics/GL_Color) .cooldownColor
{: aria-label='Variables' }

______
### crewHealth
{: aria-label='Variables' }
#### number .crewHealth
{: aria-label='Variables' }

______
### crewSpawns
{: aria-label='Variables' }
#### vector\<CrewSpawn\> .crewSpawns
{: aria-label='Variables' }

______
### damage
{: aria-label='Variables' }
#### [Damage](../Hyperspace/Damage) .damage
{: aria-label='Variables' }

______
### disabledCharges
{: aria-label='Variables' }
#### integer .disabledCharges
{: aria-label='Variables' }

______
### disabledCooldown
{: aria-label='Variables' }
#### integer .disabledCooldown
{: aria-label='Variables' }

______
### effectAnim
{: aria-label='Variables' }
#### string .effectAnim
{: aria-label='Variables' }

______
### effectPostAnim
{: aria-label='Variables' }
#### string .effectPostAnim
{: aria-label='Variables' }

______
### effectSounds
{: aria-label='Variables' }
#### vector\<string\> .effectSounds
{: aria-label='Variables' }

______
### effectSoundsEnemy
{: aria-label='Variables' }
#### boolean .effectSoundsEnemy
{: aria-label='Variables' }

______
### enemyHealth
{: aria-label='Variables' }
#### number .enemyHealth
{: aria-label='Variables' }

______
### enemyReq
{: aria-label='Variables' }
#### [ActivatedPowerRequirements](../Hyperspace/ActivatedPowerRequirements) .enemyReq
{: aria-label='Variables' }

______
### event
{: aria-label='Variables' }
#### array\<string, 2\> .event
{: aria-label='Variables' }

______
### followCrew
{: aria-label='Variables' }
#### boolean .followCrew
{: aria-label='Variables' }

______
### hasSpecialPower
{: aria-label='Variables' }
#### boolean .hasSpecialPower
{: aria-label='Variables' }

______
### hasTemporaryPower
{: aria-label='Variables' }
#### boolean .hasTemporaryPower
{: aria-label='Variables' }

______
### hideButton
{: aria-label='Variables' }
#### boolean .hideButton
{: aria-label='Variables' }

______
### hideCharges
{: aria-label='Variables' }
#### boolean .hideCharges
{: aria-label='Variables' }

______
### hideCooldown
{: aria-label='Variables' }
#### boolean .hideCooldown
{: aria-label='Variables' }

______
### initialCharges
{: aria-label='Variables' }
#### integer .initialCharges
{: aria-label='Variables' }

______
### initialCooldownFraction
{: aria-label='Variables' }
#### number .initialCooldownFraction
{: aria-label='Variables' }

______
### jumpCooldown
{: aria-label='Variables' }
#### integer .jumpCooldown
{: aria-label='Variables' }

______
### name (Read-only)
{: aria-label='Variables' }
#### string .name
{: aria-label='Variables' }
**read-only**

______
### onDeath
{: aria-label='Variables' }
#### integer .onDeath
{: aria-label='Variables' }

______
### onHotkey
{: aria-label='Variables' }
#### integer .onHotkey
{: aria-label='Variables' }

______
### playerReq
{: aria-label='Variables' }
#### [ActivatedPowerRequirements](../Hyperspace/ActivatedPowerRequirements) .playerReq
{: aria-label='Variables' }

______
### powerCharges
{: aria-label='Variables' }
#### integer .powerCharges
{: aria-label='Variables' }

______
### powerResources
{: aria-label='Variables' }
#### vector\<[PowerResourceDefinition](../Hyperspace/PowerResourceDefinition)\> .powerResources
{: aria-label='Variables' }

______
### replaceGroupIndex (Read-only)
{: aria-label='Variables' }
#### uint .replaceGroupIndex
{: aria-label='Variables' }
**read-only**

______
### respawnCharges
{: aria-label='Variables' }
#### integer .respawnCharges
{: aria-label='Variables' }

______
### roomStatBoosts
{: aria-label='Variables' }
#### vector\<[StatBoostDefinition](../Hyperspace/StatBoostDefinition)\> .roomStatBoosts
{: aria-label='Variables' }

______
### selfHealth
{: aria-label='Variables' }
#### number .selfHealth
{: aria-label='Variables' }

______
### shipFriendlyFire
{: aria-label='Variables' }
#### boolean .shipFriendlyFire
{: aria-label='Variables' }

______
### sortOrder
{: aria-label='Variables' }
#### integer .sortOrder
{: aria-label='Variables' }

______
### sounds
{: aria-label='Variables' }
#### vector\<string\> .sounds
{: aria-label='Variables' }

______
### soundsEnemy
{: aria-label='Variables' }
#### boolean .soundsEnemy
{: aria-label='Variables' }

______
### statBoosts
{: aria-label='Variables' }
#### vector\<[StatBoostDefinition](../Hyperspace/StatBoostDefinition)\> .statBoosts
{: aria-label='Variables' }

______
### tempPower
{: aria-label='Variables' }
#### [TemporaryPowerDefinition](../Hyperspace/TemporaryPowerDefinition) .tempPower
{: aria-label='Variables' }

______
### tooltip
{: aria-label='Variables' }
#### [TextString](../Hyperspace/TextString) .tooltip
{: aria-label='Variables' }

______
### transformRace
{: aria-label='Variables' }
#### string .transformRace
{: aria-label='Variables' }

______
### win
{: aria-label='Variables' }
#### boolean .win
{: aria-label='Variables' }

___
