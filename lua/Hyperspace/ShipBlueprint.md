---
layout: lua
title: ShipBlueprint
lang: en
---

# Class "ShipBlueprint"


Extends: [Blueprint](../Hyperspace/Blueprint)


## Constructors
{: #Constructors .lua-content-section}
### ShipBlueprint ()
{: #ShipBlueprint .lua-content-item aria-label='Constructors' }
#### [ShipBlueprint](../Hyperspace/ShipBlueprint) ShipBlueprint ()
{: aria-label='Constructors' }

___
### ShipBlueprint ()
{: #ShipBlueprint .lua-content-item aria-label='Constructors' }
#### [ShipBlueprint](../Hyperspace/ShipBlueprint) ShipBlueprint ([ShipBlueprint](../Hyperspace/ShipBlueprint) unknown)
{: aria-label='Constructors' }

___




## Methods
{: #Methods .lua-content-section}
___
<details markdown="1"><summary id="InheritedMethods" class="lua-content-item" markdown="span">Inherited Methods</summary>


#### From [Blueprint](Blueprint)

| Return Type | Method |
| --- | --- |
| string | :[GetNameLong](Blueprint#GetNameLong) () |
| string | :[GetNameShort](Blueprint#GetNameShort) () |
| integer | :[GetType](Blueprint#GetType) () |

</details>



## Fields
{: #Fields .lua-content-section}
<details markdown="1"><summary id="InheritedFields" class="lua-content-item" markdown="span">Inherited Fields</summary>


#### From [Blueprint](Blueprint)

| Type | Field |
| --- | --- |
| string | .[name](Blueprint#name) |
| integer | .[type](Blueprint#type) |

</details>
___
### augments
{: #augments .lua-content-item aria-label='Fields' }
#### vector\<string\> .augments
{: aria-label='Fields' }

___
### blueprintName
{: #blueprintName .lua-content-item aria-label='Fields' }
#### string .blueprintName
{: aria-label='Fields' }

___
### boardingAI
{: #boardingAI .lua-content-item aria-label='Fields' }
#### integer .boardingAI
{: aria-label='Fields' }

___
### bp_count
{: #bp_count .lua-content-item aria-label='Fields' }
#### integer .bp_count
{: aria-label='Fields' }

___
### cloakFile
{: #cloakFile .lua-content-item aria-label='Fields' }
#### string .cloakFile
{: aria-label='Fields' }

___
### customCrew
{: #customCrew .lua-content-item aria-label='Fields' }
#### vector\<[CrewBlueprint](../Hyperspace/CrewBlueprint)\> .customCrew
{: aria-label='Fields' }

___
### defaultCrew
{: #defaultCrew .lua-content-item aria-label='Fields' }
#### vector\<string\> .defaultCrew
{: aria-label='Fields' }

___
### desc
{: #desc .lua-content-item aria-label='Fields' }
#### [Description](../Hyperspace/Description) .desc
{: aria-label='Fields' }

___
### droneCount
{: #droneCount .lua-content-item aria-label='Fields' }
#### integer .droneCount
{: aria-label='Fields' }

___
### droneSlots
{: #droneSlots .lua-content-item aria-label='Fields' }
#### integer .droneSlots
{: aria-label='Fields' }

___
### drone_count
{: #drone_count .lua-content-item aria-label='Fields' }
#### integer .drone_count
{: aria-label='Fields' }

___
### drones
{: #drones .lua-content-item aria-label='Fields' }
#### vector\<string\> .drones
{: aria-label='Fields' }

___
### floorFile
{: #floorFile .lua-content-item aria-label='Fields' }
#### string .floorFile
{: aria-label='Fields' }

___
### health
{: #health .lua-content-item aria-label='Fields' }
#### integer .health
{: aria-label='Fields' }

___
### imgFile
{: #imgFile .lua-content-item aria-label='Fields' }
#### string .imgFile
{: aria-label='Fields' }

___
### layoutFile
{: #layoutFile .lua-content-item aria-label='Fields' }
#### string .layoutFile
{: aria-label='Fields' }

___
### loadDrones
{: #loadDrones .lua-content-item aria-label='Fields' }
#### string .loadDrones
{: aria-label='Fields' }

___
### loadWeapons
{: #loadWeapons .lua-content-item aria-label='Fields' }
#### string .loadWeapons
{: aria-label='Fields' }

___
### maxCrew
{: #maxCrew .lua-content-item aria-label='Fields' }
#### integer .maxCrew
{: aria-label='Fields' }

___
### maxPower
{: #maxPower .lua-content-item aria-label='Fields' }
#### integer .maxPower
{: aria-label='Fields' }

___
### maxSector
{: #maxSector .lua-content-item aria-label='Fields' }
#### integer .maxSector
{: aria-label='Fields' }

___
### minSector
{: #minSector .lua-content-item aria-label='Fields' }
#### integer .minSector
{: aria-label='Fields' }

___
### missiles
{: #missiles .lua-content-item aria-label='Fields' }
#### integer .missiles
{: aria-label='Fields' }

___
### name
{: #name .lua-content-item aria-label='Fields' }
#### [TextString](../Hyperspace/TextString) .name
{: aria-label='Fields' }

___
### originalCrewCount
{: #originalCrewCount .lua-content-item aria-label='Fields' }
#### integer .originalCrewCount
{: aria-label='Fields' }

___
### originalDroneCount
{: #originalDroneCount .lua-content-item aria-label='Fields' }
#### integer .originalDroneCount
{: aria-label='Fields' }

___
### originalWeaponCount
{: #originalWeaponCount .lua-content-item aria-label='Fields' }
#### integer .originalWeaponCount
{: aria-label='Fields' }

___
### shieldFile
{: #shieldFile .lua-content-item aria-label='Fields' }
#### string .shieldFile
{: aria-label='Fields' }

___
### shipClass
{: #shipClass .lua-content-item aria-label='Fields' }
#### [TextString](../Hyperspace/TextString) .shipClass
{: aria-label='Fields' }

___
### systemInfo
{: #systemInfo .lua-content-item aria-label='Fields' }
#### map\<integer, [SystemTemplate](../Hyperspace/SystemTemplate)\> .systemInfo
{: aria-label='Fields' }

___
### systems
{: #systems .lua-content-item aria-label='Fields' }
#### vector\<integer\> .systems
{: aria-label='Fields' }

___
### unlock
{: #unlock .lua-content-item aria-label='Fields' }
#### [TextString](../Hyperspace/TextString) .unlock
{: aria-label='Fields' }

___
### weaponCount
{: #weaponCount .lua-content-item aria-label='Fields' }
#### integer .weaponCount
{: aria-label='Fields' }

___
### weaponSlots
{: #weaponSlots .lua-content-item aria-label='Fields' }
#### integer .weaponSlots
{: aria-label='Fields' }

___
### weapons
{: #weapons .lua-content-item aria-label='Fields' }
#### vector\<string\> .weapons
{: aria-label='Fields' }

___
