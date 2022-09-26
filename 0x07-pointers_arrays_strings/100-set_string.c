#include "main.h"

/**
 * set_string - Sets the value of a pointer to a char.
 * @s: Pointer to pointer that points to string.
 * @to: Pointer to set arg 1 to.
 *
 * Return: No specified return value.
 */
void set_string(char **s, char *to)
{
	*s = to;
}

