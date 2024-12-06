#include "Screen.h"
#include "WindowMgr.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
    // �Ыؤ@�� Screen ����
    Screen myScreen(5, 5, 'X');
    myScreen.Display(cout); // ��ܪ�l�ù����e
    cout << endl;

    // // �ק�ù����e
    // myScreen.move(4, 0).Set('#').Display(cout);
    // cout << "\n";
    // myScreen.Display(cout);
    // cout << endl;

    // �Ы� WindowMgr �ñN Screen �K�[��䤤
    WindowMgr wm;
    wm.screens.push_back(myScreen); // �K�[ Screen �� WindowMgr

    // �M���ù����e
    wm.Clear(0); // �M������ 0 ���ù�
    wm.screens[0].Display(cout);
    cout << endl;
    wm.Clear(myScreen); // �ϥηs��k�M�� myScreen
    myScreen.Display(cout);
    cout << endl;



    return 0;
}
