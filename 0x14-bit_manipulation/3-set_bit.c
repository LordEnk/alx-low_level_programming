#include "main.h"

/**
 * set_bit  - Set a bit in 1 in an index specified.
 * @n: Decimal number.
 * @index: Index.
 * Return: 1 if work, -1 otherwise
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int index) * 8))
		return (-1);
	
	*n ^= (1 << index);
	return (1);
}
