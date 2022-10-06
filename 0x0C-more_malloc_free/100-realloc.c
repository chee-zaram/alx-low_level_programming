#include "main.h"

/**
 * _realloc - Reallocates a memory block using malloc() and free().
 * @ptr: Pointer to previously allocated memory.
 * @old_size: Size in bytes of the old allocated space.
 * @new_size: Size in bytes of the new memory block.
 *
 * Return: Pointer to new memory block. NULL if new_size is 0 and ptr is NULL.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *mptr;
	char *old = ptr;

	if (new_size == old_size)
		return (old);

	if (old && new_size == 0)
	{
		free(old);
		return (NULL);
	}
	else if (old == NULL)
	{
		mptr = malloc(new_size);
		return (mptr);
	}

	mptr = malloc(new_size);
	if (mptr == NULL)
		return (NULL);

	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			mptr[i] = old[i];
	}
	else if (old_size > new_size)
	{
		for (i = 0; i < new_size; i++)
			mptr[i] = old[i];
	}

	free(old);
	return (mptr);
}

