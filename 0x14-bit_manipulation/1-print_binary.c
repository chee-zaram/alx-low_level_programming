#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @n: Number to be printed in binary.
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	_putchar((n & 1) + 48);
}

/**
 * _putchar - Writes a character to the standard output.
 * @c: Character to write.
 *
 * Return: 1, or -1 if failed.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

