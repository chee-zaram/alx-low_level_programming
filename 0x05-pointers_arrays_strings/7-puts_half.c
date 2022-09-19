#include "main.h"

/**
 * puts_half - Prints second half of string.
 * @str: Pointer to string.
 *
 * Description: If string length is odd, (strlen - 1)/2 characters
 * should be printed.
 * Return: No specified return value.
 */
void puts_half(char *str)
{
	int i;

	if (_strlen(str) % 2 != 0)
	{
		for (i = (_strlen(str) + 1) / 2; i < _strlen(str); i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		for (i = _strlen(str) / 2; i < _strlen(str); i++)
		{
			_putchar(str[i]);
		}
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

