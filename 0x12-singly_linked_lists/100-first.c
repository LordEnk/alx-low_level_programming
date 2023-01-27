#include <stdio.h>

void before_main(void) __attribute__ ((constructor));

/**
 * before_main - prints a n output before the main function
 * Return: void
 */

void before_main(void)
{
	char *a, *b;

	a = "You're beat! and yet, you must allow,\n";
	b = "I bore my house upon my back!\n";

	printf("%s%s", a, b);
}
