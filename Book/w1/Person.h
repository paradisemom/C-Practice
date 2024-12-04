#include <iostream>
using namespace std;

struct Person
{
    Person& Combine(const Person &rhs){
        return *this;
    }
    string name;
    string adress;

};
