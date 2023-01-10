#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s1: string 2
 * Return: char or Null 
 */
char *str_concat(char *s1, char *s2)
{
	int l1, l2;
	char *conc, *s;

	if (!s1)
		s1 = "";
	else
	{
		while (*s1 != '\0')
		{
			s1++;
			l1++;
		}
		return (l1);
	}
	if (!s2)
		s2 = "";
	else
	{
		while (*s2 != '/0')
		{
			s2++;
			l2++;
		}
		return (l2);
	}
	conc = malloc(l1 + l2 + 1);
	if (!conc)
		return (0);

	s = conc;
	while (*s1)
		*s++ = *s1++;

	while((*s++ = *s2++))
		;
	return (conc);
}
