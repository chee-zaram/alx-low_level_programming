#include "main.h"

/**
 * print_alphabet - Prints lowercase alphabet
 * Takes no argument values.
 *
 * Return: no specified return value.
 */
void print_alphabet(void)
{
	int ch = 97;

	while (ch <= 122)
	{
		_putchar(ch);
		ch++;
	}
	_putchar(10);
}

