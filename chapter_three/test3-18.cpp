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
    ivec.push_back(42);
    for (auto i : ivec) {
        cout << i << endl;
    }
    system("pause");
    return 0;
    vector<int> ivec2 = {42,42, 42};
    vector<int> ivec3(10, 42);
    vector<int> ivec4{42, 42};
}