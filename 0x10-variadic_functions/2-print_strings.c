#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings
 * @separator: string to be printed between the strings
 * @n:  of strings passed to the function/args
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *strng;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		strng = va_arg(ap, char*);

		if (strng == NULL)
			printf("(nil)");
		else
			printf("%s", strng);
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
