#include "main.h"

/**
 * print_rev - Prints a string, in reverse, followed by a new line.
 * @s: String pointer.
 *
 * Return: No specified return value.
 */
void print_rev(char *s)
{
	int i;

	for (i = _strlen(s) - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar(10);
}

/**
 * _strlen - Returns the length of a string.
 * @s: Argument pointer of char type.
 *
 * Return: Length of a string.
 */
int _strlen(char *s)
{
	int i, len = 0;

	for (i = 0; 1 ; i++) /* 1 says if True i.e s still exists */
	{
		if (*(s + i) == 0)
			break;
		len++;
	}
	return (len);
}

