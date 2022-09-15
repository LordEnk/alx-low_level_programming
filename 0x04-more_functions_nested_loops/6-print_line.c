#include "main.h"

/**
 * print_line - main block
 * @n: parameter
 *
 */
void print_line(int n)
{
	int i = 0;

	if (n > 0)
	{
		while (i <= n)
		{
			_putchar(95);
			i++;
		}
	}
	_putchar('\n');
}
