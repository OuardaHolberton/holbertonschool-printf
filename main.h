#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>

int _printf(const char *format, ...);
int print_character(va_list args);
int print_string(va_list args);
int print_decimal(va_list args);

#endif
