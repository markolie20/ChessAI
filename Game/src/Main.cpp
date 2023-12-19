#include <iostream>
#include <cstdint>
#include <string>

#include "../headers/ChessBoard.h"

using namespace std;

int main() {
    ChessBoard board;

	board.showBoardIndeces();
	board.setDefaultBoard();
    
	board.showBoard();
	board.movePiece(49, 33);
    board.showBoard();
    board.movePiece(41, 17);
	board.showBoard();

}

