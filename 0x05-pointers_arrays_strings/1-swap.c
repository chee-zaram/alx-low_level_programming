#include "main.h"

/**
 * swap_int - Swaps the values of two integers.
 * @a: First integer.
 * @b: Second integer.
 *
 * Return: No specified return type.
 */
void swap_int(int *a, int *b)
{
	int b_val = *b;
	*b = *a;
	*a = b_val;
}

