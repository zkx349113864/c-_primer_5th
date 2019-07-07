#include <iostream>
#include <deque>
#include <vector>
#include <string>
#include <list>
using std::cin;
using std::cout; using std::endl;
using std::vector;
using std::string;
using std::deque;
using std::list;

int main()
{
    string str;
    deque<string> sdeq;
    while (cin >> str) {
        sdeq.push_back(str);
    }
    for (auto beg = sdeq.cbegin(); beg != sdeq.cend(); ++beg) {
        cout << *beg << " ";
    }
    cout << endl;
    system("pause");
    return 0;
}