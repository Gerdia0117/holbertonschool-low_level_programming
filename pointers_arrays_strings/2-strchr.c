#include "main.h"
#include <stdio.h>

/**
 * _strchr - locate a character in string
 * @s: is the string
 * @c: is the character
 * Return: when c is found in s of NULL id not found
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (c == '\0')
	{
		return (s);
	}
	return (NULL);
}
