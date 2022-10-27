#include "main.h"

/**
 * set_bit - Sets the bit at a given index.
 * @n: Pointer to the number for which to manipulate bit.
 * @index: Index of bit to be manipulated.
 *
 * Return: 1 if successful, -1 if not.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index < 64)
	{
		mask = 1 << index;
		*n = mask | *n;
		return (1);
	}
	return (-1);
}

