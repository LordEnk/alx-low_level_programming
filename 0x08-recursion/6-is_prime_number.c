#include "main.h"

/**
 * check_prime_number - checks for prime numbers
 * @n: number to check
 * @i: parameter
 * Return: 1 if prime number and 0 f not
 */
int check_prime_number(int n, int i)
{
	if (i == n - 1)
	{
		return (1);
	}
	else if (n % i == 0)
	{
		return (0);
	}
	if (n % i != 0)
	{
		return (check_prime_number(n, i + 1));
	}
	return (0);
}

/**
 * is_prime_number - evaluates for prime number
 * @n: number to check
 * Return: 1 for prime and 0 if not
 */
int is_prime_number(int n)
{
	int i = 2;
	if (n < 2)
	{
		return (0);
	}
	if (n == 2)
	{
		return (1);
	}
	return (check_prime_number(n, i));
}
