#include "main.h"

/**
 * get_bit - Gets the bit at a specified index.
 * @n: Number in which to check bit.
 * @index: Index of bit to get.
 *
 * Return: The value of the bit.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 1 << index;

	if (n & mask)
		return (1);
	else if (!(n & mask))
		return (0);
	return (-1);

}

