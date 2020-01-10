#include <stdio.h>
#include "interface.h"

int main(int argc, char **argv){

    printf("Namespace in C\r\n");

    lib.method1();
    lib.method2(1234);
    
    printf("some_val = %d\r\n", lib.some_val);

    return 0;
}