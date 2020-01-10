#include <stdio.h>
#include "interface.h"

void method1(void){
    printf("Method1\r\n");
}

void method2(int arg){
    printf("Method2, arg=%d\r\n", arg);
}

const Library lib = {
    .method1 = method1,
    .method2 = method2,
    .some_val = 42
};