#include "Screen.h"
#include "WindowMgr.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
    // 創建一個 Screen 物件
    Screen myScreen(5, 5, 'X');
    myScreen.Display(cout); // 顯示初始螢幕內容
    cout << endl;

    // // 修改螢幕內容
    // myScreen.move(4, 0).Set('#').Display(cout);
    // cout << "\n";
    // myScreen.Display(cout);
    // cout << endl;

    // 創建 WindowMgr 並將 Screen 添加到其中
    WindowMgr wm;
    wm.screens.push_back(myScreen); // 添加 Screen 到 WindowMgr

    // 清除螢幕內容
    wm.Clear(0); // 清除索引 0 的螢幕
    wm.screens[0].Display(cout);
    cout << endl;
    wm.Clear(myScreen); // 使用新方法清除 myScreen
    myScreen.Display(cout);
    cout << endl;



    return 0;
}
