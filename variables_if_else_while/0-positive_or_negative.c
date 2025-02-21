#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point working with variables if, else
 * Return: Always 0
 * Using a source code
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive", n);
	if else(n == 0)
		printf("%d is zero", n);
	else
			printf("%d is negative", n);
	return (0);
}
