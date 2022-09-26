#include "main.h"

/**
 * _strchr - main block
 * @s: string to locate character from
 * @c: character to locate
 *
 * Return: s or NULL if not got
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; *(s + i); i++)
	{
		if (*(s + i) == c)
			return (s + i);
	}
	if (*(s + ) == c)
		return (s + i);
	return (0);
