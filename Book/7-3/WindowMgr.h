#ifndef WINDOWMGR_H
#define WINDOWMGR_H

#include <iostream>
#include <vector>

using namespace std;
class Screen;


class WindowMgr{
public:
    using ScreenIndex=vector<Screen>::size_type;
    void Clear(ScreenIndex);
    void Clear(Screen &);    // 新增操作任意 Screen 的方法
    vector<Screen> screens;

private:
    
};

#endif