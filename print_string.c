#include "main.h"
#include <limits.h>
#include <stdlib.h>
/**
 * print_string - prints a string
 * @str: string to print
 *
 * Return: number of characters printed
 */
int print_string(char *str)
{
	int i;

	if (str == NULL) /*verification que la chaine est null*/
		str = "(null)";

	i = 0;

	while (str[i] != '\0')/* affiché chaque lettre de la chaine*/
	{
		write(1, &str[i], 1);
		i++;
	}

	return (i);
}
