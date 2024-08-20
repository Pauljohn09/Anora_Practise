// foo.c
#include "foo.h"
#include<stdio.h>

void foo_func() {
    // Implementation
    printf("Hello, World from foo_func");
}

FooNamespace foo = { foo_func, 0 };