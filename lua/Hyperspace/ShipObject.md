---
layout: lua
title: ShipObject
lang: en
category: Class
---

# Class "ShipObject"



Subclasses: [ProjectileFactory](../Hyperspace/ProjectileFactory), [Ship](../Hyperspace/Ship), [ShipManager](../Hyperspace/ShipManager), [Spreader_Fire](../Hyperspace/Spreader_Fire)

<!-- Head content to be pulled from "lua-source-parts-inject/Hyperspace/ShipObject/_head.md" -->





## Methods
{: #Methods .lua-content-section}
### AddAugmentation ()
{: #AddAugmentation .lua-content-item aria-label='Methods' }
#### boolean :AddAugmentation (string augment)
{: aria-label='Methods' }
<!-- Content pulled from "lua-source-parts-inject/Hyperspace/ShipObject/AddAugmentation(string).md" -->
Adds the specified augment to the ship. Works properly with hidden augments.
<!-- End of content -->

___
### ClearShipInfo ()
{: #ClearShipInfo .lua-content-item aria-label='Methods' }
#### void :ClearShipInfo ()
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ShipObject/ClearShipInfo().md" -->

___
### GetAugmentationCount ()
{: #GetAugmentationCount .lua-content-item aria-label='Methods' }
#### integer :GetAugmentationCount ()
{: aria-label='Methods' }
<!-- Content pulled from "lua-source-parts-inject/Hyperspace/ShipObject/GetAugmentationCount().md" -->
Returns the number of augments on the ship.
<!-- End of content -->

___
### GetAugmentationList ()
{: #GetAugmentationList .lua-content-item aria-label='Methods' }
#### vector\<string\> :GetAugmentationList ()
{: aria-label='Methods' }
<!-- Content pulled from "lua-source-parts-inject/Hyperspace/ShipObject/GetAugmentationList().md" -->
Returns a `std::vector<std::string>` of augments, in Lua you can handle this as if it was an array of strings.
<!-- End of content -->

___
### GetAugmentationValue ()
{: #GetAugmentationValue .lua-content-item aria-label='Methods' }
#### number :GetAugmentationValue (string augment)
{: aria-label='Methods' }
<!-- Content pulled from "lua-source-parts-inject/Hyperspace/ShipObject/GetAugmentationValue(string).md" -->
Returns the value of the augment, this corresponds to the value defined in blueprints.xml. If the ship has multiple, their values are added together.
<!-- End of content -->

___
### HasAugmentation ()
{: #HasAugmentation .lua-content-item aria-label='Methods' }
#### integer :HasAugmentation (string augment)
{: aria-label='Methods' }
<!-- Content pulled from "lua-source-parts-inject/Hyperspace/ShipObject/HasAugmentation(string).md" -->
Returns the number of the given augment you have, NOT a bool.
<!-- End of content -->

___
### HasEquipment ()
{: #HasEquipment .lua-content-item aria-label='Methods' }
#### integer :HasEquipment (string equipmentName, boolean checkCargo=false)
{: aria-label='Methods' }
<!-- Content pulled from "lua-source-parts-inject/Hyperspace/ShipObject/HasEquipment(string,boolean).md" -->
Returns an int indicating whether you have the blue options for the specified equipment.
checkCargo indicates if cargo will be included in the check.
<!-- End of content -->

___
### HasEquipment ()
{: #HasEquipment .lua-content-item aria-label='Methods' }
#### integer :HasEquipment (string equip)
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ShipObject/HasEquipment(string).md" -->

___
### RemoveAugmentation ()
{: #RemoveAugmentation .lua-content-item aria-label='Methods' }
#### void :RemoveAugmentation (string augment)
{: aria-label='Methods' }
<!-- Content pulled from "lua-source-parts-inject/Hyperspace/ShipObject/RemoveAugmentation(string).md" -->
Removes the specified augment from the ship. Does nothing if the augment isn't present. Works properly with hidden augments.
<!-- End of content -->

___


## Fields
{: #Fields .lua-content-section}
### iShipId (Read-only)
{: #iShipId .lua-content-item aria-label='Fields' }
#### integer .iShipId
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ShipObject/iShipId.md" -->

___
