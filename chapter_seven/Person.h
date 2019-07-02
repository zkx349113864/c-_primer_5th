#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>
using std::string;
using std::istream;
using std::ostream;
struct Person {
    // 友元声明
    friend istream &read(istream &is, Person &p);
    friend ostream &print(ostream &out, const Person &p);

    private:
    string name;
    string address;
    
    public:
    Person() = default;
    Person(string n, string a) : name(n), address(a) {};
    string getName () const {
        return name;
    }
    string getAddress () const {
        return address;
    }
};

istream &read(istream &is, Person &p)
{
    is >> p.name >> p.address;
    return is;
}

ostream &print(ostream &out, const Person &p)
{
    out << "Name:" << p.name << "\n" << "Address:" << p.address;
    return out;
}

#endif