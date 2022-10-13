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
	unsigned int i, len = n;
	char *str;

	va_start(arglist, n);
	for (i = 0; 1; i++)
	{
		str = va_arg(arglist, char *);
		if (str)
		{
			if (i == (len - 1))
			{
				printf("%s\n", str);
				break;
			}
			printf("%s", str);
		}
		else
		{
			printf("(nil)");
			if (i == (len - 1))
			{
				printf("\n");
				break;
			}
		}

		if (separator)
			printf("%s", separator);

	}
	va_end(arglist);
}

