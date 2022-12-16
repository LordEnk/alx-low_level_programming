#include "main.h"

/**
 * more_numbers - main block
 *
 */

void more_numbers(void)
{
	int i, a;

	for (i = 0; i < 10; i++)
	{
		for (a = 0; a < 15; a++)
		{
			if (a >= 10)
			_putchar(a / 10 + '0');
			_Putchar(a % 10 + '0');
		}
		_putchar('\n');
	}
}
