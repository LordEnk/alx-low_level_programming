#include "main.h"

/**
  * flip_bits  - Counts the bit to change to another value
  * @n: Decimal number 
  * @m: Decimal number to compare
  * Return: Number of bits between the two numbers.
  */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i;

	i = 0;
	n = n ^ m;
	while (n)
	{
		i += n & 1;
		n >>= 1;
	}
	return (1);
}
