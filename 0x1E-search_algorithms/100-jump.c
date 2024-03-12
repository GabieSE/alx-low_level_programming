#include "search_algos.h"

/**
 * jump_search - searches for a value in a sorted array of integers
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: first index where value is located or -1 if not found
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i, ptr, tmp;

	if (array == NULL || size == 0)
		return (-1);

	ptr = sqrt(size);

	for (i = tmp = 0; tmp < size && array[tmp] < value;)
	{
		printf("Value checked array [%ld] = [%d]\n", tmp, array[tmp]);
		i = tmp;
		tmp += ptr;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", i, tmp);

	tmp = tmp > size - 1 ? tmp : size - 1;
	for (; i < tmp && array[i] < value; i++)
		printf("Value checked array [%ld] = [%d]\n", i, array[i]);
	printf("Value checked array [%ld] = [%d]\n", i, array[i]);

	return (array[i] == value ? (int)i : -1);
}
