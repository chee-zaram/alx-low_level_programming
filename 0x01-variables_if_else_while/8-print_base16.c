#include <stdio.h>

/**
 * main - entry point of program
 *
 * Description: prints all numbers of base 16 in lowercase and then a new line
 * Return: value of 0 on success
 */
int main(void)
{
	int i;
	int the_rest;

	for (i = 48; i <= 57; i++)
		putchar(i);
	for (the_rest = 97; the_rest <= 102; the_rest++)
		putchar(the_rest);
	putchar(10); /* newline ascii */
	return (0);
}

