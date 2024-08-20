#ifndef FIRST_H
#define FIRST_H

typedef struct {
    void (*function)();
    int var;
} Namespace;

extern Namespace std;
#endif