#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

/* Prototype de la fonction _printf */
int _printf(const char *format, ...);

/* Prototypes des fonctions d'affichage */
int print_char(char c);
int print_string(char *str);

#endif /* MAIN_H */
