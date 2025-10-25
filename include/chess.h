#pragma once
#ifndef CHESS_H
#define CHESS_H
#include <iostream>
#include <vector>
using namespace std;
using ChessBoard=char[8][8];
class chess{
    public:
        chess();
        ~chess();
        char name;
        int Position_x,Position_y;
        int color;
        bool is_king;
        virtual void move(int x,int y);
        virtual void eat();
};
class king:public chess{
    public:
        king();
        ~king();
        void move(int x,int y);
        void eat();
        void trans_king_rook();
};
class rook:public chess{
    public:
        rook();
        ~rook();
        void move();
        void eat();
        void trans_rook_king();
};
class bishop:public chess{
    public:
        bishop();
        ~bishop();
        void move();
        void eat();

};
class queen:public chess{
    public:
        queen();
        ~queen();
        void move();
        void eat();

};
class pawn:public chess{
    public:
        pawn();
        ~pawn();
        void move();
        void eat();
        void trans_pawn();//升变
};
class knight:public chess{
    public:
        knight();
        ~knight();
        void move();
        void eat();
};
class chessboard{
    public:
        chessboard();
        ~chessboard();
};

#endif