// foo.h
#ifndef FOO_H
#define FOO_H

typedef struct {
    void (*function)();
    int variable;
} FooNamespace;

extern FooNamespace foo;
#endif