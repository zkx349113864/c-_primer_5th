#include <iostream>
#include <map>
#include <string>
#include <functional>
using std::string;
using std::map;
using std::cout;
using std::cin;
using std::endl;
using std::function;


int add(int i, int j)
{
    return i + j;
}

struct divide 
{
    int operator()(int denominator, int divisor) {
        return denominator / divisor;
    }
};

int main()
{

    auto mod = [](int i, int j) { return i % j; };
    // map<string, int(*)(int, int)>binops;
    function<int(int, int)> f1 = add;
    function<int(int, int)> f2 = divide();
    function<int(int, int)> f3 = [](int i, int j) { return i * j; };

    cout << f1(4, 2) << endl;
    cout << f2(4, 2) << endl;
    cout << f3(4, 2) << endl;

    map<string, function<int(int, int)>> binops = {
        {"+", add},
        {"-", std::minus<int>()},
        {"/", divide()},
        {"*", [](int i, int j) { return i * j; }},
        {"%", mod}
    };

    cout << "\n" << endl;

    cout << binops["+"](10, 5) << endl;
    cout << binops["-"](10, 5) << endl;
    cout << binops["/"](10, 5) << endl;
    cout << binops["*"](10, 5) << endl;
    cout << binops["%"](10, 5) << endl;

    system("pause");
    return 0;

}