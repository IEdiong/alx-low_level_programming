#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - prints the chessboard
 * @a: matrix of the board to print
 */

void print_chessboard(char (*a)[8])
{
	unsigned int r, c;

	for (r = 0; r < 8; r++)
	{
		for (c = 0; c < 8; c++)
			_putchar(a[r][c]);
		_putchar('\n' + 0);
	}
}
