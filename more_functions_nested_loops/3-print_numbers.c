#include "main.h"

/**
 * print_numbers - print the numbers from 0 to 9 followed by a new line
 */
void print_numbers(void)
{
	int i; /* declare the loop variable outside the for loop*/

	for (i = 0; i <= 9; i++) /*loop from 0 to 9 */
	{
		_putchar(i + '0'); /* turns integer to a char and prints it */
	}
	_putchar('\n'); /* orint a new line after printing all numbers */
}
