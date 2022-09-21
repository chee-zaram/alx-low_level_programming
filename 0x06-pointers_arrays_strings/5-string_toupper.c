#include "main.h"

/**
 * string_toupper - Changes all lowercase letters of a string to uppercase.
 * @s: Pointer to string to be changed.
 *
 * Return: Pointer to changed string.
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		if (s[i] >= 97 && s[i] <= 122)
			s[i] -= 32;
	}
	return (s);
}

