#include <stdio.h>

/**
 * main - Entry point working with putchar
 * Return: Always 0 (success)
 */
int main(void)
{
	char letter;

	/* loop with ASCII value of the lowercase letter (a-z)*/
	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter); /*this will print each letter in lowercase, one by one*/
	return (0);

	/* loop with ASCII value of the uppercase letter (A-Z)*/
	for (letter = 'A'; latter <= 'Z'; letter++)
		putchar(letter); /*this will print each letter in uppercase, one by one*/


	putchar('\n'); /*this prints a new line after the alphabet code*/
	return (0);
}
