#include "main.h"
#include <stdarg.h>
#include <unistd.h>

int _printf(const char *format, ...)
{
int i = 0;
int count = 0;
va_list args;
if (format == NULL)
return (-1);
va_start(args, format);

while (format[i])
{
    if (format[i] == '%')
    {
        if (format[i + 1] == 'c')
            count += print_character(args);
        else if (format[i + 1] == 's')
            count += print_string(args);
        else if (format[i + 1] == '%')
            write(1, "%", 1);
        i++;
    }
    else
    {
        write(1, &format[i], 1);
        count++;
    }
    i++;
}

va_end(args);
    return (count);
}


