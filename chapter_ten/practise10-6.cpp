#include <iostream>
#include <vector>
#include <algorithm>
using std::cin;
using std::cout;
using std::endl;
using std::vector;
// using std::fill_n;

int main()
{
    vector<int> ivec{1,2,3,4,5,6,1,2,3,4,53,3,2};
    // ivec.reserve(100);
    fill_n(ivec.begin(), 10, 10);
    for (auto &i : ivec) {
        cout << i << endl;
    }
    system("pause");
    return 0;
}