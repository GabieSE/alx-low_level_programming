#include "search_algos.h"

/**
 * interpolation_search - searches for a value in a sorted array of integers
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return:  first index where value is located or -1 if not found
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t x, l, r;

	if (array == NULL)
		return (-1);

	for (l = 0, (r = size - 1); r >= l;)
	{
		x = l + (((double)(r - l) / (array[r] - array[l])) * (value - array[l]));
		if (x < size)
		{
			printf("Value checked array [%ld] = [%d]\n", x, array[x]);
		}
		else
		{
			printf("Value checked array [%ld] is out of range\n", x);
			break;
		}

		if (array[x] == value)
			return (x);
		if (array[x] > value)
			r = x - 1;
		else
			l = x + 1;
	}
	return (-1);

}
