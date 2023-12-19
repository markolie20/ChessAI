#include <cstdint>
#include <string>

#include "../headers/Pawn.h"

Pawn::Pawn(uint8_t starterPos, bool isWhite){
	
    this->pos = starterPos;
    this->isWhite = isWhite;

	if (getIsWhite()){
		this->pieceName = "WhitePawn";
		}
		else{
			this->pieceName = "BlackPawn";
		}
}

bool Pawn::isValidMove(uint8_t newPos){
	if (hasMovenBefore){
		setHasMovenBefore(true);
        return isForwardStep(newPos, 1);
    } else{
        return isForwardStep(newPos, 2);   
    }  
}

bool Pawn::isForwardStep(uint8_t newPos, uint8_t maxAmount){
    if (getIsWhite()){
        for (int amount = 0; amount <= maxAmount; amount++){
            if (newPos == pos+(8*amount)){
                return true;
            }
        }
        return false;
        
    } else {
        for (int amount = 0; amount <= maxAmount; amount++){
            if (newPos == pos-(8*amount)){
                return true;
            }
        }
        return false;
    }
}


void Pawn::setHasMovenBefore(bool moved){
	this->hasMovenBefore = moved;
}

void Pawn::setPos(uint8_t pos){
    this->pos = pos;
}

std::string Pawn::getPieceName(){
	return pieceName;
}

bool Pawn::getIsWhite(){
	return isWhite;
}

uint8_t Pawn::getPos(){ 
	return pos;
}
