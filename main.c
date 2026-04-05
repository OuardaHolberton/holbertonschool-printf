#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - teste la fonction _printf avec tous les spécificateurs autorisés
 *
 * Return: 0 si tout s'exécute correctement
 */

int main(void)
{
	int len;
	int len2;
	char *str = NULL;

	/* Test phrase simple     */
	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");
	_printf("Length: [%d, %i]\n", len, len);
	printf("Length: [%d, %i]\n", len2, len2);

	/* Test entiers positifs  */
	_printf("Positive integers: [%d, %i]\n", 12345, 12345);
	printf("Positive integers: [%d, %i]\n", 12345, 12345);

	/* Test entiers négatifs  */
	_printf("Negative integers: [%d, %i]\n", -762534, -762534);
	printf("Negative integers: [%d, %i]\n", -762534, -762534);

	/* Test zéro              */
	_printf("Zero: [%d, %i]\n", 0, 0);
	printf("Zero: [%d, %i]\n", 0, 0);

	/* Test caractères        */
	_printf("Characters: [%c, %c, %c]\n", 'H', 'e', 'y');
	printf("Characters: [%c, %c, %c]\n", 'H', 'e', 'y');

	/* Test chaînes           */
	_printf("Strings: [%s, %s, %s]\n", "Hello", "World", "!");
	printf("Strings: [%s, %s, %s]\n", "Hello", "World", "!");

	/* Test chaîne NULL       */
	_printf("NULL string: [%s]\n", str);
	printf("NULL string: [%s]\n", str);

	/* Test pour %%           */
	_printf("Percent sign: [%%]\n");
	printf("Percent sign: [%%]\n");

	return (0);
}
