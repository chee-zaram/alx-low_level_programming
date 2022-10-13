#include "variadic_functions.h"

/**
 * print_numbers - Prints a variable number of integers passed as arguments.
 * @separator: String containing number separator.
 * @n: Number of integers passed as arguemnts.
 *
 * Return: No return type.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arglist;
	unsigned int i;

	va_start(arglist, n);
	for (i = 0; 1; i++)
	{
		if (i == n - 1)
		{
			printf("%d\n", va_arg(arglist, int));
			break;
		}
		printf("%d", va_arg(arglist, int));
		if (separator)
			printf("%s", separator);
	}
	va_end(arglist);
}

