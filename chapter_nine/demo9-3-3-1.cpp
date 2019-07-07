#include <iostream>
#include <vector>
#include <string>
#include <list>
using std::cin;
using std::cout; using std::endl;
using std::vector;
using std::string;
using std::list;

int main()
{
    list<int> lst = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    auto it = lst.begin();
    while (it != lst.end()) {
        if (*it % 2) {
            it = lst.erase(it);
        } else {
            ++it;
        }
    }
    for (auto &l : lst) {
        cout << l << " ";
    }
    cout << endl;
    system("pause");
    return 0;
}