#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using std::cin;
using std::cout; using std::endl;
using std::vector;

int main()
{
    vector<int> ivec{1, 2, 3, 4, 5};
    auto sum = accumulate(ivec.begin(), ivec.end(), 0);
    cout << sum << endl;
    system("pause");
    return 0;
}