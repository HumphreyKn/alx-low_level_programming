#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: pointer to the memory address for the chess arrar
 *
 * Return: nothing
 */
void print_chessboard(char (*a)[8])
{
	int i; /* row*/
	int j; /* column */

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
