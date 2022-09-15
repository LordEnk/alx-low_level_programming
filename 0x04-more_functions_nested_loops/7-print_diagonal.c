#include "main.h"

/**
 * print_diagonal - main block
 * @n: parameter
 *
 */
void print_diagonal(int n)
{
	int a = 1;

	if (n > 0)
	{
		_putchar(92);
		while (a < n)
		{
			int c = 0;

			_putchar('\n');
			while (c < a)
			{
				_putchar(' ');
				c++;
			}
			_putchar(92);
			a++;
		}
	}
	_putchar('\n');
}
