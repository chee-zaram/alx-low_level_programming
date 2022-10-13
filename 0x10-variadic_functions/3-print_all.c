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
	char *str;
	unsigned int i = 0, len = _strlen(format);

	va_start(arglist, format);
	while (format && (i < len))
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(arglist, int));
				break;
			case 'i':
				printf("%i", va_arg(arglist, int));
				break;
			case 'f':
				printf("%f", va_arg(arglist, double));
				break;
			case 's':
				str = va_arg(arglist, char *);
				if (str)
				{
					printf("%s", str);
					break;
				}
				printf("(nil)");
		}
		if (format[i + 1] == '\0')
			break;
		while (format[i + 1] && (format[i] == 'c' || format[i] == 'i' ||
				format[i] == 'f' || format[i] == 's'))
		{
			printf(", ");
			break;
		}
		i++;
	}
	va_end(arglist);
	printf("\n");
}

/**
 * _strlen - Gets the length of a string.
 * @str: String.
 *
 * Return: Length of string.
 */
unsigned int _strlen(const char * const str)
{
	if (!*str)
		return (0);
	return (1 + _strlen(str + 1));
}

