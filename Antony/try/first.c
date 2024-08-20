#include<stdio.h>
#include "first.h"

void func() {
    printf("Welcome to func, in func.c\n");
}

Namespace std = { func, 0 };