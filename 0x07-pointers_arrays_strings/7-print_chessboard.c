#include "main.h"
/**
 * print_chessboard - Prints a chessboard represented by a 2D array of chars.
 *
 * @a: A pointer to an 8x8 2D array of chars representing the chessboard.
 *
 * Description: The function prints the chessboard using the characters
 * ' ' (space) to represent empty squares and 'P' and 'R' to represent
 * pieces (e.g., Pawn and Rook).
 */

void print_chessboard(char (*a)[8])
{
int i, j;
for (i = 0 ; i < 8 ; i++)
{
for (j = 0 ; j < 8 ; j++)
{
_putchar(a[i][j]);
}
_putchar('\n');
}
}

