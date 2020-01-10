#ifndef INTERFACE_H
#define INTERFACE_H

typedef struct LIBRARY{
    const int some_val;
    void (*method1) (void);
    void (*method2) (int);
    /* etc... */
}Library;

extern const Library lib;

#endif