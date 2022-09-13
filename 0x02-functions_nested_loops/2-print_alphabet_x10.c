#include "main.h"

/**
 * print_alphabet_x10 - Prints alphabet 10 times on newline.
 * Takes no arguments.
 *
 * Return: No specified return value.
 */
void print_alphabet_x10(void)
{
	int x, ch;

	x = 1;
	while (x <= 10)
	{
		ch = 97;
		while (ch <= 122)
		{
			_putchar(ch);
			ch++;
		}
		x++;
		_putchar(10);
	}
}

