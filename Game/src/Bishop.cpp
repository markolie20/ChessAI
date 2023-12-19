#include <cstdint>
#include <string>

#include "../headers/Bishop.h"

Bishop::Bishop(uint8_t starterPos, bool isWhite){
    this->pos = starterPos;
    this->isWhite = isWhite;

    if (getIsWhite()){
        this->pieceName = "WhiteBishop";
    } else{
            this->pieceName = "BlackBishop";
    }
}

bool Bishop::isValidMove(uint8_t newPos){
    return true;
}

void Bishop::setPos(uint8_t newPos){
    this->pos = newPos;
}

std::string Bishop::getPieceName(){
    return pieceName;
}

bool Bishop::getIsWhite(){
    return isWhite;
}