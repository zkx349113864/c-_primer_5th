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
    for (decltype(ivec.size()) i = 0; i != ivec.size(); i+=2) {
        int temp = ivec[i] + ivec[i + 1];
        ivec2.push_back(temp);
    }
    for (auto i : ivec2) {
        cout << i << " ";
    }
    system("pause");
    return 0;
}