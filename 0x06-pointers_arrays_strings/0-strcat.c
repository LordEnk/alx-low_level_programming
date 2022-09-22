#include "main.h"

/**
 * _strcat - main block
 * @dest: string parameter
 * @src: string parameter 2
 * Return: concatenated string
 */
char *_strcat(char *dest, char *src)
{
	int a = 0, b = 0;

	while (dest[a] != '\0')
		a++;

	for (b = 0; src[b] != '\0'; ++b; ++a)
	{
		dest[a] = src[b];
	}
	dest[a] = '\0';
	return (dest);
}
