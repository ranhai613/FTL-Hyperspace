---
layout: lua
title: ShipGenerator
lang: en
category: Class
---

# Class "ShipGenerator"

<!-- Head content to be pulled from "lua-source-parts-inject/Hyperspace/ShipGenerator/_head.md" -->


## Constructors
{: #Constructors .lua-content-section}
### ShipGenerator ()
{: #ShipGenerator .lua-content-item aria-label='Constructors' }
#### [ShipGenerator](../Hyperspace/ShipGenerator) ShipGenerator ()
{: aria-label='Constructors' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ShipGenerator/ShipGenerator().md" -->

___



## Static Methods
{: #Static-Methods .lua-content-section}
### CreateShip ()
{: #CreateShip .lua-content-item aria-label='StaticMethods' }
#### [ShipManager](../Hyperspace/ShipManager) .CreateShip (string name, integer sector, ShipEvent event)
{: aria-label='StaticMethods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ShipGenerator/CreateShip(string,integer,ShipEvent).md" -->

___
### GenerateSystemMaxes ()
{: #GenerateSystemMaxes .lua-content-item aria-label='StaticMethods' }
#### vector\<integer\> .GenerateSystemMaxes ([ShipBlueprint](../Hyperspace/ShipBlueprint) ship, integer level)
{: aria-label='StaticMethods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ShipGenerator/GenerateSystemMaxes(Hyperspace.ShipBlueprint,integer).md" -->

___
### GetPossibleCrewList ()
{: #GetPossibleCrewList .lua-content-item aria-label='StaticMethods' }
#### vector\<[CrewBlueprint](../Hyperspace/CrewBlueprint)\> .GetPossibleCrewList ([ShipManager](../Hyperspace/ShipManager) ship, string crewList, uint flags)
{: aria-label='StaticMethods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ShipGenerator/GetPossibleCrewList(Hyperspace.ShipManager,string,uint).md" -->

___
### GetPossibleDroneList ()
{: #GetPossibleDroneList .lua-content-item aria-label='StaticMethods' }
#### vector\<[DroneBlueprint](../Hyperspace/DroneBlueprint)\> .GetPossibleDroneList ([ShipManager](../Hyperspace/ShipManager) ship, string droneList, integer scrap, uint flags, boolean repeat)
{: aria-label='StaticMethods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ShipGenerator/GetPossibleDroneList(Hyperspace.ShipManager,string,integer,uint,boolean).md" -->

___
### GetPossibleSystemUpgrades ()
{: #GetPossibleSystemUpgrades .lua-content-item aria-label='StaticMethods' }
#### vector\<integer\> .GetPossibleSystemUpgrades ([ShipManager](../Hyperspace/ShipManager) ship, vector\<integer\> systemMaxes, integer scrap, integer type)
{: aria-label='StaticMethods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ShipGenerator/GetPossibleSystemUpgrades(Hyperspace.ShipManager,vector_integer_,integer,integer).md" -->

___
### GetPossibleWeaponList ()
{: #GetPossibleWeaponList .lua-content-item aria-label='StaticMethods' }
#### vector\<[WeaponBlueprint](../Hyperspace/WeaponBlueprint)\> .GetPossibleWeaponList ([ShipManager](../Hyperspace/ShipManager) ship, string weaponList, integer scrap, uint flags)
{: aria-label='StaticMethods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ShipGenerator/GetPossibleWeaponList(Hyperspace.ShipManager,string,integer,uint).md" -->

___
### UpgradeSystem ()
{: #UpgradeSystem .lua-content-item aria-label='StaticMethods' }
#### boolean .UpgradeSystem ([ShipManager](../Hyperspace/ShipManager) ship, vector\<integer\> systemMaxes, uint sysId)
{: aria-label='StaticMethods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ShipGenerator/UpgradeSystem(Hyperspace.ShipManager,vector_integer_,uint).md" -->

___


