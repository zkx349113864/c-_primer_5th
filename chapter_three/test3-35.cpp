#include <iostream>
#include <string>
#include <vector>
using std::cin;
using std::cout; using std::endl;
using std::string;
using std::vector;
using std::begin; using std::end;
int main()
{
    int iarr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    auto *beg = begin(iarr);
    auto *endp = end(iarr);
    for (beg; beg != endp; ++beg) {
        *beg = 0;
        // cout << *beg << " ";
    }
    cout << "array element is " << endl;
    for (auto i : iarr) {
        cout << i << " ";
    }
    system("pause");
    return 0;
}