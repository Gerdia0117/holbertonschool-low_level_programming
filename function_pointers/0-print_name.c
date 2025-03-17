#include <stdio.h>
#include "function_pointers.h"
#include "main.c"

/**
 * print_name - print a name
 * print_as_is - print the name as is
 *@name: name of the person
 *@f: is name
 *Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		f(name);
	}
}
void print_as_is(char *name)
{
	printf("Name: %s\n", name);
}

{
	char my_name[] = "John Doe";

	print_name(my_name, print_as_is);
	return (0);
}
