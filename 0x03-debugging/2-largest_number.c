#include "main.h"

/**
 * largest_number - function block
 * @a: first integer
 * @b: secobd integer
 * @c: third integer
 * Return: largest integer
 */

int largest_number(int a, int b, int c)
{
	int largest = a;

	if (largest < b)
	{
		largest = b;
		if (largest < c)
			largest = c;
	}
	return (largest);
}
