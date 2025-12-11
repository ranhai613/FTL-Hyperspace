---
layout: lua
title: ActivatedPowerDefinition
lang: en
---

# Class "ActivatedPowerDefinition"


## Constructors
{: #Constructors .section}
### ActivatedPowerDefinition ()
{: #ActivatedPowerDefinition aria-label='Constructors' }
#### [ActivatedPowerDefinition](../Hyperspace/ActivatedPowerDefinition) ActivatedPowerDefinition ()
{: aria-label='Constructors' }

___



## Static Methods
{: #Static-Methods .section}
### AddNamedDefinition ()
{: #AddNamedDefinition aria-label='StaticMethods' }
#### [ActivatedPowerDefinition](../Hyperspace/ActivatedPowerDefinition) .AddNamedDefinition (string _name, [ActivatedPowerDefinition](../Hyperspace/ActivatedPowerDefinition) copyDef)
{: aria-label='StaticMethods' }

___
### GetPowerByName ()
{: #GetPowerByName aria-label='StaticMethods' }
#### [ActivatedPowerDefinition](../Hyperspace/ActivatedPowerDefinition) .GetPowerByName (string _name)
{: aria-label='StaticMethods' }

___


## Methods
{: #Methods .section}
### AssignActivateGroup ()
{: #AssignActivateGroup aria-label='Methods' }
#### void :AssignActivateGroup (string _name)
{: aria-label='Methods' }

___
### AssignGroup ()
{: #AssignGroup aria-label='Methods' }
#### void :AssignGroup (string _name)
{: aria-label='Methods' }

___
### AssignIndex ()
{: #AssignIndex aria-label='Methods' }
#### void :AssignIndex ()
{: aria-label='Methods' }

___
### AssignName ()
{: #AssignName aria-label='Methods' }
#### void :AssignName (string _name)
{: aria-label='Methods' }

___
### AssignReplaceGroup ()
{: #AssignReplaceGroup aria-label='Methods' }
#### void :AssignReplaceGroup (string _name)
{: aria-label='Methods' }

___


## Fields
{: #Fields .section}
### activateGroupIndex (Read-only)
{: #activateGroupIndex aria-label='Fields' }
#### uint .activateGroupIndex
{: aria-label='Fields' }
**read-only**

___
### activateReadyEnemies
{: #activateReadyEnemies aria-label='Fields' }
#### boolean .activateReadyEnemies
{: aria-label='Fields' }

___
### activateWhenReady
{: #activateWhenReady aria-label='Fields' }
#### boolean .activateWhenReady
{: aria-label='Fields' }

___
### animFrame
{: #animFrame aria-label='Fields' }
#### integer .animFrame
{: aria-label='Fields' }

___
### buttonLabel
{: #buttonLabel aria-label='Fields' }
#### [TextString](../Hyperspace/TextString) .buttonLabel
{: aria-label='Fields' }

___
### chargeReq
{: #chargeReq aria-label='Fields' }
#### [ActivatedPowerRequirements](../Hyperspace/ActivatedPowerRequirements) .chargeReq
{: aria-label='Fields' }

___
### chargesPerJump
{: #chargesPerJump aria-label='Fields' }
#### integer .chargesPerJump
{: aria-label='Fields' }

___
### cooldown
{: #cooldown aria-label='Fields' }
#### number .cooldown
{: aria-label='Fields' }

___
### cooldownColor
{: #cooldownColor aria-label='Fields' }
#### [GL_Color](../Graphics/GL_Color) .cooldownColor
{: aria-label='Fields' }

___
### crewHealth
{: #crewHealth aria-label='Fields' }
#### number .crewHealth
{: aria-label='Fields' }

___
### crewSpawns
{: #crewSpawns aria-label='Fields' }
#### vector\<CrewSpawn\> .crewSpawns
{: aria-label='Fields' }

___
### damage
{: #damage aria-label='Fields' }
#### [Damage](../Hyperspace/Damage) .damage
{: aria-label='Fields' }

___
### disabledCharges
{: #disabledCharges aria-label='Fields' }
#### integer .disabledCharges
{: aria-label='Fields' }

___
### disabledCooldown
{: #disabledCooldown aria-label='Fields' }
#### integer .disabledCooldown
{: aria-label='Fields' }

___
### effectAnim
{: #effectAnim aria-label='Fields' }
#### string .effectAnim
{: aria-label='Fields' }

___
### effectPostAnim
{: #effectPostAnim aria-label='Fields' }
#### string .effectPostAnim
{: aria-label='Fields' }

___
### effectSounds
{: #effectSounds aria-label='Fields' }
#### vector\<string\> .effectSounds
{: aria-label='Fields' }

___
### effectSoundsEnemy
{: #effectSoundsEnemy aria-label='Fields' }
#### boolean .effectSoundsEnemy
{: aria-label='Fields' }

___
### enemyHealth
{: #enemyHealth aria-label='Fields' }
#### number .enemyHealth
{: aria-label='Fields' }

___
### enemyReq
{: #enemyReq aria-label='Fields' }
#### [ActivatedPowerRequirements](../Hyperspace/ActivatedPowerRequirements) .enemyReq
{: aria-label='Fields' }

___
### event
{: #event aria-label='Fields' }
#### array\<string, 2\> .event
{: aria-label='Fields' }

___
### followCrew
{: #followCrew aria-label='Fields' }
#### boolean .followCrew
{: aria-label='Fields' }

___
### hasSpecialPower
{: #hasSpecialPower aria-label='Fields' }
#### boolean .hasSpecialPower
{: aria-label='Fields' }

___
### hasTemporaryPower
{: #hasTemporaryPower aria-label='Fields' }
#### boolean .hasTemporaryPower
{: aria-label='Fields' }

___
### hideButton
{: #hideButton aria-label='Fields' }
#### boolean .hideButton
{: aria-label='Fields' }

___
### hideCharges
{: #hideCharges aria-label='Fields' }
#### boolean .hideCharges
{: aria-label='Fields' }

___
### hideCooldown
{: #hideCooldown aria-label='Fields' }
#### boolean .hideCooldown
{: aria-label='Fields' }

___
### initialCharges
{: #initialCharges aria-label='Fields' }
#### integer .initialCharges
{: aria-label='Fields' }

___
### initialCooldownFraction
{: #initialCooldownFraction aria-label='Fields' }
#### number .initialCooldownFraction
{: aria-label='Fields' }

___
### jumpCooldown
{: #jumpCooldown aria-label='Fields' }
#### integer .jumpCooldown
{: aria-label='Fields' }

___
### name (Read-only)
{: #name aria-label='Fields' }
#### string .name
{: aria-label='Fields' }
**read-only**

___
### onDeath
{: #onDeath aria-label='Fields' }
#### integer .onDeath
{: aria-label='Fields' }

___
### onHotkey
{: #onHotkey aria-label='Fields' }
#### integer .onHotkey
{: aria-label='Fields' }

___
### playerReq
{: #playerReq aria-label='Fields' }
#### [ActivatedPowerRequirements](../Hyperspace/ActivatedPowerRequirements) .playerReq
{: aria-label='Fields' }

___
### powerCharges
{: #powerCharges aria-label='Fields' }
#### integer .powerCharges
{: aria-label='Fields' }

___
### powerResources
{: #powerResources aria-label='Fields' }
#### vector\<[PowerResourceDefinition](../Hyperspace/PowerResourceDefinition)\> .powerResources
{: aria-label='Fields' }

___
### replaceGroupIndex (Read-only)
{: #replaceGroupIndex aria-label='Fields' }
#### uint .replaceGroupIndex
{: aria-label='Fields' }
**read-only**

___
### respawnCharges
{: #respawnCharges aria-label='Fields' }
#### integer .respawnCharges
{: aria-label='Fields' }

___
### roomStatBoosts
{: #roomStatBoosts aria-label='Fields' }
#### vector\<[StatBoostDefinition](../Hyperspace/StatBoostDefinition)\> .roomStatBoosts
{: aria-label='Fields' }

___
### selfHealth
{: #selfHealth aria-label='Fields' }
#### number .selfHealth
{: aria-label='Fields' }

___
### shipFriendlyFire
{: #shipFriendlyFire aria-label='Fields' }
#### boolean .shipFriendlyFire
{: aria-label='Fields' }

___
### sortOrder
{: #sortOrder aria-label='Fields' }
#### integer .sortOrder
{: aria-label='Fields' }

___
### sounds
{: #sounds aria-label='Fields' }
#### vector\<string\> .sounds
{: aria-label='Fields' }

___
### soundsEnemy
{: #soundsEnemy aria-label='Fields' }
#### boolean .soundsEnemy
{: aria-label='Fields' }

___
### statBoosts
{: #statBoosts aria-label='Fields' }
#### vector\<[StatBoostDefinition](../Hyperspace/StatBoostDefinition)\> .statBoosts
{: aria-label='Fields' }

___
### tempPower
{: #tempPower aria-label='Fields' }
#### [TemporaryPowerDefinition](../Hyperspace/TemporaryPowerDefinition) .tempPower
{: aria-label='Fields' }

___
### tooltip
{: #tooltip aria-label='Fields' }
#### [TextString](../Hyperspace/TextString) .tooltip
{: aria-label='Fields' }

___
### transformRace
{: #transformRace aria-label='Fields' }
#### string .transformRace
{: aria-label='Fields' }

___
### win
{: #win aria-label='Fields' }
#### boolean .win
{: aria-label='Fields' }

___
