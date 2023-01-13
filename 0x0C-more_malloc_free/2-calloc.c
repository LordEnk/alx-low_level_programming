#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory of an array using malloc
 * @nmemb: array elements
 * @size: size of the array
 * Return: pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;
	unsigned int i;
	char b = 0;

	if (nmemb == 0; || size == 0)
		return (NULL);
	p = malloc(nmemb * size);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
	{
		p[i] = b;
	}
	return (p);
}
