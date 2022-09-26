#include "main.h"

/**
 * _memset - Fills memory with a constant byte.
 * @s: Pointer to address area to be filled.
 * @b: Constant byte.
 * @n: Number of bytes to be filled.
 *
 * Return: Returns the pointer to the filled memory area.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}

