#include <iostream>
#include <string>
#include <vector>
#include "Screen.h"
#include "WindowMgr.h"
using namespace std;


void WindowMgr::Clear(ScreenIndex i){
    Screen &s=screens[i];
    s.contents=string(s.height*s.width,' ');
}
// 清除任意 Screen
void WindowMgr::Clear(Screen &screen) {
    screen.contents = string(screen.height * screen.width, ' '); // 清空內容
}
WindowMgr::ScreenIndex WindowMgr::AddScreen(const Screen &s){
    screens.push_back(s);
    return screens.size()-1;
}
