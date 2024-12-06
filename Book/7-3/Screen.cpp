#include "Screen.h"
#include <iostream>
#include <string>
using namespace std;

inline
char Screen::Get(pos r,pos c) const{
    pos row=r*width;
    return contents[row+c];
}
Screen &Screen::move(pos r,pos c){
    pos row=r*width;
    cursor=row+c;
    return *this;
}
Screen &Screen::Set(char c){
    contents[cursor]=c;
    return *this;
}
Screen &Screen::Set(pos r,pos col,char ch){
    contents[r*width+col]=ch;
    return *this;
}
