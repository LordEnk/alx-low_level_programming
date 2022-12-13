#include "main.h"

/**
 * print_last_digit
 * @n: number
 * Return: value of last digit
 */
int print_last_digit(int)
{
	int a, n;

	if (n < 0)
		n = -n;
	a = n % 10;
	_putchar(a);
	_putchar('\n');
	return (a);
}
