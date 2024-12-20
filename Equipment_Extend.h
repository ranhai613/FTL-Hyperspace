#pragma once
#include "FTLGame.h"

struct Equipment_Extend
{
    Equipment *orig = nullptr;
    
    std::vector<EquipmentBox*> overCapacityBoxes;

    ~Equipment_Extend()
    {
        for (auto i : overCapacityBoxes)
        {
            delete i;
        }
    }
};

Equipment_Extend* Get_Equipment_Extend(Equipment* c);

#define EQ_EX Get_Equipment_Extend
