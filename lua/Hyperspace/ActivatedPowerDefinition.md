---
layout: lua
title: ActivatedPowerDefinition
lang: en
category: Class
---

# Class "ActivatedPowerDefinition"


## Constructors
{: #Constructors .lua-content-section}
### ActivatedPowerDefinition ()
{: #ActivatedPowerDefinition .lua-content-item aria-label='Constructors' }
#### [ActivatedPowerDefinition](../Hyperspace/ActivatedPowerDefinition) ActivatedPowerDefinition ()
{: aria-label='Constructors' }

___



## Static Methods
{: #Static-Methods .lua-content-section}
### AddNamedDefinition ()
{: #AddNamedDefinition .lua-content-item aria-label='StaticMethods' }
#### [ActivatedPowerDefinition](../Hyperspace/ActivatedPowerDefinition) .AddNamedDefinition (string _name, [ActivatedPowerDefinition](../Hyperspace/ActivatedPowerDefinition) copyDef)
{: aria-label='StaticMethods' }

___
### GetPowerByName ()
{: #GetPowerByName .lua-content-item aria-label='StaticMethods' }
#### [ActivatedPowerDefinition](../Hyperspace/ActivatedPowerDefinition) .GetPowerByName (string _name)
{: aria-label='StaticMethods' }

___


## Methods
{: #Methods .lua-content-section}
### AssignActivateGroup ()
{: #AssignActivateGroup .lua-content-item aria-label='Methods' }
#### void :AssignActivateGroup (string _name)
{: aria-label='Methods' }

___
### AssignGroup ()
{: #AssignGroup .lua-content-item aria-label='Methods' }
#### void :AssignGroup (string _name)
{: aria-label='Methods' }

___
### AssignIndex ()
{: #AssignIndex .lua-content-item aria-label='Methods' }
#### void :AssignIndex ()
{: aria-label='Methods' }

___
### AssignName ()
{: #AssignName .lua-content-item aria-label='Methods' }
#### void :AssignName (string _name)
{: aria-label='Methods' }

___
### AssignReplaceGroup ()
{: #AssignReplaceGroup .lua-content-item aria-label='Methods' }
#### void :AssignReplaceGroup (string _name)
{: aria-label='Methods' }

___


## Fields
{: #Fields .lua-content-section}
### activateGroupIndex (Read-only)
{: #activateGroupIndex .lua-content-item aria-label='Fields' }
#### uint .activateGroupIndex
{: aria-label='Fields' }
**read-only**

___
### activateReadyEnemies
{: #activateReadyEnemies .lua-content-item aria-label='Fields' }
#### boolean .activateReadyEnemies
{: aria-label='Fields' }

___
### activateWhenReady
{: #activateWhenReady .lua-content-item aria-label='Fields' }
#### boolean .activateWhenReady
{: aria-label='Fields' }

___
### animFrame
{: #animFrame .lua-content-item aria-label='Fields' }
#### integer .animFrame
{: aria-label='Fields' }

___
### buttonLabel
{: #buttonLabel .lua-content-item aria-label='Fields' }
#### [TextString](../Hyperspace/TextString) .buttonLabel
{: aria-label='Fields' }

___
### chargeReq
{: #chargeReq .lua-content-item aria-label='Fields' }
#### [ActivatedPowerRequirements](../Hyperspace/ActivatedPowerRequirements) .chargeReq
{: aria-label='Fields' }

___
### chargesPerJump
{: #chargesPerJump .lua-content-item aria-label='Fields' }
#### integer .chargesPerJump
{: aria-label='Fields' }

___
### cooldown
{: #cooldown .lua-content-item aria-label='Fields' }
#### number .cooldown
{: aria-label='Fields' }

___
### cooldownColor
{: #cooldownColor .lua-content-item aria-label='Fields' }
#### [GL_Color](../Graphics/GL_Color) .cooldownColor
{: aria-label='Fields' }

___
### crewHealth
{: #crewHealth .lua-content-item aria-label='Fields' }
#### number .crewHealth
{: aria-label='Fields' }

___
### crewSpawns
{: #crewSpawns .lua-content-item aria-label='Fields' }
#### vector\<CrewSpawn\> .crewSpawns
{: aria-label='Fields' }

___
### damage
{: #damage .lua-content-item aria-label='Fields' }
#### [Damage](../Hyperspace/Damage) .damage
{: aria-label='Fields' }

___
### disabledCharges
{: #disabledCharges .lua-content-item aria-label='Fields' }
#### integer .disabledCharges
{: aria-label='Fields' }

___
### disabledCooldown
{: #disabledCooldown .lua-content-item aria-label='Fields' }
#### integer .disabledCooldown
{: aria-label='Fields' }

___
### effectAnim
{: #effectAnim .lua-content-item aria-label='Fields' }
#### string .effectAnim
{: aria-label='Fields' }

___
### effectPostAnim
{: #effectPostAnim .lua-content-item aria-label='Fields' }
#### string .effectPostAnim
{: aria-label='Fields' }

___
### effectSounds
{: #effectSounds .lua-content-item aria-label='Fields' }
#### vector\<string\> .effectSounds
{: aria-label='Fields' }

___
### effectSoundsEnemy
{: #effectSoundsEnemy .lua-content-item aria-label='Fields' }
#### boolean .effectSoundsEnemy
{: aria-label='Fields' }

___
### enemyHealth
{: #enemyHealth .lua-content-item aria-label='Fields' }
#### number .enemyHealth
{: aria-label='Fields' }

___
### enemyReq
{: #enemyReq .lua-content-item aria-label='Fields' }
#### [ActivatedPowerRequirements](../Hyperspace/ActivatedPowerRequirements) .enemyReq
{: aria-label='Fields' }

___
### event
{: #event .lua-content-item aria-label='Fields' }
#### array\<string, 2\> .event
{: aria-label='Fields' }

___
### followCrew
{: #followCrew .lua-content-item aria-label='Fields' }
#### boolean .followCrew
{: aria-label='Fields' }

___
### hasSpecialPower
{: #hasSpecialPower .lua-content-item aria-label='Fields' }
#### boolean .hasSpecialPower
{: aria-label='Fields' }

___
### hasTemporaryPower
{: #hasTemporaryPower .lua-content-item aria-label='Fields' }
#### boolean .hasTemporaryPower
{: aria-label='Fields' }

___
### hideButton
{: #hideButton .lua-content-item aria-label='Fields' }
#### boolean .hideButton
{: aria-label='Fields' }

___
### hideCharges
{: #hideCharges .lua-content-item aria-label='Fields' }
#### boolean .hideCharges
{: aria-label='Fields' }

___
### hideCooldown
{: #hideCooldown .lua-content-item aria-label='Fields' }
#### boolean .hideCooldown
{: aria-label='Fields' }

___
### initialCharges
{: #initialCharges .lua-content-item aria-label='Fields' }
#### integer .initialCharges
{: aria-label='Fields' }

___
### initialCooldownFraction
{: #initialCooldownFraction .lua-content-item aria-label='Fields' }
#### number .initialCooldownFraction
{: aria-label='Fields' }

___
### jumpCooldown
{: #jumpCooldown .lua-content-item aria-label='Fields' }
#### integer .jumpCooldown
{: aria-label='Fields' }

___
### name (Read-only)
{: #name .lua-content-item aria-label='Fields' }
#### string .name
{: aria-label='Fields' }
**read-only**

___
### onDeath
{: #onDeath .lua-content-item aria-label='Fields' }
#### integer .onDeath
{: aria-label='Fields' }

___
### onHotkey
{: #onHotkey .lua-content-item aria-label='Fields' }
#### integer .onHotkey
{: aria-label='Fields' }

___
### playerReq
{: #playerReq .lua-content-item aria-label='Fields' }
#### [ActivatedPowerRequirements](../Hyperspace/ActivatedPowerRequirements) .playerReq
{: aria-label='Fields' }

___
### powerCharges
{: #powerCharges .lua-content-item aria-label='Fields' }
#### integer .powerCharges
{: aria-label='Fields' }

___
### powerResources
{: #powerResources .lua-content-item aria-label='Fields' }
#### vector\<[PowerResourceDefinition](../Hyperspace/PowerResourceDefinition)\> .powerResources
{: aria-label='Fields' }

___
### replaceGroupIndex (Read-only)
{: #replaceGroupIndex .lua-content-item aria-label='Fields' }
#### uint .replaceGroupIndex
{: aria-label='Fields' }
**read-only**

___
### respawnCharges
{: #respawnCharges .lua-content-item aria-label='Fields' }
#### integer .respawnCharges
{: aria-label='Fields' }

___
### roomStatBoosts
{: #roomStatBoosts .lua-content-item aria-label='Fields' }
#### vector\<[StatBoostDefinition](../Hyperspace/StatBoostDefinition)\> .roomStatBoosts
{: aria-label='Fields' }

___
### selfHealth
{: #selfHealth .lua-content-item aria-label='Fields' }
#### number .selfHealth
{: aria-label='Fields' }

___
### shipFriendlyFire
{: #shipFriendlyFire .lua-content-item aria-label='Fields' }
#### boolean .shipFriendlyFire
{: aria-label='Fields' }

___
### sortOrder
{: #sortOrder .lua-content-item aria-label='Fields' }
#### integer .sortOrder
{: aria-label='Fields' }

___
### sounds
{: #sounds .lua-content-item aria-label='Fields' }
#### vector\<string\> .sounds
{: aria-label='Fields' }

___
### soundsEnemy
{: #soundsEnemy .lua-content-item aria-label='Fields' }
#### boolean .soundsEnemy
{: aria-label='Fields' }

___
### statBoosts
{: #statBoosts .lua-content-item aria-label='Fields' }
#### vector\<[StatBoostDefinition](../Hyperspace/StatBoostDefinition)\> .statBoosts
{: aria-label='Fields' }

___
### tempPower
{: #tempPower .lua-content-item aria-label='Fields' }
#### [TemporaryPowerDefinition](../Hyperspace/TemporaryPowerDefinition) .tempPower
{: aria-label='Fields' }

___
### tooltip
{: #tooltip .lua-content-item aria-label='Fields' }
#### [TextString](../Hyperspace/TextString) .tooltip
{: aria-label='Fields' }

___
### transformRace
{: #transformRace .lua-content-item aria-label='Fields' }
#### string .transformRace
{: aria-label='Fields' }

___
### win
{: #win .lua-content-item aria-label='Fields' }
#### boolean .win
{: aria-label='Fields' }

___
