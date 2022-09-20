#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: String to be converted.
 *
 * Return: Returns converted integer.
 */
int _atoi(char *s)
{
	int i, j = 0;
	int n = 0;
	int len = 0;
	int nums = 0;
	int digit = 0;

	while (s[len] != 0)
	{
		len++;
	}
	for (i = 0; i < len && nums == 0; i++)
	{
		if (s[i] == '-')
			++j;
		if (s[i] >= 48 && s[i] <= 57)
		{
			digit = s[i] - 48;
			if (j % 2)
				digit = -digit;
			n = n * 10 + digit;
			nums = 1;
			if (s[i + 1] < 48 || s[i + 1] > 57)
				break;
			nums = 0;
		}
	}
	if (nums == 0)
		return (0);
	return (n);
}
