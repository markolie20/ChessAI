#include <iostream>
#include <cstdint>
#include <string>

#include "../headers/ChessBoard.h"

void ChessBoard::setDefaultBoard(){
	this->setBoard(defaultBoard);
}

void ChessBoard::movePiece(uint8_t oldLocation, uint8_t newLocation){
    if (board[oldLocation/8][oldLocation%8]->isValidMove(newLocation)){

        board[newLocation/8][newLocation%8] = board[oldLocation/8][oldLocation%8];
        board[oldLocation/8][oldLocation%8] = nullptr;
        board[newLocation/8][newLocation%8]->setPos(newLocation);
    }
        else{
            std::cout << "invalid move..." << std::endl;
        }
	
}

void ChessBoard::showBoardIndeces(){
	for(int i = 0; i < BOARDSIZE; i++){
		std::cout << i << " ";
		if ((i+1)/8 != i/8){
			std::cout << std::endl;
		}
	}
	std::cout << std::endl;
}

void ChessBoard::showBoard(){
	for(int i = 0; i < 64; i++){
		if (board[i/8][i%8] != nullptr){
			std::cout << board[i/8][i%8]->getPieceName() << " ";
		}
            else{
                std::cout << "# ";
            }
		if ((i+1)/8 != i/8){
			std::cout << std::endl;
		}
	}
	std::cout << std::endl;
}

void ChessBoard::setBoard(Piece* board[][8]){
	for(int i = 0; i < BOARDSIZE; i++){
		this->board[i/8][i%8] = board[i/8][i%8];
	}
}

