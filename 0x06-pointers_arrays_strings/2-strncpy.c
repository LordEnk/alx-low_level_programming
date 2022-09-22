#include "main.h"
#include <string.h>

/**
 * _strncpy - main block
 * @dest: parameterstring
 * @src: parameter string
 * @n: integer parameter
 * Return: string
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncopy(dest, src, n);
	return (dest);
}

