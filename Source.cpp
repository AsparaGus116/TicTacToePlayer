#include "myPhatCock.h"
#include "Board.h"
#include <iostream>

int main(){
	std::cout << 9 * 7 * 5 * 3;
	long long int count = 0;
	for (long long int i = 0; i < 1000000000; i++)
	{
		if (i % 100000000 == 0)
		{
			std::cout << "Hundred Mil!";
		}
		count += i;
	}
	std::cout << count;
	/*
	Board the_board();
	the_board.ChangeSquare(0, 0, true);
	the_board.print();
	*/
	
}