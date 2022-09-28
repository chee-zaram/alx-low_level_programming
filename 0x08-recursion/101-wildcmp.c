#include "main.h"

/**
 * wildcmp - Compares two strings to check if identical.
 * @s1: Pointer to first string.
 * @s2: Pointer to second string.
 *
 * Description: s2 can contain a '*' to represent any character.
 * Return: 1 if identical, 0 if not.
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == 0)
	{
		if (*s2 != 0 && *s2 == '*')
			return (wildcmp(s1, ++s2));
	}

	if (*s2 == '*')
	{
		return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
	}
	else if (*s1 == *s2)
	{
		if (*s1 == 0 && *s2 == 0)
			return (1);
		else
			return (wildcmp(++s1, ++s2));
	}
	else
	{
		return (0);
	}
}

