#include <stdio.h>

/**
 * main - entry and exit points of program
 * takes no arguments
 *
 * Description: prints all letters of the alphabet
 * Return: 0 on success
 */
int main(void)
{
	int i;

	for (i = 97; i < 123; i++)
		putchar(i);
	putchar(10);
	return (0);
}

