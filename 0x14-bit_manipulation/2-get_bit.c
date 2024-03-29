#include "main.h"

/**
  * get_bit  - Returns the value of a bit ata given index
  * @n: Decimal number
  * @index: Index.
  * Return: The number.
  */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int mask;

	if (index >= 64)
		return (-1);

	mask = 1 << index;

	if ((n & mask) == 0)
		return (0);
	else
		return (1);
}
