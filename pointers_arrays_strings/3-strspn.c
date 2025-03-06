#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: the string to look at
 * @accept: the characters is s
 *
 * Return: number of bytes in the segment of s that consist only of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	char *a;

	while (*s)
	{
		a = accept;
		while (*a)
		{
			if (*s == *a)
				break;
			a++;
		}
		if (!*a)
			break;
		count++;
		s++;
	}
	return (count);
}
