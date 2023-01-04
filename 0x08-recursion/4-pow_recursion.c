#include "main.h"
/**
 * _pow_recursion - returns x power y
 * @x: parameter to power to y
 * @y: parameter power of x
 * Return: power
 */
int _pow_recursion(int x, int y);
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y != 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	else
		return (1);