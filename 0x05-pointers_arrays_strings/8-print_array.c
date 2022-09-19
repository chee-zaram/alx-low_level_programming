#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints n elements of an array of integers.
 * @a: Pointer to to array.
 * @n: Number of elements.
 *
 * Return: No specified return value.
 */
void print_array(int *a, int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			if (i == n - 1)
			{
				printf("%d\n", a[i]);
				break;
			}
			printf("%d, ", a[i]);
		}
	}
}

