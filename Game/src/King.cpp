#include <cstdint>
#include <string>

#include "../headers/King.h"

King::King(uint8_t starterPos, bool isWhite){
    this->pos = starterPos;
    this->isWhite = isWhite;

    if (getIsWhite()){
        this->pieceName = "WhiteKing";
    } else{
            this->pieceName = "BlackKing";
    }
}

bool King::isValidMove(uint8_t newPos){
    return true;
}

void King::setPos(uint8_t newPos){
    this->pos = newPos;
}

std::string King::getPieceName(){
    return pieceName;
}

bool King::getIsWhite(){
    return isWhite;
}