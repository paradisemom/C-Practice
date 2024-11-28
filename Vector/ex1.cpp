#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numbers;
    

    // 添加元素
    numbers.push_back(10);
    numbers.push_back(20);
    numbers.push_back(30);
    // 遍歷並輸出
    cout << "Vector elements: ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    // 刪除最後一個元素
    numbers.pop_back();

    // 輸出大小
    cout << "Size after pop: " << numbers.size() << endl;

    return 0;
}
