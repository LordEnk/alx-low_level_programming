#include "main.h"

/**
 * _strncat - main block
 * @dest: string parameter
 * @scr: string parameter
 * @n: integer
 *Return: pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;
	char *c;

	while (dest[i] != '\0')
		i++;
	while (!(src[j] == '\0' || j == n))
	{
		dest[i] = scr[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	c = dest
	return (c);
}
