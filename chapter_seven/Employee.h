#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>
#include <string>
using std::cin;
using std::cout; using std::endl;
using std::string;

class Employee {
    public:
    Employee() = default;
    Employee(string n) : name(n) {}
    Employee(string n, char a, string addr, int s, char se) : name(n), age(a), address(addr), salary(s), sex(se) {}
    Employee(string addr): Employee("earth", 20, addr, 0, 'b') {};

    private:
    string name;
    char age;
    string address;
    int salary;
    char sex;
};

#endif