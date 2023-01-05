#include "main.h"

/**
 * factorial - factorial of a number
 * @n: the parameter
 * Return: factorial of a number or -1 for error
 */

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
