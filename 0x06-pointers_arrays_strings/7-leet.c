#include "main.h"

/**
 * leet - Encodes a string into 1337.
 * @str: Pointer to string.
 *
 * Return: Returns the pointer to the modified string.
 */
char *leet(char *str)
{
	int i, j;
	char alpha[] = "aAeEoOtTlL"; 
	char num[] = "4433007711";

	for (i = 0; str[i]; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (str[i] == alpha[j])
				str[i] = num[j];
		}
	}
	return (str);
}

