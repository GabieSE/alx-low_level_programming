#include "main.h"

/**
 * _isupper - Check if a letter is uppercase
 * @c: Char to check
 *
 * Return: 0 or 1
 */

int _isupper(int x)

{

	if (x >= 'A' && x <= 'Z')
		return (1);
	else
		return (0);
}
