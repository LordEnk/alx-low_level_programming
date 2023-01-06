#include "main.h"
#include <string.h>

/**
 * _strncat - main block
 * @dest: string parameter
 * @src: string parameter
 * @n: integer
 *Return: pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}