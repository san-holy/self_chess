#pragma once
#include<iostream>
#include "chess.h"
using namespace std;

void chess_basic::get_position(int &x,int &y){
    x=this->position_x;
    y=this->position_y;    
}
void chess_basic::set_position(int x,int y){
    this->position_x=x;
    this->position_y=y;
}
void test(){
    chess king;
    int x,y;
    king.basic.get_position(x,y);
    cout<<"x="<<x<<" y="<<y<<endl;
    king.basic.set_position(3,4);
    king.basic.get_position(x,y);
    cout<<"x="<<x<<" y="<<y<<endl;
}

