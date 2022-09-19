#include "main.h"

/**
 * puts2 - Prints every other character of a string, from first character.
 * @str: Pointer to string.
 *
 * Return: No specified return value.
 */
void puts2(char *str)
{
	int i;

	for (i = 0; i < _strlen(str); i = i + 2)
	{
		_putchar(str[i]);
	}
	_putchar(10);
}

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

