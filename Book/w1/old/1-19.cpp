#include <iostream>
using namespace std;

int main()
{
    int first,second;
    while (true)
    {
        cout<<"entry first:"<<endl;
        cin>>first;
        cout<<"entry second:"<<endl;
        cin>>second;
        if(first>second){
            cout<<"first can't bigger than second";
            continue;
        }
        break;
    }
    
    for(int i=first+1;i<second;i++){
        cout<<i<<" ";
    }
    return 0;
}
