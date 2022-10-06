#include "main.h"

/**
 * malloc_checked - Allocates memory using malloc().
 * @b: Size of memory to be allocated.
 *
 * Return: Returns a pointer to the allocated memory.
 */
void *malloc_checked(unsigned int b)
{
	void *mptr;

	mptr = malloc(b);
	if (mptr == NULL)
		exit(98);

	return (mptr);
}

