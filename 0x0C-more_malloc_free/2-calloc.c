#include "main.h"

/**
 * _calloc - Allocates memory for an array, using malloc(), and set to zero.
 * @nmemb: Number of elements in array.
 * @size: Size int bytes of each element.
 *
 * Return: Pointer to new memory location.
 * If malloc fails, or if size or nmemb is 0, return NULL.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *mptr;

	if (size == 0 || nmemb == 0)
		return (NULL);

	mptr = malloc(size * nmemb);
	if (mptr == NULL)
		return (NULL);

	for (i = 0; i < nmemb; i++)
		mptr[i] = 0;

	return (mptr);
}

