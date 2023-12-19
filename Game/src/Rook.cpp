#include <cstdint>
#include <string>

#include "../headers/Rook.h"

Rook::Rook(uint8_t starterPos, bool isWhite){
    this->pos = starterPos;
    this->isWhite = isWhite;

    if (getIsWhite()){
        this->pieceName = "WhiteRook";
    } else{
            this->pieceName = "BlackRook";
    }
}

bool Rook::isValidMove(uint8_t newPos){
    return true;
}

void Rook::setPos(uint8_t newPos){
    this->pos = newPos;
}

std::string Rook::getPieceName(){
    return pieceName;
}

bool Rook::getIsWhite(){
    return isWhite;
}
