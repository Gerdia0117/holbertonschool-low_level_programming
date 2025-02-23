#include <stdio.h>
/**
 * main - Entry point working with putchar
 * Return: Always 0 (success)
 */
int main(void)
{
	char letter;

	/* ASCII value of the lowercase letters will loop (a-z)*/
	for (letter = 'a'; letter != 'z'; letter++)
		putchar(letter); /*this prints each letter one by one*/

	putchar('\n'); /*after the alphabet a new line will be printed*/
	return (0);
}
