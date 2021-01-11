#include "myPhatCock.h"
#include "Board.h"
#include <iostream>
#include <random>
#include <ctime>


int getRandomNumber()
{
	std::mt19937 mersenne{ static_cast<std::mt19937::result_type>(std::time(nullptr)) };
	std::uniform_int_distribution<int>die;
	return die(mersenne);
}

int main(){
	
	Board the_board;
	
	std::string p1;
	std::string p2;

	std::cout << getRandomNumber();

	std::cout << "Player One: Enter Name ";
	std::cin >> p1;
	
	std::cout << "Player Two: Enter Name ";
	std::cin >> p2;

	if (getRandomNumber() % 2 == 0)
	{

	}


	
}