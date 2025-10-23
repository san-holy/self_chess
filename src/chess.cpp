#pragma once
#include<iostream>
#include "chess.h"
using namespace std;
ChessBoard board;
king::king(){
    this->is_king=true;
    this->name='K';
    this->Position_x=5;
    this->Position_y=1;
    board[this->Position_x][this->Position_y]=this->name;
}
void king::move(int x,int y){
    if(x<1 || x>8 || y<1 || y>8){
        cout<<"出界"<<endl;
    }else{
        if((x-this->Position_x==1 && y==this->Position_y)
         ||(x==this->Position_x && y-this->Position_y==1)
         ||(abs(x-this->Position_x)==1 && abs(y-this->Position_y)==1)){
            board[this->Position_x][this->Position_y]='O';
            this->Position_x=x;
            this->Position_y=y;
            board[this->Position_x][this->Position_y]=this->name;
         }
    }
}
