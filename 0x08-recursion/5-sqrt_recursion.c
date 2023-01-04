#include "main.h"
/*
 * _sqrt_recursion
 * @n: number
 * Return: square root
 */
int _sqrt_recursion(int n);
{
	int i;
	if (n < 0)
	{
		return (-1);
	}
	if ((i * i) > n)
	{
		return (-1);
	}
	if (i * i == n)
	{
		return (i);
	}
	else
		return (_sqrt(n, i + 1));
}
