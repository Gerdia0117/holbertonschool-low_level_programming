#include <stdio.h>
/**
 * main - Entry point working with putchar
 * Return: Always 0 (success)
 */
int main(void)
{
	char letter;

	for (letter = '0'; letter <= '9'; letter++)
		putchar(letter);

	for (letter = 'a'; letter <= 'f'; letter++)
		putchar(letter);

	putchar('\n');
	return (0);
}
