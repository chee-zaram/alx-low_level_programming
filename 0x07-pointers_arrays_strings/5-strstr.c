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
		if (haystack[i] == needle[j])
		{
			k = i;
			for ( ; 1; j++, k++)
			{
				if (haystack[k] == needle[j])
				{
					if (needle[j + 1] == 0)
					{
						haystack = &haystack[i];
						return (haystack);
					}
					else
					{
						continue;
					}
				}
				else
				{
					break;
				}
			}
		}
	}
	return (0);
}

