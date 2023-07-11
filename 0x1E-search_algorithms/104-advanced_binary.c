#include "search_algos.h"

/**
 * advanced_binary - searches for a value in a sorted array of integers
 * @array: pointer to the first element of the array
 * @size: number of elements in the array
 * @value: value to search for
 * Return: index where value is located, or -1 if not found or array is NULL
 */

int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (binary_search(array, 0, size - 1, value));
}

/**
 * binary_search - recursive function for binary search
 * @array: pointer to the first element of the array
 * @start: starting index of the subarray
 * @end: ending index of the subarray
 * @value: value to search for
 * Return: index where value is located, or -1 if not found
 */

int binary_search(int *array, size_t start, size_t end, int value)
{
	if (start > end)
	{
		printf("Searching in array: ");
		print_array(array, start, end);
		printf("Found %d at index: -1\n", value);
		return (-1);
	}

	size_t mid = (start + end) / 2;

	printf("Searching in array: ");
	print_array(array, start, end);

	if (array[mid] == value)
	{
		if (mid == start || array[mid - 1] != value)
		{
			printf("Found %d at index: %lu\n", value, mid);
			return (mid);
		}
		else
		{
			return (binary_search(array, start, mid, value));
		}
	}

	if (array[mid] > value)
		return (binary_search(array, start, mid - 1, value));

	return (binary_search(array, mid + 1, end, value));
}

/**
 * print_array - prints the elements of an array within a given range
 * @array: pointer to the first element of the array
 * @start: starting index
 * @end: ending index
 */

void print_array(int *array, size_t start, size_t end)
{
	size_t i;

	for (i = start; i <= end; i++)
	{
		if (i == start)
			printf("%d", array[i]);
		else
			printf(", %d", array[i]);
	}
	printf("\n");
}
