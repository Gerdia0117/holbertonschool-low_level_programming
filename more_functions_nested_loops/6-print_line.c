#include "main.h"

/**
 * print_line - create a line using n as _ and print new line
 * @n: is 0 or less
 */
void print_line(int n)
{
	int i;

	if (n < 0) {
		_putchar('\n');
		return;
	}
	for (i = 0; i < n; i++)
		_putchar('_');
	_putchar('\n');
}

