#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two number and prints result
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success, or 1 if correcst
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	result = num1 * num2;

	printf("%d\n", result);

	return (0);
}
