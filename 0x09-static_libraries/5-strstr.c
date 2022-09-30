#include "main.h"

/**
 * _strstr - Locates a substring.
 * @haystack: Pointer to string to be searched.
 * @needle: Pointer to string of characters to be searched for.
 *
 * Return: Pointer to the beginning of the located substring, or NULL absent.
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, k;

	for (i = 0; haystack[i]; i++)
	{
		j = 0;
		k = i;
		for ( ; 1; j++, k++)
		{
			if (haystack[k] == needle[j])
				continue;
			else
				break;
		}

		if (needle[j] == 0)
		{
			haystack = &haystack[i];
			return (haystack);
		}
	}
	return (NULL);
}

