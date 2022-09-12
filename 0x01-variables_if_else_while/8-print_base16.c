#include <stdio.h>

/**
 * main - main block
 * Return: 0
 */
int main(void)
{
	int e = 48;
	char d = 'a';

	while (e < 58)
	{
		putchar(e);
		e++;
	}
	while (d <= 'f')
	{
		putchar(d);
		d++;
	}
	putchar('\n');

	return (0);
}
