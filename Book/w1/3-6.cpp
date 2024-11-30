#include <iostream>
using namespace std;


int main()
{
    string xStirng="pppppppp";
    
    for(size_t i=0;i<xStirng.size();i++){
        xStirng[i]='X';
    }
    cout<<xStirng;
    return 0;
}