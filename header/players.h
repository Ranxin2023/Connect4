#pragma once
#ifndef PLAYERS_H
#define PLAYERS_H
#include "board.h"
#include "players.h"

class Players {
private:
	char piece;
	Players* opponent;
	Board* board;
public:
	Players();
	Players(Players *, Board*);
	char get_piece();
};
class HumanPlayers:public Players {
private:
public:
	HumanPlayers(Players *, Board *);
	int find_column();
	char getPiece();
};
#endif // !PLAYERS_H
