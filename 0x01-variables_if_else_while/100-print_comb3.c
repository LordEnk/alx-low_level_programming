#include <stdio.h>

/**
 * main - main block
 * Return: 0
 */
int main(void)
{
	int a = 48, b = 49;

	while (a < 57)
	{
		b = 49;

		while (b < 58)
		{
			if (a != b && b > a)
			{
				putchar(a);
				putchar(b);

				if (a != 56 && b != 57)
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
