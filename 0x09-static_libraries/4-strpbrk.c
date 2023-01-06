#include "main.h"

/**
 * _strpbrk - main block
 * @s: string parameter
 * @accept: parameter
 *
 * Return: pointer to byte in s that matches or NULL if not
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				break;
		}
		if (accept[j])
			return (s + i);
	}
	return (0);
}