//
// Created by Daniele Giuliani on 2/13/21.
//
#include "include/object.h"
#include "object.rapresentation"

Object *createObject(void)
{
    Object *obj=malloc(sizeof(Object));
    if (obj){
        init_object(obj);
        return obj;
    }else{
        return NULL;
    }
}
void destroyObject(Object *obj)
{
    free(obj);
    obj = NULL;
}
Type *init_object(Object *obj)
{
    uuid_generate_random(obj->type.binuuid);
    uuid_unparse_upper(obj->type.binuuid, obj->type.uuid);
    return &obj->type;
}
void refreshObject(Object *obj)
{
    init_object(obj);
}

char *getObjectUUid(Object *obj)
{
    return obj->type.uuid;
}

bool initSysObject()
{
    Debug printPrimary("UNIT TESTS OBJECT INITIALIZED...");
    Debug printPrimary("CREATING OBJECT...");
    Object *ob = createObject();
    init_object(ob);
    Debug printPrimary("OBJECT UUID:");
    Debug printWarning(getObjectUUid(ob));
    Debug printSuccess("OBJECT CREATED SUCCESSFULLY!");
    searchObjectByName("test");
    if (ob == NULL) return false;
    else{
        destroyObject(ob);
        Debug printSuccess("UNIT TESTS OBJECT TERMINATED!");
        return true;
    }
}

Object *searchObjectByName(char * name)
{

    #pragma omp parallel default (none)
    {
        printf(AC_MAGENTA"Hello from process: %d\n"AC_RESET, omp_get_thread_num());
    }
    //return obj;
}