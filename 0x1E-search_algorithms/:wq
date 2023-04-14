#include "search_algos.h"

/**
 * binary_search - searches for a value in an array of integers using the
 *		binary search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: the first index where value is located, else, -1
 */

int binary_search(int *array, size_t size, int value)
{
	size_t low = 0, mid, high = size -1;

	if (array == NULL)
		return (-1);

	print_array(array, low, high);
	while (low != high)
	{
		mid = (low + high) / 2;
		if (array[mid] == value)
			return (mid)
		else if (array[mid] > value)
			high = mid -1;
		else 
			low = mid + 1;
		print_array(array, low, high);
	}
	if (array[high] == value)
		return (high);
	return (-1);
}
