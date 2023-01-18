#include "function_pointers.h"

/**
 * int_index - searches for an int
 * @array: array to search from
 * @size: number of elements in the array
 * @cmp: pointer to the function used to compare
 * Return: first index if cmp doesent return null
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, j;

	if (size > 0 && array != NULL && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			j = cmp(array[i]);
			if (j)
				break;
		}
		if (i < size)
			return (i);
	}
	return (-1);
}
