#include "main.h"

/**
 * _abs - Computes the absolute value of an integer.
 * @x: Integer to be operated on.
 *
 * Return: Absolute value of x.
 */
int _abs(int x)
{
	if (x < 0)
		return (x * -1);
	else
		return (x);
}
