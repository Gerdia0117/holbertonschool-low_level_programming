#include "main.h"

int sqrt_helper(int n, int guess);

/**
 * _sqrt_recursion - Returns natural square root of a number
 * @n: to find the square root of
 * Return: 0
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (sqrt_helper(n, 1));
}

/**
 * sqrt_helper - Helper function to find the square root
 * @n: to find the square root of
 * @guess: current guess for the square root
 *
 * Return: The square root of n or -1
 */
int sqrt_helper(int n, int guess)
{
	if (guess * guess == n)
	{
		return (guess);
	}
	else if (guess * guess > n)
	{
		return (-1);
	}
	return (sqrt_helper(n, guess + 1));
}
