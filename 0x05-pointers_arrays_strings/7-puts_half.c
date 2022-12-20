#include "main.h"

/**
 * puts_half -  main block
 * @str: string parameter
 *
 */
void puts_half(char *str)
{
	int i = 0, j;

	while (*(str + i) != '\0')
	{
		if (i % 2 == 0)
		{
			i = 1 / 2;
		}
		else
		{
			i = (i + 1) / 2;
		}
		j = *(str + i);
		i++;
		_putchar(j);
	}
	_putchar('\n');
}
