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
        if (*iter % 2) {
            // 错误：这样指针一次就跳越了3个指针位
            // 循环结束后引用指向了尾后迭代器的下一个位置，未知的位置，指针无效
            // iter = vi.insert(iter, *iter++);
            // 改正
            iter = vi.insert(iter, *iter);
            iter += 2;
            // advance(iter, 2);
        } else {
            iter = vi.erase(iter);
        }
    }
    for (auto &ls : vi) {
        cout << ls << endl;
    }
    system("pause");
    return 0;
}