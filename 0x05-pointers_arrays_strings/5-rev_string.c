#include "main.h"

/**
 * rev_string - Reverses a string.
 * @s: Pointer to string.
 *
 * Return: No specified return value.
 */
void rev_string(char *s)
{
	int i, j, k;
	char revString[1000];

	k = 0;
	for (i = 0; 1 ; i++)
	{
		if (s[i] == 0)
			break;
		k++;
	}
	i = 0;
	for (j = k - 1; j >= 0; j--)
	{
		revString[i] = s[j];
		i++;
	}
	revString[i] = '\0';
	for (i = 0; 1 ; i++)
	{
		if (revString[i] == 0)
			break;
		s[i] = revString[i];
	}
}
