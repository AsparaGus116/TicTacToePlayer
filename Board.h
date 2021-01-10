#pragma once
#include <array>

class Board
{
private:
	std::array<std::array<char, 3>, 3> board;
	
public:
	Board();

	void changeSquare(int row, int col, bool isX);

	
	
};
