---
layout: lua
title: ShipObject
lang: en
---

# Class "ShipObject"





## Methods
### AddAugmentation ()
{: aria-label='Functions' }
#### boolean :AddAugmentation (string augment)
{: aria-label='Functions' }
Adds the specified augment to the ship. Works properly with hidden augments.

______
### ClearShipInfo ()
{: aria-label='Functions' }
#### void :ClearShipInfo ()
{: aria-label='Functions' }

______
### GetAugmentationCount ()
{: aria-label='Functions' }
#### integer :GetAugmentationCount ()
{: aria-label='Functions' }
Returns the number of augments on the ship.

______
### GetAugmentationList ()
{: aria-label='Functions' }
#### vector\<string\> :GetAugmentationList ()
{: aria-label='Functions' }
Returns a `std::vector<std::string>` of augments, in Lua you can handle this as if it was an array of strings.

______
### GetAugmentationValue ()
{: aria-label='Functions' }
#### number :GetAugmentationValue (string augment)
{: aria-label='Functions' }
Returns the value of the augment, this corresponds to the value defined in blueprints.xml. If the ship has multiple, their values are added together.

______
### HasAugmentation ()
{: aria-label='Functions' }
#### integer :HasAugmentation (string augment)
{: aria-label='Functions' }
Returns the number of the given augment you have, NOT a bool.

______
### HasEquipment ()
{: aria-label='Functions' }
#### integer :HasEquipment (string equipmentName, boolean checkCargo=false)
{: aria-label='Functions' }
Returns an int indicating whether you have the blue options for the specified equipment.
checkCargo indicates if cargo will be included in the check.

______
### HasEquipment ()
{: aria-label='Functions' }
#### integer :HasEquipment (string equip)
{: aria-label='Functions' }

______
### RemoveAugmentation ()
{: aria-label='Functions' }
#### void :RemoveAugmentation (string augment)
{: aria-label='Functions' }
Removes the specified augment from the ship. Does nothing if the augment isn't present. Works properly with hidden augments.

___


## Fields
### iShipId (Read-only)
{: aria-label='Variables' }
#### integer .iShipId
{: aria-label='Variables' }

___
