#include "main.h"
#include <unistd.h>

/**
 * print_int - affiche un entier décimal
 * @n: l'entier à afficher
 *
 * Return: nombre de caractères affichés, ou -1 si write échoue
 */

int print_int(int n)
{
	int count = 0; /* Compteur de caractères affichés */
	char c;

	/* Cas spécial pour la valeur minimale d'un int */
	if (n == -2147483648)
		return (write(1, "-2147483648", 11));

	/* Si l'entier est négatif, afficher le signe '-' */
	if (n < 0)
	{
		if (write(1, "-", 1) == -1)
			return (-1);
		count++;
		n = -n; /* Rendre n positif pour l'affichage */
	}

	/* Affiche les chiffres de manière récursive */
	if (n >= 10)
	{
		int temp = print_int(n / 10);

		if (temp == -1)
			return (-1);
		count += temp;
	}

	/* Affiche le chiffre des unités */
	c = (n % 10) + '0';
	if (write(1, &c, 1) == -1)
		return (-1);
	count++;

	return (count);
}
