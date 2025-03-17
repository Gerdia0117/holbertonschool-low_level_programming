#include <stddef.h> /* Required for NULL */
#include "dog.h"

/**
 * init_dog - Initializes a dog structure
 * @d: Pointer to the struct dog
 * @name: pointer to the name of dog
 * @age: age of dog
 * @owner: Pointer to the owner
 * Description: This function initializes a struct dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
