#include <stdio.h>
#include "function_pointers.h"

/**
 *int_index - the index of the first element for which the cmp functions
 *@array: the array to search through
 *@cmp: is a pointer to the function to be used to compare values
 *@size: is the amount of elements in the array
 *Return: 0 if false, return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}
