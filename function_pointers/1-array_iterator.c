#include <stddef.h>

/**
 * array_iterator - Executes a function given as a parameter
 * @array: The array to iterate
 * @size: The size of the array.
 * @action: The function to apply to each element.
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
