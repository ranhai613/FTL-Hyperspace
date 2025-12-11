---
layout: lua
title: ShipGenerator
lang: en
---

# Class "ShipGenerator"


## Constructors
{: #Constructors .section}
### ShipGenerator ()
{: #ShipGenerator aria-label='Constructors' }
#### [ShipGenerator](../Hyperspace/ShipGenerator) ShipGenerator ()
{: aria-label='Constructors' }

___



## Static Methods
{: #Static-Methods .section}
### CreateShip ()
{: #CreateShip aria-label='StaticMethods' }
#### [ShipManager](../Hyperspace/ShipManager) .CreateShip (string name, integer sector, ShipEvent event)
{: aria-label='StaticMethods' }

___
### GenerateSystemMaxes ()
{: #GenerateSystemMaxes aria-label='StaticMethods' }
#### vector\<integer\> .GenerateSystemMaxes ([ShipBlueprint](../Hyperspace/ShipBlueprint) ship, integer level)
{: aria-label='StaticMethods' }

___
### GetPossibleCrewList ()
{: #GetPossibleCrewList aria-label='StaticMethods' }
#### vector\<[CrewBlueprint](../Hyperspace/CrewBlueprint)\> .GetPossibleCrewList ([ShipManager](../Hyperspace/ShipManager) ship, string crewList, uint flags)
{: aria-label='StaticMethods' }

___
### GetPossibleDroneList ()
{: #GetPossibleDroneList aria-label='StaticMethods' }
#### vector\<[DroneBlueprint](../Hyperspace/DroneBlueprint)\> .GetPossibleDroneList ([ShipManager](../Hyperspace/ShipManager) ship, string droneList, integer scrap, uint flags, boolean repeat)
{: aria-label='StaticMethods' }

___
### GetPossibleSystemUpgrades ()
{: #GetPossibleSystemUpgrades aria-label='StaticMethods' }
#### vector\<integer\> .GetPossibleSystemUpgrades ([ShipManager](../Hyperspace/ShipManager) ship, vector\<integer\> systemMaxes, integer scrap, integer type)
{: aria-label='StaticMethods' }

___
### GetPossibleWeaponList ()
{: #GetPossibleWeaponList aria-label='StaticMethods' }
#### vector\<[WeaponBlueprint](../Hyperspace/WeaponBlueprint)\> .GetPossibleWeaponList ([ShipManager](../Hyperspace/ShipManager) ship, string weaponList, integer scrap, uint flags)
{: aria-label='StaticMethods' }

___
### UpgradeSystem ()
{: #UpgradeSystem aria-label='StaticMethods' }
#### boolean .UpgradeSystem ([ShipManager](../Hyperspace/ShipManager) ship, vector\<integer\> systemMaxes, uint sysId)
{: aria-label='StaticMethods' }

___


