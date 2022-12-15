#include "main.h"

/**
 * more_numbers - main block
 *
 */

void more_numbers(void)
{
	int i, a;

	i = 0;
	while (i < 10)
	{
		a = 0;
		while (a < 15)
		{
			if (a >= 10)
			_putchar('1');
			_Putchar(a % 10 + '0');
			a++;
		}
		_putchar('\n');
		i++;
	}
}
