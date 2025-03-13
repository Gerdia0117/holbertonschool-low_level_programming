#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Duplicates a string in a newly allocated space in memory.
 * @str: string to duplicate.
 * Return: pointer to duplicated string or NULL
 */

char *_strdup(char *str)
{
	char *dup;
	unsigned int i, len;

	if (str == NULL)
		return (NULL);

	for (len = 0; str[len] != '\0'; len++)
		;

	dup = malloc((len + 1) * sizeof(char));
	if (dup == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		dup[i] = str[i];

	dup[len] = '\0';

	return (dup);
}
