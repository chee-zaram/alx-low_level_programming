#include "main.h"

/**
 * rev_string - Reverses a string.
 * @s: Pointer to string.
 *
 * Return: No specified return value.
 */
void rev_string(char *s)
{
	int i, j;
	char r_s[_strlen(s) + 1];

	j = 0;
	for (i = _strlen(s) - 1; i >= 0; i--)
	{
		r_s[j] = s[i];
		j++;
	}
	for (i = 0; 1 ; i++)
	{
		if (*(r_s + i) == 0)
			break;
		s[i] = r_s[i];
	}
}

/**
 * _strlen - Returns the length of a string.
 * @s: Argument pointer of char type.
 *
 * Return: Length of a string.
 */
int _strlen(char *s)
{
	int i, len = 0;

	for (i = 0; 1 ; i++) /* 1 says if True i.e s still exists */
	{
		if (*(s + i) == 0)
			break;
		len++;
	}
	return (len);
}

