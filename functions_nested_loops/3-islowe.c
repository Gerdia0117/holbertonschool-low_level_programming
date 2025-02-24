#include "main.h"
/**
 * *_islower - checks if the chart is lowercase letter
 * *@c: its the char
 * Return: 1 if a lowercase letter or 0 if not
 */
int _islower(int c)
{
	if (c > 'a' && c < 'z')
		return (1);
	else
		return (0);
}
