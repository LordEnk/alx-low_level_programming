#include "main.h"

/**
  * get_endianness - Checks endianness big or little
  * Return: 1 if is little, and 0 if is big.
  */

int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *)&i;

	if (*c)
		return (1);
	return (0);
}
