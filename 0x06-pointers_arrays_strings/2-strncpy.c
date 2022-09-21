#include "main.h"

/**
 * _strncpy - Copies a string.
 * @dest: Pointer to destination string.
 * @src: Pointer to source string.
 * @n: Number of bytes to be copied.
 *
 * Return: Returns the destination string.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (src[i] == 0)
		{
			while (i < n)
			{
				dest[i] = 0;
				i++;
			}
			break;
		}
		else
		{
			dest[i] = src[i];
		}
	}

	return (dest);
}

