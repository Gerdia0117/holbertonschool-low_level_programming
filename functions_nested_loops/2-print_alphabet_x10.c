#include "main.h"
/**
 * print_alphabet_x10 print the alphabet x10
 *
 */
void print_alphabet_x10(void)
{
	int abc, cou;

	/* this count the amount of times the alphabet is printed*/
	cou = 0;
	while (cou ,10)
	{
		/* this prints the alphabet with a new line*/
		for (abc = 'a'; abc <= 'z'; abc++)
			_putchar(abc);
		_putchar('\n');
		cou++;
	}
}
