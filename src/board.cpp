#include "../header/board.h"

Board::Board(int row, int column)
{
	this->m = row;
	this->n = column;
	this->board.resize(row, vector<char>(column, '*'));
}

void Board::change_board(int r, int c, int player)
{
	
	this->board[r][c] = player+48;	
}

pair<int, int> Board::bottom_coordinate(int column)
{
	for (int i = this->m - 1; i >= 0; i--) {
		if (this->board[i][column]=='*') {
			return { i, column };
		}
	}
	return { -1,-1};
}
