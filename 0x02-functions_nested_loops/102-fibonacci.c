#include <stdio.h>

/**
 * main - Entry point of program.
 * Takes no arguments.
 *
 * Description: Prints the first 50 numbers of the Fibonacci sequence.
 * Return: 0 if successful.
 */
int main(void)
{
	unsigned long int i, x, y, z;

	x = 1, y = 2;
	for (i = 0; i < 50; i++)
	{
		if (x < 20365011074)
			printf("%lu, ", x);
		if (x == 20365011074)
			printf("%lu\n", x);
		z = x + y;
		x = y;
		y = z;
	}
	return (0);
}

