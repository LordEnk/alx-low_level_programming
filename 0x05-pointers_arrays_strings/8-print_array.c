#include "main.h"
#include <stdio.h>

/**
 * print_array - main block
 * @a: integer parameter
 * @n: number of times parameter
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i < n - 1)
		{
			printf(", ");
		}
	}
	putchar('\n');
}
