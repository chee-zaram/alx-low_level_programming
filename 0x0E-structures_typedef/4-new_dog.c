#include "dog.h"

/**
 * new_dog - Creates a new dog.
 * @name: Name of dog.
 * @age: Age of dog.
 * @owner: Owner of dog.
 *
 * Return: Returns a pointer to of type dog_t.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new = malloc(sizeof(dog_t));

	if (new == NULL)
		return (NULL);

	new->age = age;

	new->name = _strdup(name);
	if (!(new->name))
		return (NULL);

	new->owner = _strdup(owner);
	if (!(new->owner))
		return (NULL);

	return (new);
}

/**
 * _strdup - Copies a string in heap.
 * @str: String to be copied to heap.
 *
 * Return: Returns pointer to memory on heap. NULL if failed.
 */
char *_strdup(char *str)
{
	char *mptr;
	unsigned int i, size;

	if (str == NULL)
		return (NULL);

	for (size = 0; *(str + size); size++)
		;

	mptr = malloc(sizeof(char) * size + 1);
	if (mptr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		*(mptr + i) = *(str + i);
	*(mptr + i) = '\0';

	return (mptr);
}

