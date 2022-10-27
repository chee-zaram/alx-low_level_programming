#include "main.h"

/**
 * flip_bits - Gets the number of bits to be flipped to convert n to m.
 * @n: Number one.
 * @m: Number two.
 *
 * Return: The number of bits to be flipped to make n into m.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x, bit_num = 0;

	x = n ^ m;
	while (x > 0)
	{
		bit_num++;
		x = x & (x - 1);
	}
	return (bit_num);
}

