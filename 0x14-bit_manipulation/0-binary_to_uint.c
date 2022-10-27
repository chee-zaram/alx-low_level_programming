#include "main.h"

/**
 * binary_to_uint - Converts a binary number to base 10.
 * @b: Character string containing the binary number.
 *
 * Return: The equivalent base 10 number.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int len = 0, b_ten = 0, pos = 0;
	long int i;

	while (b && b[len])
	{
		if (b[len] != '0' && b[len] != '1')
			return (b_ten);
		len++;
	}

	for (i = len - 1; b && (i >= 0); i--, pos++)
		b_ten = b_ten + (b[i] - '0') * (1 << pos);

	return (b_ten);
}

