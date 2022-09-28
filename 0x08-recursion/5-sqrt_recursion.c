#include "main.h"

/**
 * _sqrt_recursion - Computes the natural square root of a number.
 * @n: Number for which square root should be computed.
 *
 * Return: The result of computation. -1 if n does not have a natural sqrt.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (_sqrt(n, 0));
}

/**
 * _sqrt - Finds natural square root of a number by searching numbers from 0.
 * @n: Number for which natural square root should be searched.
 * @i: Potential square roots to be checked.
 *
 * Return: -1 if no natural square root, natural square root if found.
 */
int _sqrt(int n, int i)
{
	if (i * i > n)
		return (-1);
	else if (i * i == n)
		return (i);
	else
		return (_sqrt(n, i + 1));
}

