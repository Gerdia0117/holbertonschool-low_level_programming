#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory using malloc.
 * @size: The number of bytes
 * Return: A pointer to the allocated memory or exits with status 98
 */
void *malloc_checked(unsigned int size)
{
	void *ptr;

	ptr = malloc(size);
	if (ptr == NULL)
		exit(98);

	return (ptr);
}
