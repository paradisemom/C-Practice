#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
    string input, word, previousWord = "";
    int maxCount = 0, currentCount = 1;
    string mostRepeatedWord = "";

    // �q�зǿ�JŪ�����r��
    cout << "�п�J�@�q��r: ";
    getline(cin, input);

    // �ϥ� stringstream �N�r����Φ����
    stringstream ss(input);

    while (ss >> word) {
        if (word == previousWord) {
            currentCount++; // �p�G��e����P�e�@�ӳ���ۦP�A�p�ƥ[�@
        } else {
            currentCount = 1; // �_�h���m�p��
        }

        // ��s���Ƴ̦h������Ψ䦸��
        if (currentCount > maxCount) {
            maxCount = currentCount;
            mostRepeatedWord = word;
        }

        previousWord = word; // ��s�e�@�ӳ������e���
    }

    // �ھڵ��G��X
    if (maxCount > 1) {
        cout << "�r�� \"" << mostRepeatedWord << "\" ���ƤF " << maxCount << " ���C" << endl;
    } else {
        cout << "�S������r�����ơC" << endl;
    }

    return 0;
}
