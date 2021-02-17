//
// Created by Daniele Giuliani on 2/13/21.
//

#include "core.h"
bool initSysEoEs()
{
    Debug printPrimary("UNIT TESTS TYPES INITIALIZED...");
    if(!initSysTypes()){
        Debug printError("UNIT TESTS TYPES ERROR!");
        return false;
    }
    Debug printSuccess("UNIT TESTS TYPES TERMINATED!");
    Object *obj=createObject();
    if (obj){
        printWarning(getObjectUUid(obj));
        getObjectUUid(obj);
        printSuccess("OBJECT CREATED SUCCESSFULLY!");
    }else{
        return false;
    }
    destroyObject(obj);
    return true;
}