#ifndef PERSON_H
#define PERSON_H
#include <iostream>
using namespace std;

struct Person
{
    Person() = default;
    // 初始化 name 的建構器
    Person(const string& n) : name(n) {}

    // 初始化 name 和 address 的建構器
    Person(const string& n, const string& addr) : name(n), address(addr) {}
    string name="";
    string address="";

};
ostream& printPerson(ostream& os, const Person& rhs);
istream& readPerson(istream& is, Person& rhs);

#endif