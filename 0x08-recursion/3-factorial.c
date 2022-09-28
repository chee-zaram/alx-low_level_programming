#include "main.h"

/**
 * factorial - Returns the factorial of a given number.
 * @n: Number for which factorial should be given.
 *
 * Return: Returns the factorial as int, if n is less than 0, returns -1.
 */
int factorial(int n)
{
	if (n >= 0)
	{
		if (n == 0)
			return (1);
		else
			return (n * factorial(n - 1));
	}
	else
	{
		return (-1);
	}
}

