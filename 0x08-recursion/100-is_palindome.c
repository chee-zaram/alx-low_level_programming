#include "main.h"

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: Pointer to string.
 *
 * Return: Returns 1 if palindrome, 0 if not.
 */
int is_palindrome(char *s)
{
	int b = 0;
	int e = get_len(s) - 1;

	if (s[b] == 0)
		return (1);
	else
		return (check_match(&s[b], &s[e]));
}

/**
 * check_match - Checks if characters in alternate positions in a string match.
 * @big: Pointer to beginning address as at last function call.
 * @end: Pointer to ending address as at last function call.
 *
 * Return: Returns 0 if not matching, 1 if matching.
 */
int check_match(char *big, char *end)
{
	if (big < end)
	{
		if (*(big) == *(end))
			return (check_match((++big), (--end)));
		else
			return (0);
	}
	else
	{
		return (1);
	}
}

/**
 * get_len - Uses recursion as opposed to loops to get the length of a string.
 * @s: Pointer to string.
 *
 * Return: Returns length of string.
 */
int get_len(char *s)
{
	int i = 0, len = 0;

	if (s[i])
	{
		len += get_len(&s[++i]);
		return (++len);
	}
	else
	{
		return (0);
	}
}

