#include <iostream>
#include <vector>
#include <string>
#include <list>
using std::cin;
using std::cout; using std::endl;
using std::vector;
using std::string;
using std::list;
using std::begin;
using std::end;

int main()
{
    int ia[] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89};
    vector<int> ivec(begin(ia), end(ia));
    list<int> ilist(begin(ia), end(ia));
    /* for (auto beg = begin(ia); beg != end(ia); ++beg) {
        ivec.push_back(*beg);
        ilist.push_back(*beg);
    } */
    auto vecbeg = ivec.begin();
    auto listbeg = ilist.begin();
    while (vecbeg != ivec.end()) {
        if (!(*vecbeg % 2)) {
            vecbeg = ivec.erase(vecbeg);
        } else {
            ++vecbeg;
        }
    }
    while (listbeg != ilist.end()) {
        if (*listbeg % 2) {
            listbeg = ilist.erase(listbeg);
        } else {
            ++listbeg;
        }
    }
    cout << "vector list is: ";
    for (auto &l : ivec) {
        cout << l << " ";
    }
    cout << "\n" << "list lis is: ";
    for (auto &l : ilist) {
        cout << l << " ";
    }
    cout << endl;
    system("pause");
    return 0;
}