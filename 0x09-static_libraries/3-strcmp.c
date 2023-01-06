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
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
