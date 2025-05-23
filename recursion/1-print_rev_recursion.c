#include "main.h"

/**
 * _print_rev_recursion - print string in reverse using recursion
 * @n: The string to be printed
 * Return: 0
 */
void _print_rev_recursion(char *n)
{
	if (*n != '\0')
	{
		_print_rev_recursion(n + 1);
		_putchar(*n);
	}
}
