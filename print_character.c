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
	/* Écrit le caractère et vérifie si write échoue */
	if (write(1, &c, 1) == -1)
		return (-1);

	/* Retourne le nombre de caractères affichés */
	return (1);
}
