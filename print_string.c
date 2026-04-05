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
	int i = 0;

	/* Vérifie si la chaîne est NULL et remplace par "(null)" */
	if (str == NULL)
		str = "(null)";

	/* Parcourt chaque caractère de la chaîne */

	while (str[i] != '\0')
	{
		/* Écrit le caractère courant et vérifie si write échoue */
		if (write(1, &str[i], 1) == -1)
			return (-1);

		/* Passe au caractère suivant */
		i++;
	}
	return (i);
}
