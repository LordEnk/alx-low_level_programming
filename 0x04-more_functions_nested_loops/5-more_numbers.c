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
			_putchar(a);
			a++;
		}
		_putchar('\n');
		i++;
	}
}
