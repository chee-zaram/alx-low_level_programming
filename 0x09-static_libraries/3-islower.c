#include "main.h"

/**
 * _islower - Checks if a character is lower case.
 * @c: Takes one argument, character c.
 *
 * Return: Returns 1 if true, and 0 if false.
 */
int _islower(int c)
{
	if ('a' <= c && c <= 'z')
		return (1);
	else
		return (0);
}

