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
    list<int> ilist{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    deque<int> evendeq, odddeq;
    for (auto beg = ilist.cbegin(); beg != ilist.end(); ++beg) {
        if (*beg % 2 == 0) {
            evendeq.push_back(*beg);
        } else {
            odddeq.push_back(*beg);
        }
    }
    cout << "even deque list is ";
    for (auto &ep : evendeq) {
        cout << ep << " ";
    }
    cout << "\n" << "odd deque list is ";
    for (auto &op: odddeq) {
        cout << op << " ";
    }
    cout << endl;
    system("pause");
    return 0;
}