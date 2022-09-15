#include "main.h"

/**
 * print_square - main block
 *
 */
void print_square(int size)
{
	int i = 0, c;

	if (size > 0)
	{
		while (i >0)
		{
			c = 0;
			while (c < size)
			{
				_putchar(35);
				c++;
			}
			_putchar('\n');
			i++;
		}
	}
	else
	{
		_putchar('\n');
	}
}

