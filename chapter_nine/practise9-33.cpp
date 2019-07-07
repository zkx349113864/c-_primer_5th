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
using std::advance;

int main()
{
    vector<int> vi = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    auto begin = vi.begin();
    while (begin != vi.end()) {
        ++begin;
        begin = vi.insert(begin, 42);
        // 不重新定义，begin失效
        // vi.insert(begin, 42);
        ++begin;
    }
    for (auto &ls : vi) {
        cout << ls << endl;
    }
    system("pause");
    return 0;
}