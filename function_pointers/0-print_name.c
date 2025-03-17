#include <stdio.h>
#include "function_pointer.h"

/**
 *print_name - print a name as is in the console
 *@name: name of the person
 *@f: is name
 *Return: nothing
 */

void print_name(char *name, void (*f)(char *));
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
void print_to_console(char *name)
{
	printf("Name: %s\n", name);
}

/**
 * main - check the code
 *
 *Return: Always 0
 */

int main(void)
{
	char my_name[] = "John Doe";

	print_name(my_name, print_to_console);
	return (0);
}
