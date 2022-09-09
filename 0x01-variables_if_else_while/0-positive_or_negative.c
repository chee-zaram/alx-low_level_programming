#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry and exit point for the program
 * takes no arguments
 *
 * Description: assigns a random number to the variable n each execution
 * Return: returns 0 on success
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
		printf("%d is negative\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is positive\n", n);
	return (0);
}

