#include "main.h"

/**
 * main- print var
 * Return: Always 0 (success)
 */
int main(void)
{

	char *p = "_putchar";

	while (*p)
	{
		_putchar(*p);
		p++;
	}

	_putchar('\n');
	return (0);
}
