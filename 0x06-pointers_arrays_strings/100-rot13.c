#include "main.h"

/**
 * rot13 - Encodes a string using rot13.
 * @str: Pointer to the string to be encoded.
 *
 * Return: Returns the pointer to modified string.
 */
char *rot13(char *str)
{
	int i, j;
	char *alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *r13 = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; str[i]; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (str[i] == alpha[j])
			{
				str[i] = r13[j];
				break;
			}
		}
	}
	return (str);
}

