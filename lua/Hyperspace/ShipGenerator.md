---
layout: lua
title: ShipGenerator
lang: en
---

# Class "ShipGenerator"


## Constructors
### ShipGenerator ()
{: aria-label='Constructors' }
#### [ShipGenerator](../Hyperspace/ShipGenerator) ShipGenerator ()
{: aria-label='Constructors' }

___



## Static Methods
### CreateShip ()
{: aria-label='StaticFunctions' }
#### [ShipManager](../Hyperspace/ShipManager) .CreateShip (string name, integer sector, ShipEvent event)
{: aria-label='StaticFunctions' }

______
### GenerateSystemMaxes ()
{: aria-label='StaticFunctions' }
#### vector\<integer\> .GenerateSystemMaxes ([ShipBlueprint](../Hyperspace/ShipBlueprint) ship, integer level)
{: aria-label='StaticFunctions' }

______
### GetPossibleCrewList ()
{: aria-label='StaticFunctions' }
#### vector\<[CrewBlueprint](../Hyperspace/CrewBlueprint)\> .GetPossibleCrewList ([ShipManager](../Hyperspace/ShipManager) ship, string crewList, uint flags)
{: aria-label='StaticFunctions' }

______
### GetPossibleDroneList ()
{: aria-label='StaticFunctions' }
#### vector\<[DroneBlueprint](../Hyperspace/DroneBlueprint)\> .GetPossibleDroneList ([ShipManager](../Hyperspace/ShipManager) ship, string droneList, integer scrap, uint flags, boolean repeat)
{: aria-label='StaticFunctions' }

______
### GetPossibleSystemUpgrades ()
{: aria-label='StaticFunctions' }
#### vector\<integer\> .GetPossibleSystemUpgrades ([ShipManager](../Hyperspace/ShipManager) ship, vector\<integer\> systemMaxes, integer scrap, integer type)
{: aria-label='StaticFunctions' }

______
### GetPossibleWeaponList ()
{: aria-label='StaticFunctions' }
#### vector\<[WeaponBlueprint](../Hyperspace/WeaponBlueprint)\> .GetPossibleWeaponList ([ShipManager](../Hyperspace/ShipManager) ship, string weaponList, integer scrap, uint flags)
{: aria-label='StaticFunctions' }

______
### UpgradeSystem ()
{: aria-label='StaticFunctions' }
#### boolean .UpgradeSystem ([ShipManager](../Hyperspace/ShipManager) ship, vector\<integer\> systemMaxes, uint sysId)
{: aria-label='StaticFunctions' }

___


