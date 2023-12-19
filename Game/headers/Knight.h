#pragma once

#include "Piece.h"

class Knight: public Piece{
private:
    bool isWhite;
    std::string pieceName;
    uint8_t pos;

public:
    Knight(uint8_t starterPos, bool isWhite);
    bool isValidMove(uint8_t newPos);
    void setPos(uint8_t newPos);
    std::string getPieceName();
    bool getIsWhite();
};