// factMain.cc
#include <iostream>
#include "Chapter6.h"
using namespace std;

int main() {
    int num;
    cout << "�п�J�@�ӥ����: ";
    cin >> num;

    if (num < 0) {
        cout << "�����w�q�b�D�t��ƤW�A�п�J���T���ȡC" << endl;
    } else {
        cout << num << "! = " << fact(num) << endl; // �I�s fact ���
    }

    return 0;
}
