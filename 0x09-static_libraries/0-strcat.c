#include "main.h"

/**
 * _strcat - main block
 * @dest: string parameter
 * @src: string parameter 2
 * Return: concatenated string
 */
char *_strcat(char *dest, char *src)
{
	int a = 0, b;

	while (dest[a])
		a++;

	for (b = 0; src[b] != '\0'; ++b)
	{
		dest[a] = src[b];
		a += 1;
	}
	dest[a] = '\0';
	return (dest);
}