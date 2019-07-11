#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>
#include <list>
using std::cin;
using std::cout; using std::endl;
using std::string;
using std::vector;
using std::list;
using std::placeholders::_2;
using std::placeholders::_1;



int main()
{
    vector<int> ivec{1, 2, 3, 4, 5, 6, 6, 2, 3, 4, 12 ,234, 234, 1, 5};
    list<int> ilist;
    unique_copy(ivec.begin(), ivec.end(), back_inserter(ilist));
    for (auto &i : ilist)
    {
        cout << i << endl;
    }
    system("pause");
    return 0;
    
}