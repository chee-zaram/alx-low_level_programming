#include "main.h"

/**
 * string_nconcat - Concatenates two strings.
 * @s1: Pointer to first string.
 * @s2: Pointer to second string.
 * @n: Number of bytes from s2 to be concatenated to s1.
 *
 * Return: Pointer to new memory containing concatenated strings.
 * NULL if failed to allocate memory.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, len1, len2, tot_len;
	char *mptr;

	for (len1 = 0; s1 && s1[len1]; len1++)
		;

	for (len2 = 0; s2 && s2[len2] && len2 < n; len2++)
		;

	if (n > len2)
	{
		n = len2;
		tot_len = len1 + n;
	}
	else
	{
		tot_len = len1 + n;
	}

	mptr = malloc(sizeof(char) * tot_len + 1);
	if (mptr == NULL)
		return (NULL);

	for (i = 0; s1 && s1[i]; i++)
		mptr[i] = s1[i];

	for (j = 0; s2 && j < n; j++, i++)
		mptr[i] = s2[j];
	mptr[i] = '\0';

	return (mptr);
}


