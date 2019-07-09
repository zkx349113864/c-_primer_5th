#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int sum(int a, int b) {
    auto ret = [a, b](const int &i,const int &j) -> int {
        return a + b;
    };
    int rel = ret(a, b);
    return rel;
}

int main()
{
    int val1 = 20, val2 = 30;
    cout << sum(val1, val2) << endl;
    system("pause");
    return 0;
}