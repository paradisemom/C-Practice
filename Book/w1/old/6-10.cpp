#include <iostream>
#include <string>
#include <sstream>
using namespace std;
void SwapNums(int &a,int &b);
int main() {
    int a=2,b=3;
    SwapNums(a,b);
    cout<<a<<b;
    return 0;
}
void SwapNums(int &a,int &b){
    int temp;
    temp=a;
    a=b;
    b=temp;
}