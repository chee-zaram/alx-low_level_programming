#include "main.h"

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

