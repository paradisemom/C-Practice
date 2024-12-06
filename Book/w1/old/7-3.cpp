#include <iostream>
#include "Sales_data.h"
using namespace std;

int main()
{
    Sales_data data1,data2;
    double price=0;
    cin>>data1.bookNo>>data1.unitSold>>price;
    data1.revenue=data1.unitSold*price;
    cin>>data2.bookNo>>data2.unitSold>>price;
    data2.revenue=data2.unitSold*price;
    if(data1.isbn()==data2.isbn()){
        data1.Combine(data2);
        unsigned totalCount=data1.unitSold;
        double totalRevenue=data1.revenue;
        cout<<data1.bookNo<<" "<<totalCount<<" "<<totalRevenue<<" ";
        if(totalCount!=0){
            cout<<(totalRevenue/totalCount)<<endl;
        }
        else{
            cout<<"no sales"<<endl;
        }
        return 0;
    }
    else
    {
        cerr<<"ERROR!!\n"<<"data must refer to same ISBN"<<endl;
        return -1;
    }
    
    
}

