#include "main.h"

/**
 * _isalpha - checks if c is a letter
 * @c: is a letter to check
 * Return: returns 1 or 0
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}