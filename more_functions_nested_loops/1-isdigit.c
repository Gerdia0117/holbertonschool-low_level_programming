#include "main.h"

/**
 * _isdigit - checking for a digit from 0 to 9
 * @c: c is a digit
 * Return: is 0 otherwise
 */

int _isdigit(int c)
{

	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
