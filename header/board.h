#pragma once
#include<iostream>
#include<vector>
#include <utility> 
using namespace std;
#ifndef BOARD_H
#define BOARD_H
class Board {
private:
	int m, n;
	vector<vector<char>>board;
	int dir[8][2] = { {0, 1} , {1, 1}, {1, 0},{1, -1}, {0, -1}, {-1, -1},  {-1, 0},  {-1, 1} };
	const int NUM_OF_DIR = 8;
public:
	Board();
	Board(int, int);
	void change_board(int r, int c, int player);
	pair<int, int>bottom_coordinate(int column);
	bool win(char);
	bool connect4(int, int, char);
	bool over_board(int, int);
};
#endif