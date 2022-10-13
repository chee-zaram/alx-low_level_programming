#include "variadic_functions.h"

/**
 * sum_them_all - Function that gets the sum of a variable number of integers.
 * @n: Number of integers passed as arguments.
 *
 * Return: Returns the sum of all integers.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list arglist;
	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(arglist, n);
	for (i = 0; i < n; i++)
		sum += va_arg(arglist, int);
	va_end(arglist);

	return (sum);
}

