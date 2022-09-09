#include <stdio.h>

/**
 * main - entry point of program
 *
 * Description: prints lowercase alphabet in reverse order using only putchar()
 * Return: 0 on success
 */
int main(void)
{
	int i;

	for (i = 122; i >= 97; i--)
		putchar(i);
	putchar(10); /* newline ascii */
	return (0);
}

