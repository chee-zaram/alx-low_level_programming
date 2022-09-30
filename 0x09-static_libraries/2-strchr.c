#include "main.h"

/**
 * _strchr - Locates a character in a string.
 * @s: Pointer to string.
 * @c: Character to be located.
 *
 * Return: Pointer to the first occurence of the character in the string,
 * if not present in string, returns NULL.
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; 1; i++)
	{
		if (s[i] == c)
		{
			s = &s[i];
			return (s);
		}
		else if (s[i] == 0)
		{
			return (NULL);
		}
	}
}

