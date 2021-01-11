#pragma once
#include <array>
#include <iostream>

class Board
{
private:
	std::array<char,9> board;
	
public:
	Board();

	void changeSquare(int numPos, bool isX);

	void print();

	char getSquare(int pos);

	char checkWin();

private:
	std::array<int, 2> getPos(int num);

	
	
};
