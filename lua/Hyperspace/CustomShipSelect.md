---
layout: lua
title: CustomShipSelect
lang: en
---

# Class "CustomShipSelect"


## Constructors
### CustomShipSelect ()
{: aria-label='Constructors' }
#### [CustomShipSelect](../Hyperspace/CustomShipSelect) CustomShipSelect ()
{: aria-label='Constructors' }

___



## Static Methods
### GetInstance ()
{: aria-label='StaticMethods' }
#### [CustomShipSelect](../Hyperspace/CustomShipSelect) .GetInstance ()
{: aria-label='StaticMethods' }

___


## Methods
### ClearSelection ()
{: aria-label='Methods' }
#### void :ClearSelection ()
{: aria-label='Methods' }

______
### CountUnlockedShips ()
{: aria-label='Methods' }
#### integer :CountUnlockedShips (integer variant)
{: aria-label='Methods' }

______
### FirstPage ()
{: aria-label='Methods' }
#### boolean :FirstPage ()
{: aria-label='Methods' }

______
### GetCurrentPage ()
{: aria-label='Methods' }
#### integer :GetCurrentPage ()
{: aria-label='Methods' }

______
### GetDefaultDefinition ()
{: aria-label='Methods' }
#### [CustomShipDefinition](../Hyperspace/CustomShipDefinition) :GetDefaultDefinition ()
{: aria-label='Methods' }

______
### GetDefinition ()
{: aria-label='Methods' }
#### [CustomShipDefinition](../Hyperspace/CustomShipDefinition) :GetDefinition (string name)
{: aria-label='Methods' }

______
### GetLastSelected ()
{: aria-label='Methods' }
#### integer :GetLastSelected ()
{: aria-label='Methods' }

______
### GetMaxPages ()
{: aria-label='Methods' }
#### integer :GetMaxPages ()
{: aria-label='Methods' }

______
### GetOrderedShipButtonDefinition ()
{: aria-label='Methods' }
#### [ShipButtonDefinition](../Hyperspace/ShipButtonDefinition) :GetOrderedShipButtonDefinition (integer id)
{: aria-label='Methods' }

______
### GetRandomShipIndex ()
{: aria-label='Methods' }
#### integer :GetRandomShipIndex ()
{: aria-label='Methods' }

______
### GetSelectedId ()
{: aria-label='Methods' }
#### integer :GetSelectedId ()
{: aria-label='Methods' }

______
### GetSelection ()
{: aria-label='Methods' }
#### integer :GetSelection ()
{: aria-label='Methods' }

______
### GetShipBlueprint ()
{: aria-label='Methods' }
#### string :GetShipBlueprint (integer shipId)
{: aria-label='Methods' }

______
### GetShipButtonDefinition ()
{: aria-label='Methods' }
#### [ShipButtonDefinition](../Hyperspace/ShipButtonDefinition) :GetShipButtonDefinition (integer id)
{: aria-label='Methods' }

______
### GetShipButtonIdFromName ()
{: aria-label='Methods' }
#### integer :GetShipButtonIdFromName (string name)
{: aria-label='Methods' }

______
### GetShipButtonListFromID ()
{: aria-label='Methods' }
#### [ShipButtonList](../Hyperspace/ShipButtonList) :GetShipButtonListFromID (integer id)
{: aria-label='Methods' }

______
### GetShipButtonLists ()
{: aria-label='Methods' }
#### vector\<[ShipButtonList](../Hyperspace/ShipButtonList)\> :GetShipButtonLists ()
{: aria-label='Methods' }

______
### GetShipButtonOrderIndex ()
{: aria-label='Methods' }
#### integer :GetShipButtonOrderIndex (integer id)
{: aria-label='Methods' }

______
### GetShipIdAndVariantFromName ()
{: aria-label='Methods' }
#### pair\<integer, integer\> :GetShipIdAndVariantFromName (string name)
{: aria-label='Methods' }

______
### IsOpen ()
{: aria-label='Methods' }
#### boolean :IsOpen ()
{: aria-label='Methods' }

______
### ShipCount ()
{: aria-label='Methods' }
#### integer :ShipCount (integer type=0)
{: aria-label='Methods' }

___


## Fields
### customShipOrder
{: aria-label='Fields' }
#### vector\<string\> .customShipOrder
{: aria-label='Fields' }
Each pages is %11 ships, `empty` means that a ship button in the page is skipped, special ships are the two last slots.

___
