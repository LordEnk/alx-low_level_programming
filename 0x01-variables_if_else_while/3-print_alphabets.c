#include <stdio.h>

/**
 * main - main block
 * Return: 0
 */
int main(void)
{
	char c = 'a';
	char C = 'A';

	while (C <= 'Z')
	{
		putchar(C);
		C++;
	}
	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');

	return (0);
}
