#include "dog.h"

/**
 * free_dog - Frees dogs.
 * @d: Pointer to type dog_t.
 *
 * Return: No return value.
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		if (d->name)
			free(d->name);
		if (d->owner)
			free(d->owner);
		free(d);
	}
}

