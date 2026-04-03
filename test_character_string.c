#include "main.h"
#include <stdio.h>

/**
 * main - Entry point to test print_char and print_string
 *
 * Description:
 * This function tests the print_char and print_string functions
 * by printing individual characters and strings. It also tests
 * the handling of a NULL string.
 *
 * Return: Always 0.
 */
int main(void)
{
	int len;

	/* Test string printing */
	len = print_string("Hello world!\n");
	printf("Len print_string: %d\n", len);

	/* Test character printing */
	len = print_char('A');
	print_char('\n');
	printf("Len print_char: %d\n", len);

	/* Test printing multiple characters */
	print_char('X');
	print_char('Y');
	print_char('Z');
	print_char('\n');

	/* Test NULL string */
	len = print_string(NULL);
	print_char('\n');
	printf("Len print_string with NULL: %d\n", len);

	return (0);
}
