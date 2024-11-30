#include <iostream>
#include <vector>
using namespace std;


int main()
{
    
    string text="dasddadasd asdd";
    for(auto it=text.begin();it !=text.end() && *it!=' ';it++){
        *it=toupper(*it);
    }
    cout<<text;
    return 0;
}