#pragma once
#include "./players.h"
#include "./board.h"
#ifndef GAME_H
#define GAME_H
class Game {
private:
	Board* board;
	Players* player1;
	Players* player2;
	bool current_player;
public:
	Game(int, int, Players*, Players*);
	void run();
	bool gameover(char);
};
#endif // !GAME_H
