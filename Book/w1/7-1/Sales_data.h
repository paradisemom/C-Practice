#ifndef SALES_DATA_H
#define SALES_DATA_H

#include <iostream>
#include <string>
using namespace std;

class Sales_data {
    friend Sales_data SaleAdd(const Sales_data& lsh, const Sales_data& rsh);
    friend ostream& SalePrint(ostream& os, const Sales_data& rhs);
    friend istream& SaleRead(istream& is, Sales_data& rhs);
    public:
    //new construct
    Sales_data()=default;
    Sales_data(const string &s): bookNo(s){}
    Sales_data(const string &s,unsigned n,double p): bookNo(s),unitSold(n),revenue(p*n){}
    // 接收 istream 的建構器
    Sales_data(istream& is) {
        double price = 0.0;
        is >> bookNo >> unitSold >> price;
        revenue = unitSold * price;
    }
    string isbn() const { return bookNo; }
    Sales_data& Combine(const Sales_data& rhs) {
        unitSold += rhs.unitSold;
        revenue += rhs.revenue;
        return *this;
    }
    inline double avgPrice() const {
        return unitSold ? revenue / unitSold : 0; // 避免除以 0
    }
    private:
    string bookNo;
    unsigned unitSold = 0;
    double revenue = 0.0;
};

// 外部函數宣告
Sales_data SaleAdd(const Sales_data& lsh, const Sales_data& rsh);
ostream& SalePrint(ostream& os, const Sales_data& rhs);
istream& SaleRead(istream& is, Sales_data& rhs);

#endif
