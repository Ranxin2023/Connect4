#pragma once
#ifndef PLAYERS_H
#define PLAYERS_H
#include "board.h"
#include "players.h"

class Players {
private:
	Players* opponent;
	Board* board;
public:
	Players();
	Players(Players *, Board*);
};
class HumanPlayers:public Players {
private:
public:
	HumanPlayers(Players *, Board *);
	int find_column();

};
#endif // !PLAYERS_H
