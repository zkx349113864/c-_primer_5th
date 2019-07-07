#include <iostream>
#include <vector>
#include <algorithm>
using std::vector;
using std::cin;
using std::cout; using std::endl;

int main()
{
    vector<int> vec{1, 2, 3, 45, 42, 55};
    int val = 42;
    auto result = find(vec.cbegin(), vec.cend(), val);
    cout << "The value" << val << (result == vec.cend() ? " is not present" : " is present") << endl;
    system("pause");
    return 0;
}