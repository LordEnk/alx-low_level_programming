#include "main.h"

/**
 * _strcmp - main block
 * @s1: parameter
 * @s2: parameter
 *
 * Return: integer
 */
int _strcmp(char *s1, char *s2)
{
	int comp = 0, i = 0;

	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
		{
			comp = 1;
			break;
		}
		i++;
	}
	if (comp == 0)
		return (0);
	else
		return (1);
}
