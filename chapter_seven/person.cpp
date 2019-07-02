#include <iostream>
#include "Person.h"
using std::cin;
using std::cout; using std::endl;

int main()
{
    Person p1("sherlock", "earth");
    print(cout, p1) << endl;
    system("pause");
    return 0;
}