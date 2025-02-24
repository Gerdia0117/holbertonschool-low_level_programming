#include "main.h"

/**
 * _abs - absolute value of an int
 * @n: The integer whos absolute value is computed
 *
 * Return: absolute value of an integer
 */
int _abs(int n)
{
	if (n < 0)
		return (-n); /* if n is a negative, return its postive counterpart*/
	else
		return (n); /* if n is postive or zero, returm it as it is */
}
