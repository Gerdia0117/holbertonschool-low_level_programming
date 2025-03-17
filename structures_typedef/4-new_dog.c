#include <stdlib.h>
#include "dog.h"

/**
 * _strdup - Duplicates a string in new memory
 * @str: original string
 * Return: Pointer to the newly allocated string, or NULL
 */

char *_strdup(char *str)
{
	char *dup;
	int i, len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len])
		len++;

	dup = malloc(sizeof(char) * (len + 1));
	if (dup == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
		dup[i] = str[i];

	return (dup);
}

/**
 * new_dog - Creates a new dog structure and initializes it
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner's name
 *
 * Return: Pointer to the new dog_t structure, or NULL on failure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = _strdup(name);
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = _strdup(owner);
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	dog->age = age;

	return (dog);
}
