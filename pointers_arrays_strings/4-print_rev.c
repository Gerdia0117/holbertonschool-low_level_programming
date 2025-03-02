#include "main.h"

/**
 * print_rev - Prints a string in reverse.
 * @str: The string to be reversed.
 */
void print_rev(char *str)
{
	int length = 0;

	while (str[length] != '\0')
		length++;

	for (length--; length >= 0; length--)
		_putchar(str[length]);

	_putchar('\n');
}
