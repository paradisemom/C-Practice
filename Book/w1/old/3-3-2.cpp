#include <iostream>
#include <vector>
using namespace std;


int main()
{
    vector<int> numbers;
    int a,b,c;
    cout<<"input three number:";
    cin>>a>>b>>c;
    numbers.push_back(a);
    numbers.push_back(b);
    numbers.push_back(c);
    for(auto &v:numbers){
        v *=v;
    }
    for(size_t i=0;i<numbers.size();i++){
        cout<<numbers[i];
    }
    cout<<endl;
    vector<string> strings;
    string x,y,z;
    cout<<"input three strings:";
    cin>>x>>y>>z;
    strings.push_back(x);
    strings.push_back(y);
    strings.push_back(z);
    for(size_t i=0;i<strings.size();i++){
        cout<<strings[i]<<" ";
    }
    return 0;
}