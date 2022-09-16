#include "main.h"

/**
 * print_most_numbers - prints digits but not 2 and 4
 *
 */
void print_most_numbers(void)
{
	int i = 48;

	while (i < 58)
	{
		if (!(i == '2' || i == '4'))
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
