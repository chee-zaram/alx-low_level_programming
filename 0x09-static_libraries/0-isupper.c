#include "main.h"

/**
 * _isupper - Checks for uppercase characters.
 * @c: Takes c as character arguement.
 *
 * Return: 1 is uppercase, 0 otherwise.
 */
int _isupper(int c)
{
	if ((char)c >= 65 && (char)c <= 90)
		return (1);
	else
		return (0);
}

