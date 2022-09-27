#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - sum of two diagonals of square matrix
 * @a: pointer to the matrix
 * @size: widithof matrix column
 */
void print_diagsums(int *a, int size)
{
	int i, j, k, l, m = 0;

	for (i = 0; i < size; i++)
	{
		p = (i * size) + i;
		l += *(a + k);
	}
	for (j = 0; j < size; j++)
	{
		p = (j * size) + (size - l - j);
		m += *(a + k);
	}
	printf("%i, %i\n", l, m);
}
