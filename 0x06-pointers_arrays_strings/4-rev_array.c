#include "main.h"

/**
 * reverse_array - main block
 * @a: integer parameter
 * @n: integer parameter
 */
void reverse_array(int *a, int n)
{
	int i, rev;

	for (i = n - 1; i >= n / 2; i--)
	{
		rev = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = rev;
	}
}
