#include "main.h"

/**
 *_memset - describes the size bytes and return value.
 *@n: total number of bytes
 *@s: pointer to the memory
 *@b: the total number bytes that holds
 *Return: is s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
