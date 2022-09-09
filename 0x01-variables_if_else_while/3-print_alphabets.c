#include <stdio.h>

/**
 * main - entry and exit point of program
 * no arguments
 *
 * Description: prints alphabet in lower case then uppercase
 * Return: 0 value on success
 */
int main(void)
{
	int i;

	for (i = 97; i < 123; i++)
		putchar(i);
	for (i = 65; i < 91; i++)
		putchar(i);
	putchar(10);
	return (0);
}

