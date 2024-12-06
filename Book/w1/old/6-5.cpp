#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int Absolute(int num);
int main() {
    int num;
    cout<<"input a number:";
    cin>>num;
    cout<<"num's Absolute is: "<<Absolute(num);
    return 0;
}
int Absolute(int num){
    int res;
    res=abs(num);
    return res;
}