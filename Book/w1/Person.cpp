#include "Person.h"

ostream& printPerson(ostream& os, const Person& person) {
    os << person.address<<" "<<person.name<<endl;
    return os; // 返回 ostream
}

// 輸入函數
istream& readPerson(istream& is, Person& person) {
    double price = 0.0;
    is >> person.address>>person.name;
    return is; // 返回 istream
}