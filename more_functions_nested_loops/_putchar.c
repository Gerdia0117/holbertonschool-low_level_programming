#include <unistd.h>

/**
 * _putchar - writes a charracter to stdout
 * @c: the character to print
 *
 * Return: On success, 1 is returned. On error, -1 is returned.
 */
int _putchar(char c)
{
	return write(1, &c, 1);
}
