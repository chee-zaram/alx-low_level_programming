#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: Pointer to the string to be examined.
 * @accept: Pointer to accepted characters of substring.
 *
 * Return: Returns number of bytes in initial segment of s,
 * consisting only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, k, count = 0;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				count += 1;
				for (k = 0; accept[k]; k++)
				{
					if (s[i + 1] == accept[k])
						break;
					else if (accept[k + 1] == 0)
						return (count);
				}
			}
		}
	}
}

