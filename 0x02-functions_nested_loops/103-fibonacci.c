#include <stdio.h>

/**
 * main - Entry point.
 *
 * Description: Prints the sum of even-valued terms of the Fibonacci sequence
 * not exceeding 4,000,000.
 * Return: 0 if successful.
 */
int main(void)
{
	int i;
	unsigned long int x, y, z, sum;

	x = 1;
	y = 2;
	sum = 0;
	for (i = 0; i <= 33; i++)
	{
		if (x <= 4000000 && (x % 2) == 0)
			sum = sum + x;
		z = x + y;
		x = y;
		y = z;
	}
	printf("%lu\n", sum);
	return (0);
}

