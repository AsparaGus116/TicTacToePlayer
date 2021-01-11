#include "Board.h"

#define X 'X'
#define O 'O'

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
	for (int i = 0; i < 9; i += 3)
	{
		bool x1 = board[i] == 'X' ? true : false;
		bool o1 = board[i] == 'O' ? true : false;
		bool no1 = !(o1 || x1);
		bool x2 = board[i + 1] == 'X' ? true : false;
		bool o2 = board[i + 1] == 'O' ? true : false;
		bool no2 = !(o2 || x2);
		bool x3 = board[i + 2] == 'X' ? true : false;
		bool o3 = board[i + 2] == 'O' ? true : false;
		bool no3 = !(o3 || x3);

		std::cout << "                    ||                    ||                    \n";

		if (x1) { std::cout << "     @@@    @@@     ";}
		else if (o1) { std::cout << "      @@@@@@@@@     "; }
		else { std::cout << "                    "; }
		std::cout << "||";
		if (x2) { std::cout << "     @@@    @@@     "; }
		else if (o2) { std::cout << "      @@@@@@@@@     "; }
		else { std::cout << "                    "; }
		std::cout << "||";
		if (x3) { std::cout << "     @@@    @@@     \n"; }
		else if (o3) { std::cout << "      @@@@@@@@@     \n"; }
		else { std::cout << "                    \n"; }

		if (x1) { std::cout << "       @@@@@@       "; }
		else if (o1) { std::cout << "    @@@       @@@   "; }
		else { std::cout << "                    "; }
		std::cout << "||";
		if (x2) { std::cout << "       @@@@@@       "; }
		else if (o2) { std::cout << "    @@@       @@@   "; }
		else { std::cout << "                    "; }
		std::cout << "||";
		if (x3) { std::cout << "       @@@@@@       \n"; }
		else if (o3) { std::cout << "    @@@       @@@   \n"; }
		else { std::cout << "                    \n"; }

		if (x1) { std::cout << "         @@         "; }
		else if (o1) { std::cout << "    @@@       @@@   "; }
		else { std::cout << "                    "; }
		std::cout << "||";
		if (x2) { std::cout << "         @@         "; }
		else if (o2) { std::cout << "    @@@       @@@   "; }
		else { std::cout << "                    "; }
		std::cout << "||";
		if (x3) { std::cout << "         @@         \n"; }
		else if (o3) { std::cout << "    @@@       @@@   \n"; }
		else { std::cout << "                    \n"; }

		if (x1) { std::cout << "       @@@@@@       "; }
		else if (o1) { std::cout << "    @@@       @@@   "; }
		else { std::cout << "                    "; }
		std::cout << "||";
		if (x2) { std::cout << "       @@@@@@       "; }
		else if (o2) { std::cout << "    @@@       @@@   "; }
		else { std::cout << "                    "; }
		std::cout << "||";
		if (x3) { std::cout << "       @@@@@@       \n"; }
		else if (o3) { std::cout << "    @@@       @@@   \n"; }
		else { std::cout << "                    \n"; }

		if (x1) { std::cout << "     @@@    @@@     "; }
		else if (o1) { std::cout << "      @@@@@@@@@     "; }
		else { std::cout << "                    "; }
		std::cout << "||";
		if (x2) { std::cout << "     @@@    @@@     "; }
		else if (o2) { std::cout << "      @@@@@@@@@     "; }
		else { std::cout << "                    "; }
		std::cout << "||";
		if (x3) { std::cout << "     @@@    @@@     \n"; }
		else if (o3) { std::cout << "      @@@@@@@@@     \n"; }
		else { std::cout << "                    \n"; }

		std::cout << "                    ||                    ||                    \n";
		std::cout << "                    ||                    ||                    \n";
		if (i == 6) { break; }
		std::cout << "====================++====================++====================\n";

	}
	

}

char Board::getSquare(int pos)
{
	return board[pos-1];
}

char Board::checkWin()
{
	for (int i = 0; i < 9; i++)
	{
		if (board[i] % 3 == 0 && board[i] == X)
		{

		}
	}
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

