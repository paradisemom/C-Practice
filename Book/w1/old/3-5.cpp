#include <iostream>
using namespace std;


int main()
{
    string s1,s2,s3,mainString;
    cin>>s1>>s2>>s3;
    mainString=s1+s2+s3;
    cout<<mainString<<endl;
    mainString=s1+" " +s2+" "+s3;
    cout<<mainString<<endl;
    return 0;
}