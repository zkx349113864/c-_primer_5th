#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>
#include <list>
#include <iterator>
using std::cin;
using std::cout; using std::endl;
using std::string;
using std::vector;
using std::list;
using std::inserter;
using std::placeholders::_2;
using std::placeholders::_1;

int main()
{
    vector<int> ivec{1, 2, 3, 4, 5, 6, 7, 8, 9};
    list<int> ivec2, ivec3;
    vector<int> ivec4;
    copy(ivec.begin(), ivec.end(), inserter(ivec2, ivec2.begin()));
    copy(ivec.begin(), ivec.end(), front_inserter(ivec3));
    copy(ivec.begin(), ivec.end(), back_inserter(ivec4));
    cout << "ivec2 list is: ";
    for (auto &i2 : ivec2)
    {
        cout << i2 << " ";
    }
    cout << endl;

    cout << "ivec3 list is: ";
    for (auto &i3 : ivec3)
    {
        cout << i3 << " ";
    }
    cout << endl;

    cout << "ivec4 list is: ";
    for (auto &i4 : ivec4)
    {
        cout << i4 << " ";
    }
    cout << endl;

    system("pause");
    return 0;
}