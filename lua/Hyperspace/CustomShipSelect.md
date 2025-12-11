---
layout: lua
title: CustomShipSelect
lang: en
---

# Class "CustomShipSelect"


## Constructors
{: #Constructors .section}
### CustomShipSelect ()
{: #CustomShipSelect aria-label='Constructors' }
#### [CustomShipSelect](../Hyperspace/CustomShipSelect) CustomShipSelect ()
{: aria-label='Constructors' }

___



## Static Methods
{: #Static-Methods .section}
### GetInstance ()
{: #GetInstance aria-label='StaticMethods' }
#### [CustomShipSelect](../Hyperspace/CustomShipSelect) .GetInstance ()
{: aria-label='StaticMethods' }

___


## Methods
{: #Methods .section}
### ClearSelection ()
{: #ClearSelection aria-label='Methods' }
#### void :ClearSelection ()
{: aria-label='Methods' }

___
### CountUnlockedShips ()
{: #CountUnlockedShips aria-label='Methods' }
#### integer :CountUnlockedShips (integer variant)
{: aria-label='Methods' }

___
### FirstPage ()
{: #FirstPage aria-label='Methods' }
#### boolean :FirstPage ()
{: aria-label='Methods' }

___
### GetCurrentPage ()
{: #GetCurrentPage aria-label='Methods' }
#### integer :GetCurrentPage ()
{: aria-label='Methods' }

___
### GetDefaultDefinition ()
{: #GetDefaultDefinition aria-label='Methods' }
#### [CustomShipDefinition](../Hyperspace/CustomShipDefinition) :GetDefaultDefinition ()
{: aria-label='Methods' }

___
### GetDefinition ()
{: #GetDefinition aria-label='Methods' }
#### [CustomShipDefinition](../Hyperspace/CustomShipDefinition) :GetDefinition (string name)
{: aria-label='Methods' }

___
### GetLastSelected ()
{: #GetLastSelected aria-label='Methods' }
#### integer :GetLastSelected ()
{: aria-label='Methods' }

___
### GetMaxPages ()
{: #GetMaxPages aria-label='Methods' }
#### integer :GetMaxPages ()
{: aria-label='Methods' }

___
### GetOrderedShipButtonDefinition ()
{: #GetOrderedShipButtonDefinition aria-label='Methods' }
#### [ShipButtonDefinition](../Hyperspace/ShipButtonDefinition) :GetOrderedShipButtonDefinition (integer id)
{: aria-label='Methods' }

___
### GetRandomShipIndex ()
{: #GetRandomShipIndex aria-label='Methods' }
#### integer :GetRandomShipIndex ()
{: aria-label='Methods' }

___
### GetSelectedId ()
{: #GetSelectedId aria-label='Methods' }
#### integer :GetSelectedId ()
{: aria-label='Methods' }

___
### GetSelection ()
{: #GetSelection aria-label='Methods' }
#### integer :GetSelection ()
{: aria-label='Methods' }

___
### GetShipBlueprint ()
{: #GetShipBlueprint aria-label='Methods' }
#### string :GetShipBlueprint (integer shipId)
{: aria-label='Methods' }

___
### GetShipButtonDefinition ()
{: #GetShipButtonDefinition aria-label='Methods' }
#### [ShipButtonDefinition](../Hyperspace/ShipButtonDefinition) :GetShipButtonDefinition (integer id)
{: aria-label='Methods' }

___
### GetShipButtonIdFromName ()
{: #GetShipButtonIdFromName aria-label='Methods' }
#### integer :GetShipButtonIdFromName (string name)
{: aria-label='Methods' }

___
### GetShipButtonListFromID ()
{: #GetShipButtonListFromID aria-label='Methods' }
#### [ShipButtonList](../Hyperspace/ShipButtonList) :GetShipButtonListFromID (integer id)
{: aria-label='Methods' }

___
### GetShipButtonLists ()
{: #GetShipButtonLists aria-label='Methods' }
#### vector\<[ShipButtonList](../Hyperspace/ShipButtonList)\> :GetShipButtonLists ()
{: aria-label='Methods' }

___
### GetShipButtonOrderIndex ()
{: #GetShipButtonOrderIndex aria-label='Methods' }
#### integer :GetShipButtonOrderIndex (integer id)
{: aria-label='Methods' }

___
### GetShipIdAndVariantFromName ()
{: #GetShipIdAndVariantFromName aria-label='Methods' }
#### pair\<integer, integer\> :GetShipIdAndVariantFromName (string name)
{: aria-label='Methods' }

___
### IsOpen ()
{: #IsOpen aria-label='Methods' }
#### boolean :IsOpen ()
{: aria-label='Methods' }

___
### ShipCount ()
{: #ShipCount aria-label='Methods' }
#### integer :ShipCount (integer type=0)
{: aria-label='Methods' }

___


## Fields
{: #Fields .section}
### customShipOrder
{: #customShipOrder aria-label='Fields' }
#### vector\<string\> .customShipOrder
{: aria-label='Fields' }
Each pages is %11 ships, `empty` means that a ship button in the page is skipped, special ships are the two last slots.

___
