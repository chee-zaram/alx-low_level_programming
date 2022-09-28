#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse.
 * @s: Pointer to string.
 *
 * Return: No specified return value.
 */
void _print_rev_recursion(char *s)
{
	int n = 0;

	if (s[n] != 0)
	{
		_print_rev_recursion(&s[n + 1]);
		_putchar(s[n]);
	}
}

