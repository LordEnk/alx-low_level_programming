#include "main.h"

/**
 * _strdup - function block.
 * @str: string pointer
 * Return: pointer and null if string is
 */

char *_strdup(char *str)
{
	char *s;
	int j, i = 0;

	if (!str)
		return (NULL);

	while (str[i])
		i++;
	i++;
	s = malloc(sizeof(char) * i);

	if (s == NULL)
	{
		return (NULL);
	}

	for (j = 0; j <= i; j++)
	{
		s[j] = str[j];
	}
	return (s);
}
