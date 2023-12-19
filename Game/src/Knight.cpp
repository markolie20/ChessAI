#include <cstdint>
#include <string>

#include "../headers/Knight.h"

Knight::Knight(uint8_t starterPos, bool isWhite){
    this->pos = starterPos;
    this->isWhite = isWhite;

    if (getIsWhite()){
        this->pieceName = "WhiteKnight";
    } else{
            this->pieceName = "BlackKnight";
    }
}

bool Knight::isValidMove(uint8_t newPos){
    return true;
}

void Knight::setPos(uint8_t newPos){
    this->pos = newPos;
}

std::string Knight::getPieceName(){
    return pieceName;
}

bool Knight::getIsWhite(){
    return isWhite;
}