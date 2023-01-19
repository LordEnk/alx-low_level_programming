#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers
 * @separator:string to be printed between numbers
 * @n: number of integers passed to the function
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);
	if (n != 0)
	{
		for (i = 0; i < n; i++)
		{
			if (separator == NULL)
			{
				printf("%d%s", va_arg(ap, int));
			}
			else
			{
				printf("%d%s", va_arg(ap, int), separator);
			}
		}
		va_end(ap);
	}
	printf("\n");
}
