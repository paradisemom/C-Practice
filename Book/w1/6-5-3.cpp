#include <iostream>
#include <string>
using namespace std;

// ��ƥΩ��ˬd�r�����
void checkWordLength(const string& word, size_t threshold) {
    if (word.size() < threshold) {
        cerr << "Error: " << __FILE__  // �ɮצW��
             << " : in function " << __func__  // ��ƦW��
             << " at line " << __LINE__  // �渹
             << endl
             << "Compiled on " << __DATE__  // �sĶ���
             << " at " << __TIME__  // �sĶ�ɶ�
             << endl
             << "Word read was \"" << word << "\""  // ��ܦr�ꤺ�e
             << ": Length too short" << endl;
    } else {
        cout << "Word \"" << word << "\" is valid." << endl;
    }
}

int main() {
    string word;
    size_t threshold = 5;

    cout << "�п�J�@�Ӧr�G";
    cin >> word;

    // �ˬd�r�����
    checkWordLength(word, threshold);

    return 0;
}
