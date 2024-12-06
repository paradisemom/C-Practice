// factMain.cc
#include <iostream>
#include "Chapter6.h"
using namespace std;

int main() {
    int num;
    cout << "請輸入一個正整數: ";
    cin >> num;

    if (num < 0) {
        cout << "階乘定義在非負整數上，請輸入正確的值。" << endl;
    } else {
        cout << num << "! = " << fact(num) << endl; // 呼叫 fact 函數
    }

    return 0;
}
