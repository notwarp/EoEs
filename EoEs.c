#include "core/core.h"
int main() {
    if(!initSysEoEs()){
        printf("Error initializing System!\n");
        return 0;
    }
    printf("Hello, World!\n");
    return 0;
}
