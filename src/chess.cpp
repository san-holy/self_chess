#pragma once
#include<iostream>
#include "chess.h"
using namespace std;
enum Character{
    King,
    Queen,
    Bishop,
    Knight,
    Rook,
    Pawn
};

bool move_check(int x,int y,Character name){
    switch(name){
        case King:
            if(abs(x-Position_x)<=1 && abs(y-Position_y)<=1 && abs(x-Position_x)+abs(y-Position_y)!=0){
                return true;
            }
            break;
        case Queen:
    }
}
ChessBoard board;
void chess::move(int x,int y){
    if(x<1 || x>8 || y<1 || y>8){
        cout<<"Invalid move"<<endl;
    }else{
        if(move_check(x,y,name)){
            board[Position_x][Position_y]='O';
            Position_x=x;
            Position_y=y;
            board[Position_x][Position_y]=name;
        }
    }
}
king::king(){
    this->is_king=true;
    this->name='K';
    this->Position_x=5;
    this->Position_y=1;
    board[this->Position_x][this->Position_y]=this->name;
}

