#include "main.h"

/**
 * reverse_array - main block
 * @a: integer parameter
 * @n: integer parameter
 *
 *
 */
void reverse_array(int *a, int n)
{
	int i, rev;

	for (i = 0; i < n/2; i++)
	{
		rev = *a;
		*a = a[n - i - 1];
		a[n - i - 1] = rev;
		n--;
	}
}
