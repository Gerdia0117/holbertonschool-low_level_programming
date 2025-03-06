#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - searches a string for any of the set bytes
 * @s: string to search
 * @accept: characters to search is s
 *
 * Return: when the byte in a pointer in s matches one in accept
 * NULL if no such file is found
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		char *a = accept;

		while (*a)
		{
			if (*s == *a)
				return (s);
			a++;
		}
		s++;
	}

	return (NULL);
}
