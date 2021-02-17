//
// Created by Daniele Giuliani on 2/13/21.
//
#define CORE_TYPES_IMPORT
#include "types.h"

bool initSysTypes()
{
    bool check = true;
    if (!initSysObject())
    {
        check = false;
    }
    if (!initSysEvent())
    {
        check = false;
    }
    return check;
}