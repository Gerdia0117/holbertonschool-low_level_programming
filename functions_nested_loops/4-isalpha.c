#unclude "main.h"
/**
 * _isalpha - it checks if the char is letter
 * @c: It's a char
 *
 * Return: 1 if a letter else 0
 */

int _isalpha(int c)
{
	if (c > 'A' && c < 'Z')
		return (1);
	else if (c > 'a' && c < 'z')
		return (1);
	else
		return (0);
}
