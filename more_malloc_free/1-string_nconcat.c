#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings up to n characters from s2
 * @s1: first string
 * @s2: second string
 * @n: number of characters to concatenate from s2
 * Return: Pointer to newly allocated or NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0, i, j;
	char *concat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	if (n > len2)
		n = len2;

	concat = malloc(sizeof(char) * (len1 + n + 1));
	if (concat == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		concat[i] = s1[i];

	for (j = 0; j < n; j++, i++)
		concat[i] = s2[j];

	concat[i] = '\0';

	return (concat);
}
