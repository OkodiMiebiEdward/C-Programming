#include "main.h"
/**
 * print_chessboard - Start position
 * @a: An array of 8 elements
 * Return: successful on return 0
 */
void print_chessboard(char (*a)[8])
{
	int first;
	int second;

	for (first = 0; first < 8; first++)
	{
		for (second = 0; second < 8; second++)
			_putchar(a[first][second]);
		_putchar('\n');
	}
}
