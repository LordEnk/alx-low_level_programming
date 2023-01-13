#include "main.h"
#include <ctype.h>
#include <stdlib.h>

/**
 * main - multiplies two postive numbers
 * @argv: number of arguments
 * @argc: array of pointers to argv
 * Return: 0 on success else otherwise
 */

int main(int argc, char *argv[])
{
	char *mul;
	int num1, num2, i = 1;

	if (argc != 3)
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar('\n');
		exit(98);
	}

	if (isdigit(argv[i]) == 0)
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar('\n');
		exit(98);
	}
	mul = malloc(sizeof(int) * 2);
	argv[i] = num1;
	argv[i + 1] = num2;
	mul = num1 * num2;
	free(mul);
	return (0);
}
