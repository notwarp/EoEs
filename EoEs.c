#include "core/core.h"
int main() {
    if(!initSysEoEs()){
        printf("Error initializing System!\n");
        return 0;
    }
    object *obj=createObject();
    printf("Hello, World!\n");
    destroyObject(obj);
    return 0;
}
