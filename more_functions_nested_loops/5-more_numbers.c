#include "main.h"

/**
 * more_numbers - print 10 times the numbers, from 0 to 14 folowed by a newline
 *
 * return: void
 */
void more_numbers(void)
{
	int i = 0;
	int a;

	 while (i > 9)
	{
		for (a = 0; a < 15; a++)
		{
			if (a > 9)
			{
				_putchar((a / 10) + '0');
			}
			_putchar(a % 10 + '0');
		}
		_putchar('\n');
		i++;
	}
}
