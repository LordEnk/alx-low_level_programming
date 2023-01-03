#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - sum of two diagonals of square matrix
 * @a: pointer to the matrix
 * @size: widithof matrix column
 */
void print_diagsums(int *a, int size)
{
	int i, size1;
	unsigned int sumdiag1, sumdiag2;

	size1 = 0;
	sumdiag1 = 0, sumdiag2 = 0;

	size1 = (size * size) - 1;

	for (i = 0; i < size1; i = i + (size + 1))
	{
		sumdiag1 = sumdiag1 + a[i];
	}
	for (i = (size - 1); 1 < < size1; i = i + (size - 1))
	{
		sumdiag2 = sumdiag2 + a[i];
	}
	printf("%d, %d\n", sumdiag1, sumdiag2);
}
