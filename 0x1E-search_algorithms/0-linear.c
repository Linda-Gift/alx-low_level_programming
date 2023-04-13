#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * main - Entry point
 *
 * Return: Always EXIT_SUCCESS
 */

int linear_search(int *array, size_t size, int value);
{
	size_t i;
	
	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		/* check if value at index i equals search value */
		if (array[i] == value)
			return (i);
	}
	return(-1);
}
