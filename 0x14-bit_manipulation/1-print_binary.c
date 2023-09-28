#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 *
 * @n: num to print
 *
 */
void print_binary(unsigned long int n)
{
	int x, num = 0;

	unsigned long int temp;

	for (x = 65; x >= 0; x--)
	{
		temp = n >> x;

		if (temp & 1)
		{
			_putchar('1');
				num++;

		}

		else if (num)
			_putchar('0');
	}

	if (!num)
		_putchar('0');
}
