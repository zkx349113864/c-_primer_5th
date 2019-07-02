#include <iostream>
#include <string>
#include "Sales_data.h"
using std::cin;
using std::cout; using std::endl;
using std::string;
int main()
{
    string s1("c++primer");
    Sales_data sd1(s1);
    Sales_data sd2(s1, 10, 22);
    Sales_data sd3(cin);
    print(cout, sd3);
    system("pause");
    return 0;
}