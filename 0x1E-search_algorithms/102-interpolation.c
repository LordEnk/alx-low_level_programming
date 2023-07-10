#include "search_algos.h"

/**
 * jump_search - searches for a value in an array of integers using the Jump search algorithm
 * @array: input array
 * @size: size of the array
 * @value: value to search for
 * Return: index of the number
 */

int interpolation_search(int *array, size_t size, int value) 
{
	if (array == NULL)
		return -1;
	
	size_t low = 0;
	size_t high = size - 1;
	
	while (low <= high && value >= array[low] && value <= array[high])
	{
		if (low == high)
		{
			if (array[low] == value) 
			{
				printf("Found value %d at index: %d\n", value, low);
				return low;
			}
			return -1;
		}
		
		size_t pos = low + (((double)(high - low) / (array[high] - array[low])) * (value - array[low]));
		
		if (array[pos] == value) 
		{
			printf("Found value %d at index: %d\n", value, pos);
			return pos;
		}
		
		if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;
	}
	return -1;  // Target element not found
}
