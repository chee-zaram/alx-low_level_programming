#include "main.h"

/**
 * _strncat - Concatenates two strings by adding n bytes from source to dest.
 * @dest: Pointer to first string.
 * @src: Pointer to second string.
 * @n: Number of bytes to be added from src to dest.
 *
 * Return: Returns pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	b = 0;
	for (a = 0; 1; a++)
	{
		if (dest[a] == 0)
		{
			if (n > 0)
			{
				while (n != 0)
				{
					dest[a] = src[b];
					if (src[b] == 0)
						break;
					a++;
					b++;
					n--;
				}
				break;
			}
			else
			{
				break;
			}
		}
	}
	return (dest);
}

