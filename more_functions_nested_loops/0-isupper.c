#include "main.h"

/**
 * _isupper - will check for upper case characters
 * @c: c is uppercase
 * Return: 1 if c is uppercase, 0 if otherwise
 */
int _isupper(int c)
{

	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
