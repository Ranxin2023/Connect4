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

bool Board::win(char c)
{
	for (int i = 0; i < this->m; i++) {
		for (int j = 0; j < this->n; j++) {
			if (this->board[i][j] == c) {
				if (connect4(i, j, c))return true;
			}
		}
	}
	return false;
}

bool Board::connect4(int r, int c, char piece)
{
	bool first_piece, second_piece, third_piece;
	int new_r, new_c;
	for (int d = 0; d < this->NUM_OF_DIR; d++) {
		first_piece = false;
		new_r = r + 1 * this->dir[d][0];
		new_c = c + 1 * this->dir[d][1];
		if (!over_board(new_r, new_c) && this->board[new_r][new_c] == piece)first_piece = true;
		second_piece = false;
		new_r = r + 2 * this->dir[d][0];
		new_c = c + 2 * this->dir[d][1];
		if (!over_board(new_r, new_c) && this->board[new_r][new_c] == piece)second_piece = true;
		third_piece = false;
		new_r = r + 3 * this->dir[d][0];
		new_c = c + 3 * this->dir[d][1];
		if (!over_board(new_r, new_c) && this->board[new_r][new_c] == piece)third_piece = true;
		if (first_piece && second_piece && third_piece)return true;
	}
	return false;
}

bool Board::over_board(int r, int c)
{
	if (r == -1 || r == this->m || c == -1 || c == this->n)return true;
	return false;
}
