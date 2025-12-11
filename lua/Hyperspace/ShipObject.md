---
layout: lua
title: ShipObject
lang: en
---

# Class "ShipObject"





## Methods
### AddAugmentation ()
{: aria-label='Methods' }
#### boolean :AddAugmentation (string augment)
{: aria-label='Methods' }
Adds the specified augment to the ship. Works properly with hidden augments.

______
### ClearShipInfo ()
{: aria-label='Methods' }
#### void :ClearShipInfo ()
{: aria-label='Methods' }

______
### GetAugmentationCount ()
{: aria-label='Methods' }
#### integer :GetAugmentationCount ()
{: aria-label='Methods' }
Returns the number of augments on the ship.

______
### GetAugmentationList ()
{: aria-label='Methods' }
#### vector\<string\> :GetAugmentationList ()
{: aria-label='Methods' }
Returns a `std::vector<std::string>` of augments, in Lua you can handle this as if it was an array of strings.

______
### GetAugmentationValue ()
{: aria-label='Methods' }
#### number :GetAugmentationValue (string augment)
{: aria-label='Methods' }
Returns the value of the augment, this corresponds to the value defined in blueprints.xml. If the ship has multiple, their values are added together.

______
### HasAugmentation ()
{: aria-label='Methods' }
#### integer :HasAugmentation (string augment)
{: aria-label='Methods' }
Returns the number of the given augment you have, NOT a bool.

______
### HasEquipment ()
{: aria-label='Methods' }
#### integer :HasEquipment (string equipmentName, boolean checkCargo=false)
{: aria-label='Methods' }
Returns an int indicating whether you have the blue options for the specified equipment.
checkCargo indicates if cargo will be included in the check.

______
### HasEquipment ()
{: aria-label='Methods' }
#### integer :HasEquipment (string equip)
{: aria-label='Methods' }

______
### RemoveAugmentation ()
{: aria-label='Methods' }
#### void :RemoveAugmentation (string augment)
{: aria-label='Methods' }
Removes the specified augment from the ship. Does nothing if the augment isn't present. Works properly with hidden augments.

___


## Fields
### iShipId (Read-only)
{: aria-label='Fields' }
#### integer .iShipId
{: aria-label='Fields' }

___
