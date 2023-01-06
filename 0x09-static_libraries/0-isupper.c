#include "main.h"

/**
 * _isupper - main block
 * @c: is the parameter
 * Return: 1 for upper case and 0 else
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
