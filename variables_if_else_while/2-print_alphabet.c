#include <stdio.h>
/**
 * main - Entry point working with putchar
 * Return: Always 0 (success)
 */
int main(void)
{
	char letter;

	/* Loop with ASCII value of the lowercase letters (a-z)*/
	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter); /*this prints each letter, one by one*/

	putchar('\n'); /*this prints a newline after the alphaet code*/
	return (0);
}
