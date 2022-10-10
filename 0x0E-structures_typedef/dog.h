#ifndef DOG_H
#define DOG_H

#include <stdio.h>

/**
 * struct dog - Details of a dog.
 * @name: Pointer to dog's name.
 * @age: Age of dog.
 * @owner: Pointer to owner's name.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* for DOG_H */
