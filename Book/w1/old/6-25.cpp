#include <iostream>
#include <string>
using namespace std;

int main(int argc, char* argv[]) {
    // �ˬd�O�_�����T����Ӥ޼�
    if (argc != 3) {
        cout << "�д��Ѩ�Ӥ޼ơC" << endl;
        return 1; // �����{���A��^���~�N�X
    }

    // �N�޼��ഫ���r��æ걵
    string arg1 = argv[1];
    string arg2 = argv[2];
    string result = arg1 + arg2;

    // ��X���G
    cout << "�걵���G: " << result << endl;

    return 0;
}
