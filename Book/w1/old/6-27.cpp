#include <iostream>
#include <initializer_list>
using namespace std;

// �禡�w�q�G���� initializer_list<int>�A��^�`�M
int sum(initializer_list<int> nums) {
    int total = 0;
    for (int num : nums) {
        total += num; // �֥[�C�Ӥ���
    }
    return total;
}

int main() {
    // ���� sum �禡
    cout << "�`�M: " << sum({1, 2, 3, 4, 5}) << endl; // ��l�ƦC��ǻ�
    cout << "�`�M: " << sum({10, 20, 30}) << endl;
    return 0;
}
