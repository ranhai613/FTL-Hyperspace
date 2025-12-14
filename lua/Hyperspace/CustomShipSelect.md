---
layout: lua
title: CustomShipSelect
lang: en
category: Class
---

# Class "CustomShipSelect"


## Constructors
{: #Constructors .lua-content-section}
### CustomShipSelect ()
{: #CustomShipSelect .lua-content-item aria-label='Constructors' }
#### [CustomShipSelect](../Hyperspace/CustomShipSelect) CustomShipSelect ()
{: aria-label='Constructors' }

___



## Static Methods
{: #Static-Methods .lua-content-section}
### GetInstance ()
{: #GetInstance .lua-content-item aria-label='StaticMethods' }
#### [CustomShipSelect](../Hyperspace/CustomShipSelect) .GetInstance ()
{: aria-label='StaticMethods' }

___


## Methods
{: #Methods .lua-content-section}
### ClearSelection ()
{: #ClearSelection .lua-content-item aria-label='Methods' }
#### void :ClearSelection ()
{: aria-label='Methods' }

___
### CountUnlockedShips ()
{: #CountUnlockedShips .lua-content-item aria-label='Methods' }
#### integer :CountUnlockedShips (integer variant)
{: aria-label='Methods' }

___
### FirstPage ()
{: #FirstPage .lua-content-item aria-label='Methods' }
#### boolean :FirstPage ()
{: aria-label='Methods' }

___
### GetCurrentPage ()
{: #GetCurrentPage .lua-content-item aria-label='Methods' }
#### integer :GetCurrentPage ()
{: aria-label='Methods' }

___
### GetDefaultDefinition ()
{: #GetDefaultDefinition .lua-content-item aria-label='Methods' }
#### [CustomShipDefinition](../Hyperspace/CustomShipDefinition) :GetDefaultDefinition ()
{: aria-label='Methods' }

___
### GetDefinition ()
{: #GetDefinition .lua-content-item aria-label='Methods' }
#### [CustomShipDefinition](../Hyperspace/CustomShipDefinition) :GetDefinition (string name)
{: aria-label='Methods' }

___
### GetLastSelected ()
{: #GetLastSelected .lua-content-item aria-label='Methods' }
#### integer :GetLastSelected ()
{: aria-label='Methods' }

___
### GetMaxPages ()
{: #GetMaxPages .lua-content-item aria-label='Methods' }
#### integer :GetMaxPages ()
{: aria-label='Methods' }

___
### GetOrderedShipButtonDefinition ()
{: #GetOrderedShipButtonDefinition .lua-content-item aria-label='Methods' }
#### [ShipButtonDefinition](../Hyperspace/ShipButtonDefinition) :GetOrderedShipButtonDefinition (integer id)
{: aria-label='Methods' }

___
### GetRandomShipIndex ()
{: #GetRandomShipIndex .lua-content-item aria-label='Methods' }
#### integer :GetRandomShipIndex ()
{: aria-label='Methods' }

___
### GetSelectedId ()
{: #GetSelectedId .lua-content-item aria-label='Methods' }
#### integer :GetSelectedId ()
{: aria-label='Methods' }

___
### GetSelection ()
{: #GetSelection .lua-content-item aria-label='Methods' }
#### integer :GetSelection ()
{: aria-label='Methods' }

___
### GetShipBlueprint ()
{: #GetShipBlueprint .lua-content-item aria-label='Methods' }
#### string :GetShipBlueprint (integer shipId)
{: aria-label='Methods' }

___
### GetShipButtonDefinition ()
{: #GetShipButtonDefinition .lua-content-item aria-label='Methods' }
#### [ShipButtonDefinition](../Hyperspace/ShipButtonDefinition) :GetShipButtonDefinition (integer id)
{: aria-label='Methods' }

___
### GetShipButtonIdFromName ()
{: #GetShipButtonIdFromName .lua-content-item aria-label='Methods' }
#### integer :GetShipButtonIdFromName (string name)
{: aria-label='Methods' }

___
### GetShipButtonListFromID ()
{: #GetShipButtonListFromID .lua-content-item aria-label='Methods' }
#### [ShipButtonList](../Hyperspace/ShipButtonList) :GetShipButtonListFromID (integer id)
{: aria-label='Methods' }

___
### GetShipButtonLists ()
{: #GetShipButtonLists .lua-content-item aria-label='Methods' }
#### vector\<[ShipButtonList](../Hyperspace/ShipButtonList)\> :GetShipButtonLists ()
{: aria-label='Methods' }

___
### GetShipButtonOrderIndex ()
{: #GetShipButtonOrderIndex .lua-content-item aria-label='Methods' }
#### integer :GetShipButtonOrderIndex (integer id)
{: aria-label='Methods' }

___
### GetShipIdAndVariantFromName ()
{: #GetShipIdAndVariantFromName .lua-content-item aria-label='Methods' }
#### pair\<integer, integer\> :GetShipIdAndVariantFromName (string name)
{: aria-label='Methods' }

___
### IsOpen ()
{: #IsOpen .lua-content-item aria-label='Methods' }
#### boolean :IsOpen ()
{: aria-label='Methods' }

___
### ShipCount ()
{: #ShipCount .lua-content-item aria-label='Methods' }
#### integer :ShipCount (integer type=0)
{: aria-label='Methods' }

___


## Fields
{: #Fields .lua-content-section}
### customShipOrder
{: #customShipOrder .lua-content-item aria-label='Fields' }
#### vector\<string\> .customShipOrder
{: aria-label='Fields' }
Each pages is %11 ships, `empty` means that a ship button in the page is skipped, special ships are the two last slots.

___
