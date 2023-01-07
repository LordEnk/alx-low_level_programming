#include <stdio.h>

/**
 * main - prints number of arguments passed to it
 * @argc: length of the argv
 * @argv: string arguments of the program
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int i = 1;
	while (i < argc)
	{
		i++;
	}
	printf("%d\n", i);
	return (0);
}
