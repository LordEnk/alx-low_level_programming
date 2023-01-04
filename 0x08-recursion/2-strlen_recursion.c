#include "main.h"

/**
 * _strlen_recursion - main block
 * @s: string whose length to count
 * Return: string length
 */

int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (1 + _strlen_recursion(++s));
}
