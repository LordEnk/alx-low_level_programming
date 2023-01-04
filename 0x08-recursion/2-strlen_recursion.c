#include "main.h"

/**
 * _strlen_recursion - main block
 * @s: string whose length to count
 * Return: string length
 */

int _strlen_recursion(char *s);
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	return (i);
}
