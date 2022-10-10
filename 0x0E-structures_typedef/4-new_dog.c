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

	new->name = name;
	new->age = age;
	new->owner = owner;

	return (new);
}

