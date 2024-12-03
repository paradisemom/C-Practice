#include <iostream>
#include <string>
using namespace std;

// 提前宣告函數
string ShortString(string t1, string t2);

int main() {
    string gameOver;
    do {
        string t1, t2;
        cout << "輸入兩個string:" << endl;
        cin >> t1 >> t2;

        // 呼叫 ShortString 函數並輸出結果
        string result = ShortString(t1, t2);
        cout << result << endl;
        
        // 確認是否繼續
        cout << "要繼續嗎，請輸入 yes or no:" << endl;
        cin >> gameOver;
    } while (gameOver == "yes"); // 檢查是否輸入 "yes" 繼續

    return 0;
}

// 定義 ShortString 函數
string ShortString(string t1, string t2) {
    if (t1.size() < t2.size()) {
        return t1 + " 比較短";
    } else if (t2.size() < t1.size()) {
        return t2 + " 比較短";
    } else {
        return "兩個字串一樣長";
    }
}
