#include "main.h"

/**
 * print_numbers - Prints the numbers from 0 to 9.
 * Takes no argument values.
 *
 * Return: No return value specified.
 */
void print_numbers(void)
{
	int num = 48;

	while (num <= 57)
	{
		_putchar(num);
		num++;
	}
	_putchar(10);
}

