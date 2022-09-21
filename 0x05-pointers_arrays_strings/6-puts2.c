#include "main.h"

/**
 * puts2 - main block
 * @str: string prototype
 *
 */
void puts2(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
