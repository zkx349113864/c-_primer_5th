#include <iostream>
#include <string>
#include <vector>
using std::cin;
using std::cout; using std::endl;
using std::string;
using std::vector;
int main()
{
    vector<int> ivec;
    vector<int> ivec2;
    int val;
    while (cin >> val) {
        ivec.push_back(val);
    }
    decltype(ivec.size()) sumLen = ivec.size();
    for (decltype(ivec.size()) i = 1; i <= ivec.size()/2; ++i ) {
        int temp = ivec[i-1] + ivec[sumLen - i];
        ivec2.push_back(temp);
    }
    for (auto i : ivec2) {
        cout << i << " ";
    }
    system("pause");
    return 0;
}