//
// Created by Daniele Giuliani on 2/13/21.
//
#include "include/object.h"
#include "object.rapresentation"

object *createObject(void){
    object *obj=malloc(sizeof(object));
    return obj;
}
void destroyObject(object *obj){
    free(obj);
}

bool initSysObject(){

    Debug printPrimary("UNIT TESTS OBJECT INITIALIZED");
    object *ob = createObject();
    if (ob == NULL) return false;
    else{
        destroyObject(ob);
        Debug printSuccess("UNIT TESTS OBJECT TERMINATED!");
        return true;
    }
}

//object *searchObjectByName(char * name)
//{
//
//    return obj;
//}