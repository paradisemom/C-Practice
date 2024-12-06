#include <iostream>
#include <initializer_list>
using namespace std;

// 函式定義：接收 initializer_list<int>，返回總和
int sum(initializer_list<int> nums) {
    int total = 0;
    for (int num : nums) {
        total += num; // 累加每個元素
    }
    return total;
}

int main() {
    // 測試 sum 函式
    cout << "總和: " << sum({1, 2, 3, 4, 5}) << endl; // 初始化列表傳遞
    cout << "總和: " << sum({10, 20, 30}) << endl;
    return 0;
}
