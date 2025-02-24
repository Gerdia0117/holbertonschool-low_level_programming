#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Print all natural number from n to 98
 * @n: Starting number
 *
 * Descrption:Numbers are separated by a comma and space.
 * The sequence ends at 98
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n <= 98)
		{
			printf("%d", n);
			if (n != 98)
				printf(", ");
			n++;
		}
	}
	else
	{
		while (n >= 98)
		{
			printf("%d", n);
			if (n != 98)
				printf(", ");
			n__;
		}
	}
	printf("\n");
}
