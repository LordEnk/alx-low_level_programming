#include "main.h"

/**
 * jack_bauer - main block
 *
 */
void jack_bauer(void);
{
	int a, b;

	for (a = 0; a < 24; a++)
	{
		for (b = 0; b < 60; b++)
		{
			if (a < 10)
			{

				_putchar('0');
				_putchar(a + '0');
			}
			else if (a >= 10)
			{
				_putchar(a);
			}
			if (b < 10)
			{
				_putchar(':');
				_putchar('0');
				_putchar(b);
			}
			else if (b > 10)
			{
				_putchar(':');
				_putchar(b);
			}
		}
	}
	return (0);
}
