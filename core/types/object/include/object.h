//
// Created by Daniele Giuliani on 2/13/21.
//

#ifndef EOES_OBJECT_H
#define EOES_OBJECT_H
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include "../../../console/include/console.h"

#include <uuid/uuid.h>
/* TYPES */

typedef struct OBJECT Object;
/* FUNCTIONS */

bool initSysObject();
void init_object(Object *obj);
#endif //EOES_OBJECT_H
