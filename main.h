#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdarg.h>

typedef struct fmt
{
    char spec;
    int (*handler)(va_list);
} fmt_t;

int _printf(const char *format, ...);
int print_character(va_list args);
int print_string(va_list args);
int print_decimal(va_list args);

#endif
