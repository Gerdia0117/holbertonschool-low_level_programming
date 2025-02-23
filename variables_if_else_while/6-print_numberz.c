#include <stdio.h>
/**
 * main - Entry main while numbers
 * Return: Always 0 (success)
 */
int main(void)
{
	int number;

	number = 48;

	do {
		putchar(number);
		number++;

	} while (number <= 57);

	putchar('\n');
	return (0);
}
