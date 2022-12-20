#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random passwords for the file
 * Return: 0 always
 */

int main(void)
{
	int i;
	char c;

	srand(time(NULL));
	while(i <= 2645)
	{
		c = rand() % 128;
		i += c;
		putchar(c);
	}
	putchar(2772 - i);

	return (0);
}
