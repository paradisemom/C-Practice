#include "Sales_data.h"

// 加法函數
Sales_data add(const Sales_data& lhs, const Sales_data& rhs) {
    Sales_data sum = lhs;
    sum.Combine(rhs);
    return sum;
}

// 輸出函數
ostream& print(ostream& os, const Sales_data& rhs) {
    os << rhs.bookNo << " " << rhs.unitSold << " " << rhs.revenue << " " << rhs.avgPrice();
    return os; // 返回 ostream
}

// 輸入函數
istream& read(istream& is, Sales_data& rhs) {
    double price = 0.0;
    is >> rhs.bookNo >> rhs.unitSold >> price;
    rhs.revenue = rhs.unitSold * price;
    return is; // 返回 istream
}
