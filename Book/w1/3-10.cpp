#include <iostream>
using namespace std;


int main()
{
    string xStirng="hi,kkkk,fuck you";
    
    for(size_t i=0;i<xStirng.size();i++){
        if(ispunct(xStirng[i])){
            xStirng[i]='\0';
        }
    }
    cout<<xStirng;
    return 0;
}