#include "main.h"
#include <stdio.h>
/**
 * create_array - creates an array of chars.
 * @size: size of the array.
 * @c: storage of char
 *
 * Return: pointer of an array of chars
 */
char *create_array(unsigned int size, char l)
{
	char *lg;
	unsigned int i;

	if (size == 0)
		return (NULL);

	lg = malloc(sizeof(l) *size);

	if (lg == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		lg[i] = l;

	return (lg);


}
