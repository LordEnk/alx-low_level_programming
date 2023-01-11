#include "main.h"
#include <stdlib.h>

/**
 * _strlen - lenth of string
 * @s: string
 * Return: length of string
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		s++;
		i++;
	}
	return (i);
}

/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: char or Null
 */
char *str_concat(char *s1, char *s2)
{
	int l1, l2;
	char *conc, *s;

	if (!s1)
		s1 = "";
	else
		l1 = _strlen(s1);

	if (!s2)
		s2 = "";
	else
		l2 = _strlen(s2);

	conc = malloc(l1 + l2 + 1);
	if (!conc)
		return (0);

	s = conc;
	while (*s1)
		*s++ = *s1++;

	while (*s++ = *s2++)
		;
	return (conc);
}
