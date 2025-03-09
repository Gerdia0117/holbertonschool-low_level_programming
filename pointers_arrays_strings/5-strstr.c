#include "main.h"

/**
 * _strstr - locates a substring in a string
 * @haystack: the string to look for
 * @needle: the substring to find
 * Return: a pointer to the first needle in haystack
 * NULL if needle is not found
 */
char *_strstr(char *haystack, char *needle)
{
	char *h = haystack;
	char *n = needle;

	if (*n == '\0')
	{
		return (haystack);
	}

	while (*h)
	{
		char *start = h;
			n = needle;

		while (*h && *n && *h == *n)
		{
			h++;
			n++;
		}

		if (!*n)
		{
			return (start);
		}

		h = start + 1;
	}

	return (NULL);
}
