#include "main.h"

/**
 * infinite_add - Function that adds two numbers.
 * @n1: First argument and pointer to number to be added.
 * @n2: Second argument and pointer to number to be added.
 * @r: Pointer to result of addition.
 * @size_r: Size of buffer to hold result.
 *
 * Return: Returns a pointer to the result.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int n1_size, n2_size, more = 0, d = 0;
	int v1 = 0, v2 = 0, hlder_sum = 0;

	for (n1_size = 0; n1[n1_size]; n1_size++)
	{

	}
	n1_size = n1_size - 1;
	for (n2_size = 0; n2[n2_size]; n2_size++)
	{

	}
	n2_size = n2_size - 1;
	if (n1_size >= size_r || n2_size >= size_r)
		return (0);
	for ( ; n1_size >= 0 || n2_size >= 0 || more == 1; n1_size--, n2_size--)
	{
		if (n1_size < 0)
			v1 = 0;
		else
			v1 = *(n1 + n1_size) - 48;
		if (n2_size < 0)
			v2 = 0;
		else
			v2 = *(n2 + n2_size) - 48;
		hlder_sum = v1 + v2 + more;
		if (hlder_sum >= 10)
			more = 1;
		else
			more = 0;
		if (d >= (size_r - 1))
			return (0);
		*(r + d) = (hlder_sum % 10) + 48;
		d++;
	}
	if (d == size_r)
		return (0);
	*(r + d) = 0;
	rev_string(r);
	return (r);
}

/**
 * rev_string - Reverses a string.
 * @s: Pointer to string.
 *
 * Return: No specified return value.
 */
void rev_string(char *s)
{
	int i, j;
	char hlder;

	for (i = 0; s[i]; i++)
	{

	}
	i--;

	for (j = 0; j < i; j++, i--)
	{
		hlder = *(s + j);
		*(s + j) = *(s + i);
		*(s + i) = hlder;
	}
}

