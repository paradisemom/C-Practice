#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
    string input, word, previousWord = "";
    int currentCount = 1;
    string mostRepeatedWord = "";

    // 從標準輸入讀取整行字串
    cout << "請輸入一段文字: ";
    getline(cin, input);

    // 使用 stringstream 將字串分割成單詞
    stringstream ss(input);
    while (true)
    {
        cout << "請輸入一段文字: ";
        getline(cin, input);
        while (ss >> word) {
        if (word == previousWord) {
            currentCount++; // 如果當前單詞與前一個單詞相同，計數加一
        } else {
            cout<<"沒有重複的字";
            currentCount = 1; // 否則重置計數
        }

        // 更新重複最多的單詞及其次數
        if (currentCount==2) {
            cout<<word<<"重複了"<<endl;
            break;
        }

        previousWord = word; // 更新前一個單詞為當前單詞
    }
    }
    

    return 0;
}
