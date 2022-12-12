#include <stdio.h>

/**
 * _strcmp - Compares two strings.
 * @s1: First argument, and string to the be compared to.
 * @s2: Second argument, and string to be compared.
 *
 * Return: Returns a - number if s1 less than s2, 0 if s1 equal to s2,
 * or a + number if s1 greater than s2.
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	/**
	 * Check if the first characters are thesame, if so, check the next
	 * until the index of with different characters
	 */
	while (s1[i] == s2[i])
	{
		if (s1[i] == 0) /* if the string are thesame, break at end */
			break;
		i++;
	}

	return (s1[i] - s2[i]);
}

