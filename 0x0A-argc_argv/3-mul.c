#include <stdio.h>

/**
 * main - multiplies 2 numbers
 * @argc: the nber of argvs
 * @argv: the array of strings
 * Return: 0 on success and 1 otherwise
 */

int main(int argc, char *argv[])
{
	int pdt;

	if (argc == 3)
	{
		pdt = argv[1] * argv[2];
		printf("%d\n",pdt);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
