#include <iostream>
#include <string>
#include <vector>
using std::cin;
using std::cout; using std::endl;
using std::string;
using std::vector;
int main()
{
    vector<int> v;
    int val;
    while (cin >> val) {
        v.push_back(val);
    }
    auto beg = v.begin();
    while (beg != v.end() && *beg >= 0) {
        ++beg;
    }
    if (beg == v.end()) {
        cout << "every number is not negative" << endl;
    } else {
        cout << "the first negative number is " << *beg << endl;
    }
    system("pause");
    return 0;
}