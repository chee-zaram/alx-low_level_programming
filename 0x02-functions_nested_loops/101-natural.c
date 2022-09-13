#include <stdio.h>

/**
 * main - Entry point of program.
 * Takes no argument values.
 *
 * Description: Computes and prints the sum of all the multiples of 3 or 5
 * which are below 1023, excluding 1023.
 * Return: 0 on success.
 */
int main(void)
{
	int i, sum;

	sum = 0;
	for (i = 0; i <= 1023; ++i)
	{
		if (((i % 3) == 0) || ((i % 5) == 0))
			sum = sum + i;
		else
			continue;
	}
	printf("%d\n", sum);
	return (0);
}

