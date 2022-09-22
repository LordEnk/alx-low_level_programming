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

	if (n % 2 ==0)
		a = n;
	else
		a = n - 1;
	for (i = 0; i < a / 2; i++)
	{
		rev = a[i];
		a[i] = a[n - 1];
		a[n - 1] = rev;
		n--;
	}
}
