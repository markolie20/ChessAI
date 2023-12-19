#include <cstdint>
#include <string>

#include "../headers/Queen.h"

Queen::Queen(uint8_t starterPos, bool isWhite){
    this->pos = starterPos;
    this->isWhite = isWhite;

    if (getIsWhite()){
        this->pieceName = "WhiteQueen";
    } else{
            this->pieceName = "BlackQueen";
    }
}

bool Queen::isValidMove(uint8_t newPos){
    return true;
}

void Queen::setPos(uint8_t newPos){
    this->pos = newPos;
}

std::string Queen::getPieceName(){
    return pieceName;
}

bool Queen::getIsWhite(){
    return isWhite;
}