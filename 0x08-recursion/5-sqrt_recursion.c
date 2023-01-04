#include "main.h"
/**
 * _sqrt_recursion - in the function block
 * @n: integer parameter
 * Return: integer
 */
int _sqrt_recursion(int n);
{
	return (_sqrt(n, 1));
}

/*
 * _sqrt - _sqrt_recursion
 * @n: number
 * @i: int parameter
 * Return: square root
 */
int _sqrt_recursion(int n)
{
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
