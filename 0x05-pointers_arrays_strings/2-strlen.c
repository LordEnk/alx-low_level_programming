#include "main.h"

/**
 * _strlen - main block
 * @s: string parameter
 * Return: string length
 */
int _strlen(char *s)
{
	int i;

	while (*(s + i) != '\0')
		i++;

	return (i);
}
