#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
    string input, word, previousWord = "";
    int currentCount = 1;
    string mostRepeatedWord = "";

    // �q�зǿ�JŪ�����r��
    cout << "�п�J�@�q��r: ";
    getline(cin, input);

    // �ϥ� stringstream �N�r����Φ����
    stringstream ss(input);
    while (true)
    {
        cout << "�п�J�@�q��r: ";
        getline(cin, input);
        while (ss >> word) {
        if (word == previousWord) {
            currentCount++; // �p�G��e����P�e�@�ӳ���ۦP�A�p�ƥ[�@
        } else {
            cout<<"�S�����ƪ��r";
            currentCount = 1; // �_�h���m�p��
        }

        // ��s���Ƴ̦h������Ψ䦸��
        if (currentCount==2) {
            cout<<word<<"���ƤF"<<endl;
            break;
        }

        previousWord = word; // ��s�e�@�ӳ������e���
    }
    }
    

    return 0;
}
