#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    
    int currval=0,val=0;
    if(cin>>currval){
        int count=1;
        while (cin>>val)
        {
            if(val==currval){
                count++;
            }else{
                cout<<currval<<" show "<<count<<" times ";
                count=1;
                currval=val;
            }
            
        }
        cout<<currval<<" show "<<count<<" times";
        
    }
    return 0;
}
