#include "function_pointers.h"

/**
 * print_name - Prints a name.
 * @name: String of name to be printed.
 * @f: Pointer to function that prints a name.
 *
 * Return: No return value.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}

