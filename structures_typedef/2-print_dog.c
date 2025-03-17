#include <stdio.h>
#include <stddef.h>
#include "dog.h"

/**
 * print_dog - prints the attributes of a dog structure
 * @d: pointer to struct dog
 * Description: Prints the dog's name, age, and owner
 * If a field is NULL
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);

	printf("Age: %f\n", d->age);

	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);
}
