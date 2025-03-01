#include "main.h"

/**
 * print_diagonal - draws a diagonal line in the termial.
 * @n: number of backslashes to print.
 */
void print_diagonal(int n)
{
	int i, b;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (b = 0; b < i; b++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}

