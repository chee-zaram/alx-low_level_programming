#include "main.h"

/**
 * _strcat - Concatenates two strings.
 * @dest: Pointer to first argument of char type.
 * @src: Pointer to second argument of char type.
 *
 * Return: Returns pointer to the resulting string in dest.
 */
char *_strcat(char *dest, char *src)
{
	int c, d;

	d = 0;
	for (c = 0; 1; c++)
	{
		if (dest[c] == 0)
		{
			while (1)
			{
				dest[c] = src[d];
				if (src[d] == 0)
					break;
				c++;
				d++;
			}
			break;
		}
	}
	return (dest);
}

