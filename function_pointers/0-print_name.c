#include "function_pointers.h"
#include <stddef.h>

/**
 *print_name - call function to print a name
 *@name: name to be printed
 *@f: a pointer to a function that prints a name
 *Description: if name or function pointer is NULL, it does nothing
 *Return: Nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
