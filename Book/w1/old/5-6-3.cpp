#include <iostream>
#include <vector>
using namespace std;


int main()
{
    int a,b;
    
    while (true)
    {
        cout<<"input two numbers:";
        cin>>a>>b;
        try
        {
            if(b==0){
                throw runtime_error("you can't divide by 0");
            }
            cout<<a/b;
            break;
        }
        catch(runtime_error e)
        {
            cout<<e.what()<<"\tTry angin?entry y or n"<<endl;
            char c;
            cin>>c;
            if(c=='n'||!cin){
                break;
            }else if(c=='y'){
                continue;
            }
        }
    
    }
    
    return 0;
}