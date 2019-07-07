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
    auto iter = vi.begin();
    while (iter != vi.end()) {
        // 这样操作会一直指向刚插入的奇数位置，进入死循环
        if (*iter % 2) {
            iter = vi.insert(iter, *iter);
        }
        ++iter;
    }
    for (auto &ls : vi) {
        cout << ls << endl;
    }
    system("pause");
    return 0;
}