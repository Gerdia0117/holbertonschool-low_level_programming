#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entery point working with variblebles last digits if, else
 * Return always less than 6 and not 0
 * Using source code
 */
int main(void)
{
	int n, last digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last digit = n % 10;

	printf("Last digit of %d is %d ", n, last digit);

	if (last digit > 5)
	{
		printf("and is greater than 5\n");
	}
		else if (last digit == 0)
		{
			printf("and is 0\n);
			else {
				printf("and is less than 6 and not 0\n);
			}
			return (0);
		}
