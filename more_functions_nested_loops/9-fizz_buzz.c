#include <stdio.h>

/**
 * main - print the FizzBuzz sequence from 1 to 100
 *
 * Return: Always 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i > 1)
		{
			printf(" ");
		}

		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 ==0)
		{
			ptintf("Buzz");
		}
		else
		{
			printf("%d", i);
		}
	}
	printf("\n");

	return (0);
}
