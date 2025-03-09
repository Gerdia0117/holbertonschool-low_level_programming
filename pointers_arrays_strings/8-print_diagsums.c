#include <stdio.h>

/**
 * print_diagsums - Print the sums of the diagonal square matrix
 * @a: pointer to the first element 2D array.
 * @size: size of the matrix.
 */
void print_diagsums(int *a, int size)
{
	int sum1 = 0, sum2 = 0;
	int i;

	for (i = 0; i < size; i++)
	{
		sum1 += *(a + (i * size + i));
		sum2 += *(a + (i * size + (size - i - 1)));
	}

	printf("%d, %d\n", sum1, sum2);
}
