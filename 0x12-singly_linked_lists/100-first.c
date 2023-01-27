#include <stdio.h>

void before_main(void) __attribute__((constructor));

/**
 * before_main - prints a n output before the main function
 * Return: void
 */
void before_main(void) __attribute__((constructor));
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
