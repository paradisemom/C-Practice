#include "Sales_data.h"


// �[�k���
Sales_data SaleAdd(const Sales_data& lhs, const Sales_data& rhs) {
    Sales_data sum = lhs;
    sum.Combine(rhs);
    return sum;
}

// ��X���
ostream& SalePrint(ostream& os, const Sales_data& rhs) {
    os << rhs.bookNo << " " << rhs.unitSold << " " << rhs.revenue << " " << rhs.avgPrice()<<endl;
    return os; // ��^ ostream
}

// ��J���
istream& SaleRead(istream& is, Sales_data& rhs) {
    double price = 0.0;
    is >> rhs.bookNo >> rhs.unitSold >> price;
    rhs.revenue = rhs.unitSold * price;
    return is; // ��^ istream
}
