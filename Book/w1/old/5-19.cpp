#include <iostream>
#include <string>
using namespace std;

// ���e�ŧi���
string ShortString(string t1, string t2);

int main() {
    string gameOver;
    do {
        string t1, t2;
        cout << "��J���string:" << endl;
        cin >> t1 >> t2;

        // �I�s ShortString ��ƨÿ�X���G
        string result = ShortString(t1, t2);
        cout << result << endl;
        
        // �T�{�O�_�~��
        cout << "�n�~��ܡA�п�J yes or no:" << endl;
        cin >> gameOver;
    } while (gameOver == "yes"); // �ˬd�O�_��J "yes" �~��

    return 0;
}

// �w�q ShortString ���
string ShortString(string t1, string t2) {
    if (t1.size() < t2.size()) {
        return t1 + " ����u";
    } else if (t2.size() < t1.size()) {
        return t2 + " ����u";
    } else {
        return "��Ӧr��@�˪�";
    }
}
