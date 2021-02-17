//
// Created by Daniele Giuliani on 2/13/21.
//
#include "include/event.h"
#include "event.rapresentation"

Event *createEvent()
{
    Event *evt = malloc(sizeof(Event));
    if (evt)
    {
        return evt;
    }else{
        return NULL;
    }
}
bool init_event(Event *evt)
{
    uuid_generate_random(evt->type.binuuid);
    uuid_unparse_upper(evt->type.binuuid, evt->type.uuid);
    return true;
}
bool initSysEvent(){
    Debug printPrimary("UNIT TESTS EVENT INITIALIZED...");
    Event *evt = createEvent();
    if (evt == NULL) return false;
    else{
        destroyEvent(evt);
        Debug printSuccess("UNIT TESTS EVENT TERMINATED!");
        return true;
    }
}
void destroyEvent(Event *evt) {
    free(evt);
    evt = NULL;
}