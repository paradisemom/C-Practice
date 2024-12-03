#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int CountCall();
int main() {
    for(int i=0;i<10;i++){
        cout<<CountCall()<<endl;
    }
    return 0;
}
int CountCall(){
    static int count=0;
    return count++;
}