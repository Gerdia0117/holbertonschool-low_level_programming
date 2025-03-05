#include "main.h"
#include <stdio.h>

/**
 *_memset - describes the size bytes and return value.
 *@n: total number of bytes
 *@s: pointer to the memory
 *@b: the total number bytes that holds
 *Return: is s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
	{
		s[j] = b;
	}

	return (s);
}
