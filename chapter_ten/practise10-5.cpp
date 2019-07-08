#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using std::cin;
using std::cout; using std::endl;
using std::vector;

int main()
{
    const char *s1 = "hello";
    const char *s2 = "world";
    vector<const char *> roster1, roster2;
    roster1.push_back(s1);
    roster1.push_back(s2);
    roster2.push_back(s1);
    roster2.push_back(s2);
    auto result = equal(roster1.cbegin(), roster1.cend(), roster2.cbegin());
    if (result) {
        cout << "equal" << endl;
    } else {
        cout << "not same" << endl;
    }
    system("pause");
    return 0;
}