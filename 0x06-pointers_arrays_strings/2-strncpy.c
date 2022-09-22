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
	int i, j;

	for (i = 0; i < b; i++)
	{
		if (src[i] == '\0')
		{
			for (j = i; j < n && dest[j] != '\0'; j++)
				dest[j] = '\0';
			break;
		}
		dest[i] = src[i];
	}
	return (dest);
}

