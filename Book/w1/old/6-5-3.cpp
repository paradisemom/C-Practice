#include <iostream>
#include <string>
using namespace std;

// 函數用於檢查字串長度
void checkWordLength(const string& word, size_t threshold) {
    if (word.size() < threshold) {
        cerr << "Error: " << __FILE__  // 檔案名稱
             << " : in function " << __func__  // 函數名稱
             << " at line " << __LINE__  // 行號
             << endl
             << "Compiled on " << __DATE__  // 編譯日期
             << " at " << __TIME__  // 編譯時間
             << endl
             << "Word read was \"" << word << "\""  // 顯示字串內容
             << ": Length too short" << endl;
    } else {
        cout << "Word \"" << word << "\" is valid." << endl;
    }
}

int main() {
    string word;
    size_t threshold = 5;

    cout << "請輸入一個字：";
    cin >> word;

    // 檢查字串長度
    checkWordLength(word, threshold);

    return 0;
}
