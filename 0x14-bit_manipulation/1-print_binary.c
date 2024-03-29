#include "main.h"

/**
  * print_binary  - Prints the binary representation of a number
  * @n: The number in decimal
  * Return: Number converted
  */

void print_binary(unsigned long int n)
{
	/*unsigned int mask = 32768;*/
	/*unsigned long int mask = 4611686018427387904;*/
	unsigned long int mask = 9223372036854775808U;
	/*unsigned long long int mask = 18446744073709551615U;*/
	/*unsigned long int mask = 1 << 63;*/
	int flag = 0, counter = 0;

	if (n == 0)
		_putchar('0');

	while (mask > 0)
	{
		if (counter == 64)
			_putchar('0');

		if ((n & mask) == 0)
		{
			if (flag == 1)
				_putchar('0');
		}
		else
		{
			_putchar('1');
			flag = 1;
		}
		mask = mask >> 1;
		counter++;
	}
}
