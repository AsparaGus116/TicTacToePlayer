#include "Board.h"

Board::Board()
{
	board = { ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ' };
}

void Board::changeSquare(int numPos, bool isX)
{
	numPos -= 1;

	char character = 'O';
	if (isX)
	{
		character = 'X';
	}
	board [numPos] = character;
}

void Board::print()
{
	std::cout << board[0] << '|' << board[1] << '|' << board[2] << '\n';
	std::cout << "-+-+-\n";
	std::cout << board[3] << '|' << board[4] << '|' << board[5] << '\n';
	std::cout << "-+-+-\n";
	std::cout << board[6] << '|' << board[7] << '|' << board[8] << '\n';
}

std::array<int, 2> Board::getPos(int num)
{
	

	num -= 1;
	int row;
	int col;

	if (num % 3 == 0)
	{
		col = 0;
	}
	else if (num % 3 == 1)
	{
		col = 1;
	}
	else
	{
		col = 2;
	}

	row = num - col / 3;

	return std::array<int, 2>{ row, col };
}

