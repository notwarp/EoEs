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
/*
 * Application specific headers required by the following declarations
 * (the implementation will import its specific dependencies):
 */

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
EXTERN object * createObject(void);
EXTERN void destroyObject(object *obj);
EXTERN void searchObjectByName(object *obj);

/* Function Usable By this Module */

bool initSysTypes();

#undef CORE_TYPES_IMPORT
#undef EXTERN
#endif //EOES_TYPES_H
