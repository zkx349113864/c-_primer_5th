#include <iostream>
#include <vector>
#include <string>
#include <list>
#include <forward_list>
using std::cin;
using std::cout; using std::endl;
using std::vector;
using std::string;
using std::list;
using std::forward_list;

int main()
{
    forward_list<int> flst = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    auto prev = flst.before_begin();
    auto curr = flst.begin();
    while (curr != flst.end()) {
        if (*curr % 2) {
            curr = flst.erase_after(prev);
        } else {
            prev = curr;
            ++curr;
        }
    }
    for (auto &l : flst) {
        cout << l << " ";
    }
    cout << endl;
    system("pause");
    return 0;
}