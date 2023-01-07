#include <stdio.h>
#include <ctype.h>

/**
 * main - adds positive numbers
 * argc: number of arguments
 * argv: array of strings
 * Return: 0 on success 1 otherwise
 */

int main(int argc, char *argv[])
{
	int i, j, sm;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (isdigit(argv[i][j]) ==0)
			{
				printf("Error\n");
				return (1);
			}
		}
	}

	for (i = 1; i < argc; i++)
	{
		sm = sm + argv[i];
	}
	printf("%d\n", sm);
	return (0);
}
