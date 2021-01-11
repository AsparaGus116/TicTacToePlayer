#include "myPhatCock.h"
#include "Board.h"
#include <iostream>
#include <random>
#include <ctime>


int getRandomNumber()
{
	std::mt19937 mersenne{ static_cast<std::mt19937::result_type>(std::time(nullptr)) };
	std::uniform_int_distribution<int>dist;
	return dist(mersenne);
}

int main(){
	
	Board the_board;

	
	std::string isX;
	std::string isO;

	std::cout << "Player One: Enter Name ";
	std::cin >> isX;

	std::cout << '\n';

	std::cout << "Player Two: Enter Name ";
	std::cin >> isO;

	system("cls");

	if (getRandomNumber() % 2 == 0)
	{
		std::cout << isX << " is X!\n";
	}
	else
	{
		std::cout << isO << " is X!\n";

		std::string temp = isX;
		isX = isO;
		isO = temp;
	}

	bool tied = false;
	int turnNum = 0;
	while (the_board.checkWin() == ' ')
	{
		std::string player;
		
		if (turnNum % 2 == 0)
		{
			player = isX;
		}
		else
		{
			player = isO;
		}

		int position = 0;

		do
		{
			if (turnNum > 8)
			{
				break;
			}
			std::cout << player << "! Enter position: ";
			std::cin >> position;
		} while ((!(position >= 1) || !(position <= 9)) || the_board.getSquare(position) != ' ');
		
		if (turnNum <= 8)
		{
			system("cls");
			the_board.changeSquare(position, turnNum % 2 == 0 ? true : false);
			the_board.print();
		}
		

		if (turnNum > 8)
		{
			std::cout << "Tie!";
			tied = true;
			break;
		}
		
		turnNum++;
	}

	if (turnNum % 2 == 0 && !tied)
	{
		std::cout << isX << " wins!";
	}
	else if(!tied)
	{
		std::cout << isO << " wins!";
	}
}