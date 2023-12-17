#include <string>
#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

class Piece{
	private:
		bool isWhite;
		uint8_t pos;
		string pieceName;

	public:
		virtual bool isValidMove(uint8_t newPos) = 0;
        virtual void setPos(uint8_t pos) = 0;
        virtual string getPieceName() = 0;
};

class Pawn :public Piece{

private:
	bool hasMovenBefore = false;
	bool isWhite;
	string pieceName;
	uint8_t pos;
		

public:
	Pawn(uint8_t starterPos, bool isWhite){
			
            this->pos = starterPos;
            this->isWhite = isWhite;

			if (getIsWhite()){
				this->pieceName = "WhitePawn";
				}
				else{
					this->pieceName = "BlackPawn";
				}
		}

		bool isValidMove(uint8_t newPos){
			if (hasMovenBefore){
    			setHasMovenBefore(true);
                return isForwardStep(newPos, 1);
            } else{
                return isForwardStep(newPos, 2);   
            }  
		}

        bool isForwardStep(uint8_t newPos, uint8_t maxAmount){
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

		
		void setHasMovenBefore(bool moved){
			this->hasMovenBefore = moved;
		}

        void setPos(uint8_t pos){
            this->pos = pos;
        }

		string getPieceName(){
			return pieceName;
		}

		bool getIsWhite(){
			return isWhite;
		}

		uint8_t getPos(){ 
			return pos;
		}

};

class Rook: public Piece{
private:
    bool isWhite;
    string pieceName;
    uint8_t pos;

public:
    Rook(uint8_t starterPos, bool isWhite){
        this->pos = starterPos;
        this->isWhite = isWhite;

        if (getIsWhite()){
            this->pieceName = "WhiteRook";
            }
            else{
                this->pieceName = "BlackRook";
            }
        }

    bool isValidMove(uint8_t newPos){
        return true;
    }

    void setPos(uint8_t newPos){
        this->pos = newPos;
    }

    string getPieceName(){
        return pieceName;
    }

    bool getIsWhite(){
        return isWhite;
    }
};

class Knight: public Piece{
private:
    bool isWhite;
    string pieceName;
    uint8_t pos;

public:
    Knight(uint8_t starterPos, bool isWhite){
        this->pos = starterPos;
        this->isWhite = isWhite;

        if (getIsWhite()){
            this->pieceName = "WhiteKnight";
            }
            else{
                this->pieceName = "BlackKnight";
            }
        }

    bool isValidMove(uint8_t newPos){
        return true;
    }

    void setPos(uint8_t newPos){
        this->pos = newPos;
    }

    string getPieceName(){
        return pieceName;
    }

    bool getIsWhite(){
        return isWhite;
    }
};

class Bishop: public Piece{
private:
    bool isWhite;
    string pieceName;
    uint8_t pos;

public:
    Bishop(uint8_t starterPos, bool isWhite){
        this->pos = starterPos;
        this->isWhite = isWhite;

        if (getIsWhite()){
            this->pieceName = "WhiteBishop";
            }
            else{
                this->pieceName = "BlackBishop";
            }
        }

    bool isValidMove(uint8_t newPos){
        return true;
    }

    void setPos(uint8_t newPos){
        this->pos = newPos;
    }

    string getPieceName(){
        return pieceName;
    }

    bool getIsWhite(){
        return isWhite;
    }
};

class Queen: public Piece{
private:
    bool isWhite;
    string pieceName;
    uint8_t pos;

public:
    Queen(uint8_t starterPos, bool isWhite){
        this->pos = starterPos;
        this->isWhite = isWhite;

        if (getIsWhite()){
            this->pieceName = "WhiteQueen";
            }
            else{
                this->pieceName = "BlackQueen";
            }
        }

    bool isValidMove(uint8_t newPos){
        return true;
    }

    void setPos(uint8_t newPos){
        this->pos = newPos;
    }

    string getPieceName(){
        return pieceName;
    }

    bool getIsWhite(){
        return isWhite;
    }
};

class King: public Piece{
private:
    bool isWhite;
    string pieceName;
    uint8_t pos;

public:
    King(uint8_t starterPos, bool isWhite){
        this->pos = starterPos;
        this->isWhite = isWhite;

        if (getIsWhite()){
            this->pieceName = "WhiteKing";
            }
            else{
                this->pieceName = "BlackKing";
            }
        }

    bool isValidMove(uint8_t newPos){
        return true;
    }

    void setPos(uint8_t newPos){
        this->pos = newPos;
    }

    string getPieceName(){
        return pieceName;
    }

    bool getIsWhite(){
        return isWhite;
    }
};

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
		void setDefaultBoard(){
			this->setBoard(defaultBoard);
		}

		void movePiece(uint8_t oldLocation, uint8_t newLocation){
            if (board[oldLocation/8][oldLocation%8]->isValidMove(newLocation)){

                board[newLocation/8][newLocation%8] = board[oldLocation/8][oldLocation%8];
                board[oldLocation/8][oldLocation%8] = nullptr;
                board[newLocation/8][newLocation%8]->setPos(newLocation);
            }
                else{
                    cout << "invalid move..." << endl;
                }
			
		}

		void showBoardIndeces(){
			for(int i = 0; i < BOARDSIZE; i++){
				cout << i << " ";
				if ((i+1)/8 != i/8){
					cout << endl;
				}
			}
			cout << endl;
		}

		void showBoard(){
			for(int i = 0; i < 64; i++){
				if (board[i/8][i%8] != nullptr){
					cout << board[i/8][i%8]->getPieceName() << " ";
				}
                    else{
                        cout << "# ";
                    }
				if ((i+1)/8 != i/8){
					cout << endl;
				}
			}
			cout << endl;
		}

		void setBoard(Piece* board[][8]){
			for(int i = 0; i < BOARDSIZE; i++){
				this->board[i/8][i%8] = board[i/8][i%8];
			}
		}
};

int main() {
	ChessBoard board;

	board.showBoardIndeces();
	board.setDefaultBoard();
	board.showBoard();

	board.movePiece(9, 17);
	// cout << sizeof(board) << endl;

	board.showBoard();
}

