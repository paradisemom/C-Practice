#include <iostream>
#include <vector>
using namespace std;


int main()
{
    vector<string> strings;
    string x,y,z;
    cout<<"input three strings:";
    cin>>x>>y>>z;
    strings.push_back(x);
    strings.push_back(y);
    strings.push_back(z);
    int index=0;
    for(size_t i=0;i<strings.size();i++){
        for(size_t j=0;j<strings[i].size();j++){
            if(index<8){
                cout<<strings[i][j];
                index++;
            
            }else if(index==8){
                cout<<"\n";
                index=0;
            }
        }
        
        
    }
    return 0;
}