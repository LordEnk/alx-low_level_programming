#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array and initialise it with a char
 * @size: array size
 * @c: constant character
 * Return: pointer or null for fail
 */

char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	if (size == 0)
		return (0);
	p = malloc(size * sizeof(char));

	for (i = 0; i < size; i++)
	{
		p[i] = c;
	}
	return (p);
}
