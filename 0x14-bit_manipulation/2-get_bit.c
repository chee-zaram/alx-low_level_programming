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
	unsigned long int mask;

	if (index < 64)
	{
		mask = 1 << index;
		if (n & mask)
			return (1);
		else
			return (0);
	}
	return (-1);

}

