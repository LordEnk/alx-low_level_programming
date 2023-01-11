#include "main.h"
#include <stdlib.h>

/**
 * _strlen - length of a string
 * @s: input char
 * Return: length of a string
 */

int _strlen(char *s)
{
	int l = 0;
	while (*s != '\0')
	{
		s++;
		l++;
	}
	return (l);
}

/**
 * argstostr - concantenates all program arguments
 * @ac: number of arguments
 * @av: array of string arguments
 * Return: 1 on success and 0 otherwise
 */
char *argstostr(int ac, char **av)
{
	int i, j, len;
	char *p;

	if (!ac || !av)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		len += _strlen(av[i]) + 1;
	}
	p = malloc(sizeof(char) * len);
	
	if (!p)
		return(NULL);

	for (i = 1; i < ac; i++, j++)
	{
		p[j] = av[i];
		p[j++] ='\n';
	}
	p[j] = '\0';
	return (p);
}
