#include <stdio.h>
#include "main.h"

/**
 * main - tests de la fonction print_int
 *
 * Description: Ce programme teste la fonction print_int pour plusieurs cas :
 *  - Entiers positifs
 *  - Entiers négatifs
 *  - Zéro
 *  - INT_MAX et INT_MIN
 *  - Plusieurs appels consécutifs
 *
 * Return: 0 si tout s'exécute correctement
 */
int main(void)
{
	int len1;

	/* Test entier positif */
	len1 = print_int(12345);
	printf("\nlen print_int(12345): %d\n", len1);

	/* Test entier négatif */
	len1 = print_int(-6789);
	printf("\nlen print_int(-6789): %d\n", len1);

	/* Test zéro */
	len1 = print_int(0);
	printf("\nlen print_int(0): %d\n", len1);

	/* Test entier maximum int */
	len1 = print_int(2147483647);
	printf("\nlen print_int(INT_MAX): %d\n", len1);

	/* Test entier minimum int */
	len1 = print_int(-2147483648);
	printf("\nlen print_int(INT_MIN): %d\n", len1);

	/* Test plusieurs entiers en une ligne */
	len1 = print_int(12);
	len1 += print_int(-34);
	len1 += print_int(56);
	print_char('\n');
	printf("len print_int(12,-34,56): %d\n", len1);

	return (0);
}
