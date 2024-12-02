#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
    string input, word, previousWord = "";
    int maxCount = 0, currentCount = 1;
    string mostRepeatedWord = "";

    // 從標準輸入讀取整行字串
    cout << "請輸入一段文字: ";
    getline(cin, input);

    // 使用 stringstream 將字串分割成單詞
    stringstream ss(input);

    while (ss >> word) {
        if (word == previousWord) {
            currentCount++; // 如果當前單詞與前一個單詞相同，計數加一
        } else {
            currentCount = 1; // 否則重置計數
        }

        // 更新重複最多的單詞及其次數
        if (currentCount > maxCount) {
            maxCount = currentCount;
            mostRepeatedWord = word;
        }

        previousWord = word; // 更新前一個單詞為當前單詞
    }

    // 根據結果輸出
    if (maxCount > 1) {
        cout << "字詞 \"" << mostRepeatedWord << "\" 重複了 " << maxCount << " 次。" << endl;
    } else {
        cout << "沒有任何字詞重複。" << endl;
    }

    return 0;
}
