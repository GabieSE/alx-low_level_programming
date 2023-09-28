#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 *
 * @n: a pointer to an unsigned long integer
 *
 * @index: index of the bit you want to clear, starting from 0
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)

		return (-1);

	*n = (~(1UL << index) & *n);

	return (1);
}

