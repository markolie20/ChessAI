#pragma once

#include "Piece.h"
#include "Pawn.h"
#include "Rook.h"
#include "Knight.h"
#include "Bishop.h"
#include "Queen.h"
#include "King.h"

class ChessBoard{
private:
	Rook WRook0{0, true};
    Knight WKnight0{1, true};
    Bishop WBishop0{2, true};
    Queen WQueen{3, true};
    King WKing{4, true};
    Bishop WBishop1{5, true};
    Knight WKnight1{6, true};
    Rook WRook1{7, true};

    Pawn WPawn0{8, true};
    Pawn WPawn1{9, true};
    Pawn WPawn2{10, true};
    Pawn WPawn3{11, true};
    Pawn WPawn4{12, true};
    Pawn WPawn5{13, true};
    Pawn WPawn6{14, true};
    Pawn WPawn7{15, true};

	Pawn BPawn0{48, false};
    Pawn BPawn1{49, false};
    Pawn BPawn2{50, false};
    Pawn BPawn3{51, false};
    Pawn BPawn4{52, false};
    Pawn BPawn5{53, false};
    Pawn BPawn6{54, false};
    Pawn BPawn7{55, false};

    Rook BRook0{56, false};
    Knight BKnight0{57, false};
    Bishop BBishop0{58, false};
    Queen BQueen{59, false};
    King BKing{60, false};
    Bishop BBishop1{61, false};
    Knight BKnight1{62, false};
    Rook BRook1{63, false};

    
	Piece* defaultBoard[8][8] = {{&WRook0, &WKnight0, &WBishop0, &WQueen, &WKing, &WBishop1, &WKnight1, &WRook1},
							   {&WPawn0, &WPawn1, &WPawn2, &WPawn3, &WPawn4, &WPawn5, &WPawn6, &WPawn7},
						       {nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr},
						       {nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr},
							   {nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr},
							   {nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr},
							   {&BPawn0, &BPawn1, &BPawn2, &BPawn3, &BPawn4, &BPawn5, &BPawn6, &BPawn7},
							   {&BRook0, &BKnight0, &BBishop0, &BQueen, &BKing, &BBishop1, &BKnight1, &BRook1}};

	Piece* board[8][8];

	uint8_t BOARDSIZE = 64;

public:
	void setDefaultBoard();
	void movePiece(uint8_t oldLocation, uint8_t newLocation);
	void showBoardIndeces();
	void showBoard();
	void setBoard(Piece* board[][8]);
};
