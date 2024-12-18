#include "Global.h"

HOOK_METHOD(InfoBox, SetBlueprintWeapon, (const WeaponBlueprint* bp, int status, bool hasWeaponSystem, int yShift) -> void)
{
    LOG_HOOK("HOOK_METHOD -> InfoBox::SetBlueprintWeapon -> Begin (CustomEquipment.cpp)\n")
    if (hasWeaponSystem && status == 1)
    {
        return super(bp, 2, hasWeaponSystem, yShift);
    }

    super(bp, 2, hasWeaponSystem, yShift);
}


HOOK_METHOD(InfoBox, SetBlueprintWeapon, (const WeaponBlueprint* bp, int status, bool hasWeaponSystem, int yShift) -> void)
{
    LOG_HOOK("HOOK_METHOD -> InfoBox::SetBlueprintWeapon -> Begin (CustomEquipment.cpp)\n")
    super(bp, status, hasWeaponSystem, yShift);

    Pointf titleSize = freetype::easy_measurePrintLines(16, 0, 0, descBoxSize.x, desc.title.GetText());
    Pointf descSize = freetype::easy_measurePrintLines(10, 0, 0, descBoxSize.x, desc.description.GetText());

    Pointf boxSize = titleSize + descSize + Pointf(0, 28.f);
    boxSize.y = std::max(boxSize.y, 252.f);

    delete primaryBox;
    primaryBox = new WindowFrame(7, 7, 323, boxSize.y);


    descBoxSize.y = boxSize.y + 14.f;
}


HOOK_METHOD_PRIORITY(Equipment, GetCargoHold, 9999, () -> std::vector<std::string>)
{
    LOG_HOOK("HOOK_METHOD_PRIORITY -> Equipment::GetCargoHold -> Begin (CustomEquipment.cpp)\n")
    // Rewrite to fix a vanilla item duplication bug.

    std::vector<std::string> ret = std::vector<std::string>();

    for (unsigned int i = this->cargoId; i<this->vEquipmentBoxes.size(); ++i)
    {
        if (!this->vEquipmentBoxes[i]->IsEmpty())
        {
            Blueprint *bp = this->vEquipmentBoxes[i]->GetBlueprint();
            ret.push_back(bp->name);
        }
    }

    return ret;
}

HOOK_METHOD_PRIORITY(Equipment, AddToCargo, 9999, (const std::string& name) -> void)
{
    LOG_HOOK("HOOK_METHOD_PRIORITY -> Equipment::AddToCargo -> Begin (CustomEquipment.cpp)\n")
    // Rewrite to fix deleting 0 power weapons/drones in cargo.

    WeaponBlueprint *weapon = G_->GetBlueprints()->GetWeaponBlueprint(name);
    if (weapon && weapon->type != -1)
    {
        AddWeapon(weapon,true,true);
        return;
    }

    DroneBlueprint *drone = G_->GetBlueprints()->GetDroneBlueprint(name);
    if (drone && drone->type != -1)
    {
        AddDrone(drone,true,true);
        return;
    }

    AugmentBlueprint *aug = G_->GetBlueprints()->GetAugmentBlueprint(name);
    if (aug && !aug->name.empty())
    {
        AddAugment(aug,true,true);
        return;
    }
}

HOOK_METHOD(Equipment, AddWeapon, (WeaponBlueprint *weaponBlueprint, bool free, bool forceCargo) -> void)
{
    if (!forceCargo && shipManager->HasSystem(3) && shipManager->weaponSystem->weapons.size() < shipManager->myBlueprint.weaponSlots)
    {
        shipManager->AddWeapon(weaponBlueprint, -1);
        auto weaponSys = shipManager->weaponSystem; // origi: shipManager->GetWeaponSystem()
        auto droneSys = shipManager->droneSystem; // origi: shipManager->GetDroneSystem()
        for (auto equipBox : vEquipmentBoxes)
        {
            equipBox->weaponSys = weaponSys;
            equipBox->droneSys = droneSys;
            // origi: equipBox->CheckContents(); // which does nothing
        }
        return;
    }

    forceCargo = shipManager->weaponSystem->weapons.size() == shipManager->myBlueprint.weaponSlots;
    ProjectileFactory *pf = new ProjectileFactory(weaponBlueprint, shipManager->iShipId);
    weaponsTrashList.push_back(pf);
    EquipmentBoxItem item;
    item.pDrone = nullptr;
    item.pCrew = nullptr;
    item.augment = nullptr;
    item.pWeapon = pf;
    
    for (unsigned int i = forceCargo ? cargoId : 0; i < vEquipmentBoxes.size(); ++i)
    {
        auto equipBox = vEquipmentBoxes[i];
        if (equipBox->IsEmpty() && equipBox->CanHoldWeapon() && equipBox != overcapacityBox)
        {
            equipBox->AddItem(item);
            return;
        }
    }
    bOpen = true; // origi: Open()
    overcapacityBox->AddItem(item);
    bOverCapacity = true;
}

HOOK_METHOD(Equipment, OnRender, () -> void)
{
    CSurface::GL_PushMatrix();
    if (bStoreMode)
    {
        sellBox.sellCostText = sellCostText;
        sellBox.OnRender();
    }
    CSurface::GL_Translate(position.x, position.y);
    if (bStoreMode)
    {
        G_->GetResources()->RenderImage(storeBox, 0, 0, 0, COLOR_WHITE, 1.f, false);
    }
    else
    {
        G_->GetResources()->RenderImage(box, 0, -7, 0, COLOR_WHITE, 1.f, false);
    }
    CSurface::GL_SetColor(COLOR_BUTTON_TEXT);
    if (bStoreMode)
    {
        Store::DrawBuySellTabText();
    }
    auto lib = G_->GetTextLibrary();
    freetype::easy_print(62, 18.f, 44.f, lib->GetText("equipment_frame_weapons"));
    freetype::easy_print(62, 18.f, 154.f, lib->GetText("equipment_frame_drones"));
    freetype::easy_print(62, 18.f, 264.f, lib->GetText("equipment_frame_cargo"));
    freetype::easy_print(62, 307.f, 264.f, lib->GetText("equipment_frame_augments"));
    CSurface::GL_SetColor(COLOR_WHITE);
    if (bOverCapacity)
    {
        overBox.OnRender();
    }
    if (bOverAugCapacity)
    {
        overAugImage.OnRender();
    }
    CSurface::GL_PopMatrix();
    //wip
}
