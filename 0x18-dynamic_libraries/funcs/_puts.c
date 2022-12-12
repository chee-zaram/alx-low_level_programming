#include "main.h"

/**
 * _puts - Prints a string followed by a new line to stdout
 * @str: Pointer to string.
 *
 * Return: No specified return value.
 */
void _puts(char *str)
{
	int i;

	for (i = 0; i < _strlen(str); i++)
	{
		_putchar(str[i]);
	}
	_putchar(10);
}
