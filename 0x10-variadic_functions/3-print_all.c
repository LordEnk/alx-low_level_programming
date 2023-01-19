#include "variadic_functions.h"

/**
 * print_all - print char, integer, float and string
 * @format: list of types of arguments
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list list;
	unsigned int i, j;

	va_start(list, format);

	i = 0;
	while (format[i] != '\0')
	{
		if (format[i] == 'c')
			printf("%c", va_arg(list, char*));
		

