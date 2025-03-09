#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - prints a chessboard
 * @board: pointer to an 8x8 array that represent the chessboard
 * Return: 0
 */
void print_chessboard(char (*board)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			putchar(board[i][j]);
		}
		putchar('\n');
	}
}
