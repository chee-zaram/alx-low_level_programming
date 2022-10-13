#include "variadic_functions.h"

/**
 * print_strings - Prints a variable number of strings passed in as arguments.
 * @separator: String containing separator to be printed between strings.
 * @n: Number of string passed.
 *
 * Return: No return value.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arglist;
	unsigned int i;
	char *str;

	va_start(arglist, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(arglist, char *);
		if (separator)
		{
			if (str)
			{
				if (i == 0)
					printf("%s", str);
				else
					printf("%s%s", separator, str);
			}
			else
			{
				if (i == 0)
					printf("(nil)");
				else
					printf("%s(nil)", separator);
			}
		}
		else
		{
			if (!str)
				printf("(nil)");
			else
				printf("%s", str);
		}
	}
	va_end(arglist);
	printf("\n");
}

