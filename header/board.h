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
public:
	Board();
	Board(int, int);
	void change_board(int r, int c, int player);
	pair<int, int>bottom_coordinate(int column);
};
#endif