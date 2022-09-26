#include "main.h"

/**
 * _memcpy - main block
 * @dest: where bytes a copied to
 * @src: where bytes are copied from
 * @n: bytes copied
 *
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
