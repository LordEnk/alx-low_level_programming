#include "main.h"

/**
 * leet - main block
 * @str: string parameter to encode
 *
 * Return: string pointed
 */
char *leet(char *)
{
	int i = 0, j;
	char leet[]

	while (str[i])
	{
		for (j = 0; j <= 7; j++)
		{
			if (str[i] == leet[j] || str[i] - 32 == leet[j])
				str[i] = j + '0';
		}
		i++;
	}
	return(str);
}
