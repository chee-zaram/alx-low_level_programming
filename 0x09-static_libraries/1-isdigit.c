#include "main.h"

/**
 * _isdigit - Checks for a digit 0 through 9.
 * @c: Takes argument c of int type.
 *
 * Return: 1 is c is a digit, 0 otherwise.
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}

