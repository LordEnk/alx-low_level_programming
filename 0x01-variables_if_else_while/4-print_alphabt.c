#include <stdio.h>

/**
 * main - main block
 * Return: 0
 */
int main(void)
{
	char d = 'a';

	while (d <= 'z')
	{
		if (d != 'q' && d != 'e')
		putchar(d);
		d++;
	}
	putchar('\n');

	return (0);
}
