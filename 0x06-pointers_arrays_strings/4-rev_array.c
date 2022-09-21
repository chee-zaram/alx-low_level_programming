#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers.
 * @a: Pointer to array of integers.
 * @n: Number of elements in the array.
 *
 * Return: No specified return value.
 */
void reverse_array(int *a, int n)
{
	int i, hlder, rn = n - 1;

	for (i = 0; i < n / 2; i++)
	{
		hlder = a[i];
		a[i] = a[rn];
		a[rn] = hlder;
		rn--;
	}
}

