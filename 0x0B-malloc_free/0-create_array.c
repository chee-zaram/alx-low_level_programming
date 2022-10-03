#include "main.h"

/**
 * create_array - Creates an array of chars, and initializes with given char.
 * @size: Number of chars to be allocated.
 * @c: Character to be placed in allocated memories.
 *
 * Return: Returns pointer to array, NULL if fail, NULL if size is 0.
 */
char *create_array(unsigned int size, char c)
{
	char *mptr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	mptr = (char *)malloc(sizeof(char) * size);
	if (mptr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		*(mptr + i) = c;
	*(mptr + i) = '\0';

	return (mptr);
}

