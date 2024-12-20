#include "Global.h"
#include "Equipment_Extend.h"

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
        auto weaponSys = shipManager->weaponSystem;
        auto droneSys = shipManager->droneSystem;
        for (auto equipBox : vEquipmentBoxes)
        {
            equipBox->weaponSys = weaponSys;
            equipBox->droneSys = droneSys;
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
    bOpen = true;
    /*
    //original code start

    overcapacityBox->AddItem(item);

    //original code end
    */

    // addition start
    auto ex = EQ_EX(this);
    EquipmentBox *equipBox = new EquipmentBox(Point(overBox.position.x + position.x + 80, 80 * ex->overCapacityBoxes.size()), -1);
    equipBox->AddItem(item);
    ex->overCapacityBoxes.push_back(equipBox);

    //addition end

    //bOverCapacity = true;
}

HOOK_METHOD(Equipment, IsCompletelyFull, (int type) -> bool)
{
    if (type == 0 || type == 1 || type == 3)
    {
        return false;
    }
    return super(type);
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
    int weaponSlots = shipManager->myBlueprint.weaponSlots;
    int droneSlots = shipManager->myBlueprint.droneSlots;
    bool hasWeaopn = shipManager->HasSystem(3);
    bool hasDrone = shipManager->HasSystem(4);
    void* _overcapacityBox = static_cast<void*>(overcapacityBox);
    void* _overAugBox = static_cast<void*>(overAugBox);

    // FYI: vEquipmentBoxes = {weaopn slots..., drone slots..., augment slots..., cargo slots..., over capacity slot, over capacity augment slot}
    for (int i = 0; i < vEquipmentBoxes.size(); ++i)
    {
        // skip unavailable boxes; when you dont install weapon or drone, their boxes are not rendered.
        if ((!hasWeaopn && weaponSlots > i) || (!hasDrone && i >= weaponSlots && weaponSlots + droneSlots > i))
        {
            continue;
        }

        if ((!bOverCapacity && i == vEquipmentBoxes.size() - 2) || (!bOverAugCapacity && i == vEquipmentBoxes.size() - 1))
        {
            continue;
        }

        EquipmentBox *equipBox = vEquipmentBoxes[i];
        // over capacity check have been done by the if statement above. I guess this is just in case.
        if (!bOverCapacity && static_cast<void*>(equipBox) == _overcapacityBox)
        {
            continue;
        }
        if (!bOverAugCapacity && static_cast<void*>(equipBox) == _overAugBox)
        {
            continue;
        }

        equipBox->OnRender(i == draggingEquipBox ? bDragging : false);
        equipBox->RenderLabels(i == draggingEquipBox ? bDragging : false);
    }

    // addition start
    auto ex = EQ_EX(this);
    for (auto equipBox : ex->overCapacityBoxes)
    {
        equipBox->OnRender(false);
        equipBox->RenderLabels(false);
    }
    // addition end

    infoBox.OnRender();
    CSurface::GL_SetColor(COLOR_BUTTON_ON);
    if (!hasWeaopn)
    {
        freetype::easy_printCenter(63, position.x + 301, position.y + 93, lib->GetText("equipment_no_system"));
    }
    if (!hasDrone)
    {
        freetype::easy_printCenter(63, position.x + 301, position.y + 203, lib->GetText("equipment_no_system"));
    }
    CSurface::GL_SetColor(COLOR_WHITE);
    if (bDragging)
    {
        CSurface::GL_PushMatrix();
        CSurface::GL_Translate(currentMouse.x, currentMouse.y);
        vEquipmentBoxes[draggingEquipBox]->RenderIcon();
        CSurface::GL_PopMatrix();
    }
}

HOOK_METHOD(Equipment, MouseMove, (int mX, int mY) -> void)
{
    if (!bDragging)
    {
        FocusWindow::MouseMove(mX, mY);
    }
    selectedEquipBox = -1;
    currentMouse = Point(mX, mY);
    for (auto i : vEquipmentBoxes)
    {
        i->bGlow = false;
    }

    int weaponSlots = shipManager->myBlueprint.weaponSlots;
    int droneSlots = shipManager->myBlueprint.droneSlots;
    bool hasWeaopn = shipManager->HasSystem(3);
    bool hasDrone = shipManager->HasSystem(4);
    void* _overcapacityBox = static_cast<void*>(overcapacityBox);
    void* _overAugBox = static_cast<void*>(overAugBox);

    for (int i = 0; i < vEquipmentBoxes.size(); ++i)
    {
        if ((!hasWeaopn && weaponSlots > i) || (!hasDrone && i >= weaponSlots && weaponSlots + droneSlots > i))
        {
            continue;
        }

        if ((!bOverCapacity && i == vEquipmentBoxes.size() - 2) || (!bOverAugCapacity && i == vEquipmentBoxes.size() - 1))
        {
            continue;
        }

        auto equipBox = vEquipmentBoxes[i];
        equipBox->MouseMove(mX, mY);
        
        if (!equipBox->bMouseHovering)
        {
            continue;
        }

        if (bDragging)
        {
            if (equipBox->bBlocked)
            {
                continue;
            }

            selectedEquipBox = i;
        }
        else
        {
            selectedEquipBox = i;
            if (equipBox->IsEmpty())
            {
                continue;
            }
        }

        equipBox->bGlow = true;
    }

    infoBox.Clear();
    if (selectedEquipBox == -1)
    {
        if (!bDragging)
        {
            bSellingItem = false;
            sellBox.selectedImage = 0;
            return
        }
    }
    else
    {
        vEquipmentBoxes[selectedEquipBox]->SetBlueprint(infoBox, false);
        if (selectedEquipBox == -1 || vEquipmentBoxes[selectedEquipBox]->IsEmpty())
        {
            if (!bDragging)
            {
                bSellingItem = false;
                sellBox.selectedImage = 0;
                return
            }
        }
    }
    
    int iVar4 = bDragging ? draggingEquipBox : (selectedEquipBox == -1 ? draggingEquipBox : selectedEquipBox);
    iVar4 = vEquipmentBoxes[iVar4]->GetItemValue();
    sellCostText = std::to_string(iVar4 / 2);
    bSellingItem = false;
    int uVar7 = 0;
    if (bDragging && bStoreMode)
    {
        if (sellBox.Contains(mX, mY))
        {
            bSellingItem = true
            uVar7 = 1;
        }
        else
        {
            uVar7 = 0;
        }
    }
    //wip
}
