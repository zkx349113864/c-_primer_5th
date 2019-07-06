#include <iostream>
#include <vector>
#include <list>
using std::list;
using std::vector;
using std::cin;
using std::cout; using std::endl;

int main()
{
    list<int> ilist{1, 2, 3, 4, 5, 6, 7};
    vector<double> vec(++ilist.begin(), ilist.end());
    vector<int> ivec(10, 7);
    vector<double> dvec(ivec.begin(), ivec.end());
    for (auto v : dvec) {
        cout << v << endl;
    }
    system("pause");
    return 0;
}