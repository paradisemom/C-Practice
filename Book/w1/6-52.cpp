#include <iostream>
#include <vector>
using namespace std;

// 四個函式的定義
int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

int divide(int a, int b) {
    if (b == 0) {
        cerr << "Error: Division by zero" << endl;
        return 0;
    }
    return a / b;
}

int main() {
    // 定義 vector，存放函式指標
    vector<int (*)(int, int)> funcVec = {add, subtract, multiply, divide};

    // 測試用的數字
    int x = 10, y = 2;

    // 調用每個函式，並輸出結果
    for (auto func : funcVec) {
        cout << "結果: " << func(x, y) << endl;
    }

    return 0;
}
