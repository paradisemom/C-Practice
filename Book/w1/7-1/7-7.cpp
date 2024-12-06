#include <iostream>
#include "Sales_data.h"
#include "Person.h"
using namespace std;

int main()
{
    // Person p1;
    // Person p2("andy");
    // Person p3("adad","pp");
    // printPerson(cout,p1);
    // printPerson(cout,p2);
    // printPerson(cout,p3);
    // Sales_data data;
    // Sales_data dataO("111");
    // Sales_data data3("12345", 10, 20.0);    // 多參數建構
    // SalePrint(cout,data);
    // SalePrint(cout,dataO);
    // SalePrint(cout,data3);
    // cout << "Please enter sales data (ISBN quantity unit price): ";
    // Sales_data data4(cin);
    // SalePrint(cout,data4);             
    Sales_data data1,data2;
    Person person1,person2;
    cout<<"person name and address:"<<endl;
    readPerson(cin,person1);
    cout<<"person name and address:"<<endl;
    readPerson(cin,person2);
    cout<<person1.GetName()<<"'s address is "<<person1.GetAddress()<<endl;
    printPerson(cout,person1);
    cout<<person2.GetName()<<"'s address is "<<person2.GetAddress()<<endl;
    printPerson(cout,person2);
    cout<<"\nsale data";
    SaleRead(cin,data1);
    SaleRead(cin,data2);
    if(data1.isbn()==data2.isbn()){
        Sales_data sum;
        sum=SaleAdd(data1,data2);
        SalePrint(cout,sum);
        cout<<"avg: "<<sum.avgPrice();
    }
    else
    {
        cerr<<"ERROR!!\n"<<"data must refer to same ISBN"<<endl;
        return -1;
    }
    
    
}