#include "main.h"
#include <unistd.h>
/**
 * print_char - prints a character
 * @c: character to print
 *
 * Return: number of characters printed
 */

int print_char(char c)
{
	return (write(1, &c, 1));
}
