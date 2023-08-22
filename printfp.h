#ifndef PRINTFP_H
#define PRINTFP_H

#include <stdarg.h>
#include <stdio.h>

int _printf(const char *format, ...);

/**
 * struct print - struct printf
 * @type: specifier char
 * @f: pointer
 */
typedef struct print
{
    char type;
    int (*f)(va_list);
} print_t;

#endif
