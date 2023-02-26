#include "../header/game.h"

Game::Game(int row, int column, Players *p1, Players* p2): player1(p1), player2(p2)
{
	this->board = new Board(row, column);
}

void Game::run()
{
	current_player = false;
	while (1) {

	}
}

bool Game::gameover()
{
	return false;
}
