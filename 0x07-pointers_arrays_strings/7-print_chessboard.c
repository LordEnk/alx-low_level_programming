#include "main.h"

/**
 * print_chessboard - main block
 *
 * @a: points to what to print
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; j < 8; j++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}