#include <iostream>
#include <string>
using namespace std;

int main(int argc, char* argv[]) {
    // 檢查是否有正確的兩個引數
    if (argc != 3) {
        cout << "請提供兩個引數。" << endl;
        return 1; // 結束程式，返回錯誤代碼
    }

    // 將引數轉換為字串並串接
    string arg1 = argv[1];
    string arg2 = argv[2];
    string result = arg1 + arg2;

    // 輸出結果
    cout << "串接結果: " << result << endl;

    return 0;
}
