#include <stdio.h>

/**
 * main - Entry point.
 *
 * Description: prints the first 100 numbers in the Fibonacci sequence, from 1.
 * Return: 0 if successful.
 */

int main(void)
{
	int i;
	unsigned long int j, k, j1, j2, k1, k2;

	j = 1;
	k = 2;
	printf("%lu", j);

	for (i = 0; i < 90; i++)
	{
		printf(", %lu", k);
		k = k + j;
		j = k - j;
	}

	j1 = j / 1000000000;
	j2 = j % 1000000000;
	k1 = k / 1000000000;
	k2 = k % 1000000000;

	for (i = 0; i < 7; i++)
	{
		printf(", %lu", k1 + (k2 / 1000000000));
		printf("%lu", k2 % 1000000000);
		k1 = k1 + j1;
		j1 = k1 - j1;
		k2 = k2 + j2;
		j2 = k2 - j2;
	}
	printf("\n");
	return (0);
}

