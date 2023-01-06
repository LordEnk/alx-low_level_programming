#include "main.h"

/**
 * _memset - main block
 * @s: pointer toaddress
 * @b: character parameter
 * @n: number of times
 *
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	while (n)
	{
		s[n - 1] = b;
		n--;
	}
	return (s);
}