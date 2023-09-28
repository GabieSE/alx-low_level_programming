#include "main.h"

/**
 * flip_bits - the number of bits you would need to flip
 * to get from one number to another
 *
 * @n: unsigned long int I
 * @m: unsigned long int II
 *
 * Return: num of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int y, count = 0;
	unsigned long int fad;
	unsigned long int xor_res = n ^ m;

	for (y = 63; y >= 0; y--)
	{
		fad = xor_res >> y;

	if (fad & 1)
		count++;

	}

	return (count);
}
