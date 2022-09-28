#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string.
 * @s: Pointer to string.
 *
 * Return: Length of the string.
 */
int _strlen_recursion(char *s)
{
	int len = 0;
	int i = 0;

	if (s[i] != 0)
	{
		len = _strlen_recursion(&s[++i]);
		return (++len);
	}
	else
	{
		return (0);
	}
}

