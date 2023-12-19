#pragma once

#include "Piece.h"

class Pawn :public Piece{
private:
	bool hasMovenBefore = false;
	bool isWhite;
	std::string pieceName;
	uint8_t pos;
		
public:
	Pawn(uint8_t starterPos, bool isWhite);
	bool isValidMove(uint8_t newPos);
	bool isForwardStep(uint8_t newPos, uint8_t maxAmount);
	void setHasMovenBefore(bool moved);
	void setPos(uint8_t pos);
	std::string getPieceName();
	bool getIsWhite();
	uint8_t getPos();
};