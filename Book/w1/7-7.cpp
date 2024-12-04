#include <iostream>
#include "Sales_data.h"
using namespace std;

int main()
{
    Sales_data data1,data2;
    read(cin,data1);
    read(cin,data2);
    if(data1.isbn()==data2.isbn()){
        print(cout,add(data1,data2));
    }
    else
    {
        cerr<<"ERROR!!\n"<<"data must refer to same ISBN"<<endl;
        return -1;
    }
    
    
}