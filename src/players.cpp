#include"../header/players.h"

Players::Players(Players* opponent, Board * board):opponent(opponent), board(board)
{
	
}


HumanPlayers::HumanPlayers(Players* opponent, Board * board):Players(opponent, board)
{
	

}

int HumanPlayers::find_column()
{
	char c;
	cin >> c;
	return c-48;
}

char HumanPlayers::getPiece()
{
	return Players::get_piece();
}

char Players::get_piece()
{
	return this->piece;
}



