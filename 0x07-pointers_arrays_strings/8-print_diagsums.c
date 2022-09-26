#include "main.h"

/**
 * print_diagsums - Prints sum of two diagonals of a square matrix of integers.
 * @a: Pointer to array of integers.
 * @size: Size of each dimenstion of the array.
 *
 * Return: No return value.
 */
void print_diagsums(int *a, int size)
{
	int x, y, z;
	long int sum_of_udlr = 0;
	long int sum_of_udrl = 0;

	for (x = 0; x < size; x++)
		sum_of_udlr += a[(size * x) + x];

	for (y = 0, z = 1; y < size; y++, z++)
		sum_of_udrl += a[(size * y) + (size - z)];

	printf("%ld, %ld\n", sum_of_udlr, sum_of_udrl);
}

