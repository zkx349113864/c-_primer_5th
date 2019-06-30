#include <iostream>
#include <string>
#include <vector>
using std::cin;
using std::cout; using std::endl;
using std::string;
using std::vector;

string (*func(string str))[10];

int main()
{
    using arrT = string[10];
    arrT *func2(int i);

    auto func3(string i) -> string(*)[10];

    string arrs[10];

    decltype(arrs) *func4(string s);
}