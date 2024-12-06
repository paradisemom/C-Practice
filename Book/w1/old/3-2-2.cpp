#include <iostream>
using namespace std;

int main()
{
    string line,line1,line2;
    // while (getline(cin,line))//1
    // {
    //     if(!line.empty())
    //         cout<<line<<endl;
    // }
    // while (cin>>line)
    // {
    //     if(!line.empty())
    //         cout<<line<<endl;
    // }
    // cin>>line1>>line2;//3
    // if(line1!=line2){
    //     if (line1>line2)
    //     {
    //         cout<<line1;
    //     }else if(line2>line1)
    //     {
    //         cout<<line2;
    //     }
    // }
    cin>>line1>>line2;//3
    if(line1.size()!=line2.size()){
        if (line1.size()>line2.size())
        {
            cout<<line1;
        }else if(line2.size()>line1.size())
        {
            cout<<line2;
        }
    }
    
    return 0;
}