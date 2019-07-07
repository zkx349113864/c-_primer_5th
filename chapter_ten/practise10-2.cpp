#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <list>
using std::cin;
using std::cout; using std::endl;
using std::vector;
using std::string;
using std::list;

int main()
{
    list<string> slist;
    string str;
    while (cin >> str) {
        slist.push_back(str);
    }
    auto times = count(slist.begin(), slist.end(), "hello");
    cout << times << endl;
    system("pause");
    return 0;
}