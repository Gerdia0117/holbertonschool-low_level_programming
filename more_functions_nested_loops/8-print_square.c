#include "main.h"

/**
 * print_square - print square of # character.
 * @size: size of the square
 */
void print_square(int size)
{
	int i, a;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (a = 0; a < size; a++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
