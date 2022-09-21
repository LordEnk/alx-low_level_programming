#include "main.h"

/**
 * *_strcpy - main block
 * @dest: array parameter
 * @src: string parameter
 */
char *_strcpy(char *dest, char *src)
{
	int i, n = 0;

	while (src[n] != '\0')
	{
		n++;
	}

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	i = i
		while (i <= n)
		{
			dest[i] = '\0';
			i++;
		}
	return (dest);
}
