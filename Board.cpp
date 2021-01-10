#include "Board.h"

Board::Board()
{
	board = {
		{
		{' ', ' ', ' '},
		{' ', ' ', ' '},
		{' ', ' ', ' '}
	} 
	};
}

void Board::changeSquare(int row, int col, bool isX)
{
	char character = 'O';
	if (isX)
	{
		character = 'X';
	}
	board[row][col] = character;
}

