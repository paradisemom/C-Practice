#include "Sales_data.h"

// �[�k���
Sales_data add(const Sales_data& lhs, const Sales_data& rhs) {
    Sales_data sum = lhs;
    sum.Combine(rhs);
    return sum;
}

// ��X���
ostream& print(ostream& os, const Sales_data& rhs) {
    os << rhs.bookNo << " " << rhs.unitSold << " " << rhs.revenue << " " << rhs.avgPrice();
    return os; // ��^ ostream
}

// ��J���
istream& read(istream& is, Sales_data& rhs) {
    double price = 0.0;
    is >> rhs.bookNo >> rhs.unitSold >> price;
    rhs.revenue = rhs.unitSold * price;
    return is; // ��^ istream
}
