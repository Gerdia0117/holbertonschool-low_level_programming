#include "main.h"
/**
 *print_alphabet - Print the Alphabet
 */
void print_alphabet(void)
{
	int abc;
	/*this will print the full alphabet with a new line at the end*/
	for (abc = 'a'; abc <= 'z'; abc++)
		_putchar(abc);
	_putchar('\n');
}

