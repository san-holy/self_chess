#pragma once
#ifndef CHESS_H
#define CHESS_H
#include <iostream>
#include <vector>
using namespace std;
enum ChessType{
    KING,
    QUEEN,
    ROOK,// 车
    BISHOP,
    KNIGHT,// 马
    PAWN,// 兵
    NONE
};
using ChessBoard=char[8][8];
class chess_basic{
    public:
        void move(ChessType type,int x,int y);
        void get_position(int &x,int &y);
        void set_position(int x,int y);
        
    private:
        int position_x,position_y;
};
class chess{
    public:
        chess_basic basic;
    private:
        ChessType type;
};
#endif