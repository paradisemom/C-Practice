#ifndef PERSON_H
#define PERSON_H
#include <iostream>
using namespace std;

struct Person
{
    Person& Combine(const Person &rhs){
        return *this;
    }
    string name;
    string address;

};
ostream& printPerson(ostream& os, const Person& rhs);
istream& readPerson(istream& is, Person& rhs);

#endif