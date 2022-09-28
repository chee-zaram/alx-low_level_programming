#include "main.h"

/**
 * _pow_recursion - Computes the value of x raised to the power of y.
 * @x: Base number.
 * @y: Exponential.
 *
 * Return: Returns value of computation. If y is lower than 0, returns -1.
 */
int _pow_recursion(int x, int y)
{
	int pow;

	if (y > 1)
	{
		pow = x * _pow_recursion(x, --y);
		return (pow);
	}
	else if (y == 1)
	{
		return (x);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (-1);
	}
}
		
