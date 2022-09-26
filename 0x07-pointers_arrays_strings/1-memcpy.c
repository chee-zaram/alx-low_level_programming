#include "main.h"

/**
 * _memcpy - Copies memory area.
 * @dest: Pointer to destination of copied area.
 * @src: Pointer to area to be copied.
 * @n: Number of memory areas to be copied.
 *
 * Return: Returns the pointer to destination of copied area.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}

