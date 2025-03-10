#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string
 * @n: The string to measure
 * Return: 0
 */
int _strlen_recursion(char *n)
{
	if (*n == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(n + 1));
	}
}
