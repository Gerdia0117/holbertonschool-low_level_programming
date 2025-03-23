#include "function_pointers.h"

/**
 *print_name - call function to print a name
 *@name: name to be printed
 *@f: a pointer to a function that prints a name
 *Return: Nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
