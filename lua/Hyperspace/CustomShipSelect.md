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
{: aria-label='StaticFunctions' }
#### [CustomShipSelect](../Hyperspace/CustomShipSelect) .GetInstance ()
{: aria-label='StaticFunctions' }

___


## Methods
### ClearSelection ()
{: aria-label='Functions' }
#### void :ClearSelection ()
{: aria-label='Functions' }

______
### CountUnlockedShips ()
{: aria-label='Functions' }
#### integer :CountUnlockedShips (integer variant)
{: aria-label='Functions' }

______
### FirstPage ()
{: aria-label='Functions' }
#### boolean :FirstPage ()
{: aria-label='Functions' }

______
### GetCurrentPage ()
{: aria-label='Functions' }
#### integer :GetCurrentPage ()
{: aria-label='Functions' }

______
### GetDefaultDefinition ()
{: aria-label='Functions' }
#### [CustomShipDefinition](../Hyperspace/CustomShipDefinition) :GetDefaultDefinition ()
{: aria-label='Functions' }

______
### GetDefinition ()
{: aria-label='Functions' }
#### [CustomShipDefinition](../Hyperspace/CustomShipDefinition) :GetDefinition (string name)
{: aria-label='Functions' }

______
### GetLastSelected ()
{: aria-label='Functions' }
#### integer :GetLastSelected ()
{: aria-label='Functions' }

______
### GetMaxPages ()
{: aria-label='Functions' }
#### integer :GetMaxPages ()
{: aria-label='Functions' }

______
### GetOrderedShipButtonDefinition ()
{: aria-label='Functions' }
#### [ShipButtonDefinition](../Hyperspace/ShipButtonDefinition) :GetOrderedShipButtonDefinition (integer id)
{: aria-label='Functions' }

______
### GetRandomShipIndex ()
{: aria-label='Functions' }
#### integer :GetRandomShipIndex ()
{: aria-label='Functions' }

______
### GetSelectedId ()
{: aria-label='Functions' }
#### integer :GetSelectedId ()
{: aria-label='Functions' }

______
### GetSelection ()
{: aria-label='Functions' }
#### integer :GetSelection ()
{: aria-label='Functions' }

______
### GetShipBlueprint ()
{: aria-label='Functions' }
#### string :GetShipBlueprint (integer shipId)
{: aria-label='Functions' }

______
### GetShipButtonDefinition ()
{: aria-label='Functions' }
#### [ShipButtonDefinition](../Hyperspace/ShipButtonDefinition) :GetShipButtonDefinition (integer id)
{: aria-label='Functions' }

______
### GetShipButtonIdFromName ()
{: aria-label='Functions' }
#### integer :GetShipButtonIdFromName (string name)
{: aria-label='Functions' }

______
### GetShipButtonListFromID ()
{: aria-label='Functions' }
#### [ShipButtonList](../Hyperspace/ShipButtonList) :GetShipButtonListFromID (integer id)
{: aria-label='Functions' }

______
### GetShipButtonLists ()
{: aria-label='Functions' }
#### vector\<[ShipButtonList](../Hyperspace/ShipButtonList)\> :GetShipButtonLists ()
{: aria-label='Functions' }

______
### GetShipButtonOrderIndex ()
{: aria-label='Functions' }
#### integer :GetShipButtonOrderIndex (integer id)
{: aria-label='Functions' }

______
### GetShipIdAndVariantFromName ()
{: aria-label='Functions' }
#### pair\<integer, integer\> :GetShipIdAndVariantFromName (string name)
{: aria-label='Functions' }

______
### IsOpen ()
{: aria-label='Functions' }
#### boolean :IsOpen ()
{: aria-label='Functions' }

______
### ShipCount ()
{: aria-label='Functions' }
#### integer :ShipCount (integer type=0)
{: aria-label='Functions' }

___


## Fields
### customShipOrder
{: aria-label='Variables' }
#### vector\<string\> .customShipOrder
{: aria-label='Variables' }
Each pages is %11 ships, `empty` means that a ship button in the page is skipped, special ships are the two last slots.

___
