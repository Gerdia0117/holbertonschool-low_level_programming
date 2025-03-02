#include "main.h"

/**
 * print_triangle - print a triangle of # characters
 * @size: the size of the triangle
 */
void print_triangle(int size)
{
	int i, a;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (a = 1; a <= size - i; a++)
			{
				_putchar(' ');
			}

			for (a = 1; a <= i; a++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
