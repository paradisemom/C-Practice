#include <iostream>
#include "Sales_data.h"
#include "Person.h"
using namespace std;

int main()
{
    Sales_data data1,data2;
    Person person1,person2;
    cout<<"two person name:";
    
    readPerson(cin,person1);
    readPerson(cin,person2);
    cout<<"two person address:";
    printPerson(cout,person1);
    printPerson(cout,person2);
    cout<<"sale data";
    SaleRead(cin,data1);
    SaleRead(cin,data2);
    if(data1.isbn()==data2.isbn()){
        SalePrint(cout,SaleAdd(data1,data2));
    }
    else
    {
        cerr<<"ERROR!!\n"<<"data must refer to same ISBN"<<endl;
        return -1;
    }
    
    
}