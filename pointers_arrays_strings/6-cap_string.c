#include "main.h"

/**
 * cap_string - capitalizes all words of a string.
 * @str: the string to be modified.
 * Return: the modified string.
 */
char *cap_string(char *str)
{
	int i = 0;
	int capitalize = 1;

	while (str[i] != '\0')
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
				str[i] == ',' || str[i] == ';' || str[i] == '.' ||
				str[i] == '!' || str[i] == '?' || str[i] == '"' ||
				str[i] == '(' || str[i] == ')' || str[i] == '{' ||
				str[i] == '}')
		{
			capitalize = 1;
		}
		else if (capitalize && (str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] = str[i] - 'a' + 'A';
			capitalize = 0;
		}
		else
		{
			capitalize = 0;
		}

		i++;
	}

	return (str);
}
