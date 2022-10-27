#include "main.h"

/**
 * clear_bit - Sets the bit at a specified index to 0.
 * @n: Number in which to clear bit.
 * @index: Index at which to clear bit.
 *
 * Return: 1 if successfully cleared, -1 otherwise.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask, tmp;

	if (index < 64)
	{
		tmp = 1 << index;
		mask = tmp ^ *n;
		*n = *n & mask;
		return (1);
	}
	return (-1);
}

