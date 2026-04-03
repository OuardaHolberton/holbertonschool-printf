#include "main.h"

/**
 * print_number - prints an unsigned integer recursively
 * @n: number to print
 *
 * Return: number of characters printed
 */
int print_number(unsigned int n)
{
	int count;
	char digit;

	count = 0;
	if (n / 10 != 0)
		count += print_number(n / 10);
	digit = (n % 10) + '0';
	count += write(1, &digit, 1);
	return (count);
}

/**
 * print_int - prints a signed integer
 * @args: variadic argument list
 *
 * Return: number of characters printed
 */
int print_int(va_list args)
{
	int n;
	unsigned int num;
	int count;

	n = va_arg(args, int);
	count = 0;
	if (n < 0)
	{
		count += write(1, "-", 1);
		num = (unsigned int)-n;
	}
	else
		num = n;
	count += print_number(num);
	return (count);
}
