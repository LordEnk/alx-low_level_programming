#include "search_algos.h"

/**
 * rec_search - searches for a value in an array of integers using the Binary search algorithM
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: index of the number
 */

int advanced_binary_recursive(int *array, int left, int right, int value)
{
	if (array == NULL || left > right)
		return -1;
	
	int mid = left + (right - left) / 2;
	
	printf("Searching in array: ");
	for (int i = left; i <= right; i++) 
	{
		printf("%d", array[i]);
		if (i < right)
			printf(", ");
	}
	printf("\n");

	if (array[mid] == value) 
	{
		if (mid == left || array[mid - 1] != value) 
		{
			printf("Found value %d at index: %d\n", value, mid);
			return mid;
		}
		else 
		{
			return advanced_binary_recursive(array, left, mid - 1, value);
		}
	}
	else if (array[mid] > value)
	{
		return advanced_binary_recursive(array, left, mid - 1, value);
	}
	else 
	{
		return advanced_binary_recursive(array, mid + 1, right, value);
	}
}
