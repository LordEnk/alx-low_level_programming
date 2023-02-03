#include "main.h"

/**
  * flip_bits  - Counts the bit to change to another value
  * @n: Decimal number
  * @m: Decimal number to compare
  * Return: Number of bits between the two numbers.
  */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i = 0;

	while (n > 0 || m > 0)
	{
		if (((n ^ m)  & 1) == 1)
			i++;
		n >>= 1;
		m >>= 1;
	}
	return (1);
}
