#include "variadic_functions.h"

/**
 * print_all - Prints variable number of arguments of any type passed.
 * @format: String containing format of the corresponding argument.
 *
 * Return: No return value.
 */
void print_all(const char * const format, ...)
{
	va_list arglist;
	char *str, *separator = "";
	unsigned int i = 0;

	va_start(arglist, format);
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", separator, va_arg(arglist, int));
				break;
			case 'i':
				printf("%s%d", separator, va_arg(arglist, int));
				break;
			case 'f':
				printf("%s%f", separator, va_arg(arglist, double));
				break;
			case 's':
				str = va_arg(arglist, char *);
				if (str)
				{
					printf("%s%s", separator, str);
					break;
				}
				printf(", (nil)");
				break;
			default:
				i++;
				continue;
		}
		separator = ", ";
		i++;
	}
	va_end(arglist);
	printf("\n");
}

