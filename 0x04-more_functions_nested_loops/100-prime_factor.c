#include <stdio.h>

/**
 * main - Entry point of program.
 * Takes no arguments.
 *
 * Description: Prints the largest prime factor of 612852475143.
 * Return: 0 on success.
 */
int main(void)
{
	long int num, i;

	num = 612852475143;
	for (i = 1; i < num; i++)
	{
		if (num % i == 0)
			num = num / i;

	}
	printf("%ld\n", i);
	return (0);
}

