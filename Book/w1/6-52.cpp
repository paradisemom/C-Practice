#include <iostream>
#include <vector>
using namespace std;

// �|�Ө禡���w�q
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
    // �w�q vector�A�s��禡����
    vector<int (*)(int, int)> funcVec = {add, subtract, multiply, divide};

    // ���եΪ��Ʀr
    int x = 10, y = 2;

    // �եΨC�Ө禡�A�ÿ�X���G
    for (auto func : funcVec) {
        cout << "���G: " << func(x, y) << endl;
    }

    return 0;
}
