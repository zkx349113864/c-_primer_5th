#include <iostream>
#include <vector>
#include <algorithm>
using std::cin;
using std::cout; using std::endl;
using std::vector;

int main()
{
    vector<int> ivec{1,2 ,3, 4, 5, 6, 2, 3, 2, 34, 2, 6345, 2};
    auto times = count(ivec.begin(), ivec.end(), 2);
    cout << times << endl;
    system("pause");
    return 0;
}