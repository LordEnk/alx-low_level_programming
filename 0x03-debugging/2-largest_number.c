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
	int largest;

	if (a > b && a > c)
	{
		largest = a;
	}
	else if (b > a && b > c)
	{
		largest = b;
	}
	else if (c > b)
	{
		largest = c;
	}
	else
	{
		largest = b;
	}
	return (largest);
}
