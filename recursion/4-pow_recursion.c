#include "main.h"

/**
 * _pow_recursion - Returns the value x raised to the power of y
 * @x: base number
 * @y: the exponent
 * Return: lower than 0 or -1
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
