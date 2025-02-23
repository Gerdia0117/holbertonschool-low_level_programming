#include <stdio.h>
/**
 * main - Entry point working with putchar
 * Return: Always 0 (success)
 */
int main(void)
{
	/* variable character/letters*/
	char letter;

	/* loop with ASCII value of the lowercase letters (a-z)*/
	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter); /*this is going  print each letter, one by one*/
	/* loop with ASCII value of the uppercase letters (A-Z)*/
	for (letter = 'A'; letter <= 'Z'; letter++)
		putchar(letter);

	putchar('\n'); /*this prints a new line after the alphabet code*/
	return (0);
}
