#include "main.h"
#include <stdio.h>

/**
 * _strcat - Concatenate two strings.
 * @dest: The destination string.
 * @src: The source string to append to dest.
 * Return: A pointer to the resulting string dest.
 */
char *_strcat(char *dest, const char *src)
{
	char *dest_ptr = dest;

	while (*dest_ptr != '\0')
		dest_ptr++;

	while (*src != '\0')
	{
		*dest_ptr = *src;
		dest_ptr++;
		src++;
	}

	*dest_ptr = '\0';

	return (dest);
}
