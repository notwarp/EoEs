//
// Created by Daniele Giuliani on 2/13/21.
//

#ifndef EOES_TYPES_H
#define EOES_TYPES_H

/*
 * System headers required by the following declarations
 * (the implementation will import its specific dependencies):
 */
#include <stdlib.h>
#include <stdbool.h>
#include <uuid/uuid.h>
#include <omp.h>
/*
 * Application specific headers required by the following declarations
 * (the implementation will import its specific dependencies):
 */
typedef struct TYPE Type;
struct TYPE {
    uuid_t  binuuid;
    char    uuid[UUID_STR_LEN];
};

#include "event/include/event.h"
#include "object/include/object.h"
#include "../console/include/console.h"
/* Set EXTERN macro: */
#ifdef CORE_TYPES_IMPORT
#define EXTERN
#else
#define EXTERN extern
#endif

/* Constants declarations here. */

/* Types declarations here. */

/* Global variables declarations here. */

/* Function prototypes here. */

EXTERN void typesInit(void);
EXTERN Object * createObject(void);
EXTERN void refreshObject(Object *obj);
EXTERN char *getObjectUUid(Object *obj);
EXTERN void destroyObject(Object *obj);
EXTERN Event * createEvent(void);
EXTERN void destroyEvent(Event *evt);
EXTERN Object *searchObjectByName(char *name);
Type *init_object(Object *obj);
/* Function Usable By this Module */

bool initSysTypes();

#undef CORE_TYPES_IMPORT
#undef EXTERN
#endif //EOES_TYPES_H
