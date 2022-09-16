#include "main.h"

/**
 * print_triangle - Main block
 * @size: is a parameter
 *
 */
void print_triangle(int size)
{
	int b = 1, a = 0;

	if (size > 0)
	{
		if (size == 1 )
		{
			_putchar(35);
			_putchar('\n');
		}
		else
		{
			while (b <= size)
			{
				i = 0;

				while (a < size - b)
				{
					_putchar(' ');
					a++;
				}
				a = 0;

				while (a < b)
				{
					_putchar('\n');
					b++;
				}
			}
		}
		else
			_putchar('\n');
	}
}
