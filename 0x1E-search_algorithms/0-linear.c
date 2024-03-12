#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers
 * @array: array of the intergers
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: first index of value or -1 if not found
 */

int linear_search(int *array, size_t size, int value)
{
	size_t c;

	if (array == NULL)
		return (-1);
	for (c = 0; c < size; c++)
	{
		printf("Value checked array[%ld] = [%d]\n", c, array[c]);
		if (array[c] == value)
			return (c);
	}
	return (-1);
}
