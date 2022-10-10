#include "dog.h"

/**
 * print_dog - Prints a struct dog.
 * @d: Pointer to variable of type struct dog.
 *
 * Return: No specified return value.
 */
void print_dog(struct dog *d)
{
	if (!d)
		return;

	if (!(d->name))
		d->name = "(nil)";

	if (!(d->owner))
		d->owner = "(nil)";

	printf("Name: %s\nAge: %.6f\nOwner: %s\n", d->name, d->age, d->owner);
}

