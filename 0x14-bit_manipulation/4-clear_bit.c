#include "main.h"

/**
  * clear_bit  - Set a bit to 0 in an index specified.
  * @n: the number.
  * @index: position to set the bit to 0
  * Return: 1 if it work, -1 if it  doesn't
  */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);
	
	*n &= ~(1 << index);
	return (1);
}
