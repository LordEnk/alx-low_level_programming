#include "main.h"

/**
 * _strlen - main block 
 * @s: parameter
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
		i++;

	return (i);
}
