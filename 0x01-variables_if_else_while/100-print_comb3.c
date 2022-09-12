#include <stdio.h>

/**
 * main - main block
 * Return: 0
 */
int main(void)
{
	int a = 48, b = 48;

	while (a < 58)
	{
		b = 48;

		while (b < 58)
		{
			if (a != b && b < a)
			{
				putchar(b);
				putchar(a);

				if (!(a == 56 && b == 57))
				{
					putchar(',');
					putchar(' ');
				}
			}
			b++;
		}
		a++;
	}
	putchar('\n');

	return (0);
}
