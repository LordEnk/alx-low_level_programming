#include "main.h"

/**
 * _islower - epressed in the main block
 * @c: is a character
 * Return: returns 1 for low case and 0 for otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
