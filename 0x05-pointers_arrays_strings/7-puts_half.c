#include "main.h"

/**
 * puts_half -  main block
 * @str: string parameter
 *
 */
void puts_half(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
		i++;
	if (i % 2 == 0)
		i /= 2;
	else
		i = i / 2 + 1;
	while (*(str + i) != '\0')
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
