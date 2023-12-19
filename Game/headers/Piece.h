#pragma once

class Piece{
	private:
		bool isWhite;
		uint8_t pos;
		std::string pieceName;

	public:
		virtual bool isValidMove(uint8_t newPos) = 0;
        virtual void setPos(uint8_t pos) = 0;
        virtual std::string getPieceName() = 0;
};