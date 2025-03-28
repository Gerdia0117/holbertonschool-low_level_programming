#include "main.h"

int check_prime(int n, int i);

/**
 * is_prime_number - Checks if a number is prime
 * @n: number to check
 * Return: 1 or 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (check_prime(n, 2));
}

/**
 * check_prime - function to check for prime recursively
 * @n: number to check
 * @i: current divisor to check
 * Return: 1 or 0
 */
int check_prime(int n, int i)
{
	if (i * i > n)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
	return (check_prime(n, i + 1));
}
