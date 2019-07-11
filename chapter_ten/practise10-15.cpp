#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int sum(const int &a, const int &b)
{
    auto f = [a](int b) {return a + b;};
    return f(b);
}

int main()
{
    int val1 = 20, val2 = 30;
    auto ret = sum(val1, val2);
    cout << ret << endl;
    system("pause");
    return 0;
}