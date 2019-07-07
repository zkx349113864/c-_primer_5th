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
    vector<int> iv{1, 2, 3, 4, 5, 6};
    vector<int>::iterator iter = iv.begin(), mid = iv.begin() + iv.size() / 2;

    while(iter != mid) {
        if (*iter == 2) {
            iv.insert(iter, 3, 2 * 2);
        }
        ++iter;
    }
    for (auto &i : iv) {
        cout << i << endl;
    }
    system("pause");
    return 0;
}