#include <stdio.h>

/**
 * main - main block
 * Return: 0
 */
int main(void)
{
	int a = 48, b = 48, c = 48;

	while (a < 58)
	{
		b = 48;
		while (b < 58)
		{
			c = 48;
			while (c < 58)
			{
				if (a != b && b != c && a != c && a < b && b < c)
				{
					putchar(a);
					putchar(b);
					putchar(c);
					if (!(a == 55 && b == 56 && c == 57))
					{
						putchar(',');
						putchar(' ');
					}
				}
				c++;
			}
			b++;
		}
		a++;
	}
	putchar('\n');

	return(0);
}
