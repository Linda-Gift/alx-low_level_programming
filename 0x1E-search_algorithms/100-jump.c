#include "search_algos.h"
/**
 * linear_search - searches for a value in an array of integers using the
 }*		Linear search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: the first index where value is located, else, -1
 */

size_t min(size_t a, size_t b)
{
	return ((a < b) ? a : b);
}

int jump_search(int *array, size_t size, int value)
{
	size_t prev = 0;
	size_t step = sqrt(size);

	/* find the block that may contain the value */
	while (array[min(step, size) - 1] < value)
      	{
		print("Value checked array[%ld] =  [%d]\n", prev, array[prev]);
		prev = step;
		step += sqrt(size);

		if (prev >= size)
			return (-1);
	}
	 print("Value found between indexes [%ld] and [%ld]\n", prev, step);
	/* linear search here */
	while (array[prev] < value)
	{
		prev++;
		if (prev == min(step, size))
			return (-1);
	}
	if (array[prev] == value)
		return (prev);
	return (-1);
}
