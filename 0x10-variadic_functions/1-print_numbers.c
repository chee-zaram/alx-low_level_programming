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
	for (i = 0; i < n; i++)
	{
		if (separator == NULL)
		{
			printf("%d", va_arg(arglist, int));
		}
		else
		{
			if (i == 0)
				printf("%d", va_arg(arglist, int));
			else
				printf("%s%d", separator, va_arg(arglist, int));
		}
	}
	va_end(arglist);
	printf("\n");
}

