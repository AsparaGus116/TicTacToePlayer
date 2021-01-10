#include "myPhatCock.h"
#include "Board.h"
#include <iostream>

int main(){
	
	Board the_board;
	the_board.changeSquare(7, true);
	the_board.changeSquare(5, false);
	the_board.print();
	
	
}