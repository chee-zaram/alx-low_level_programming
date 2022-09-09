#include <stdio.h>

/**
 * main - entry point of program
 * no arguments
 *
 * Description: prints all single digits of base 10 from 0
 * Return: 0 on success
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		printf("%d", i);
	printf("\n");
	return (0);
}

