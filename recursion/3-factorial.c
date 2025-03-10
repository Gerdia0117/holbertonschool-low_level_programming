#include "main.h"

/**
 * factorial - Returns the factorial of a number
 * @n: number to find the factorial
 * Return: 1
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
