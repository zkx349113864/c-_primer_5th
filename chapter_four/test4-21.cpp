#include <iostream>
#include <string>
#include <vector>
using std::cin;
using std::cout; using std::endl;
using std::string;
using std::vector;
int main()
{
    vector<int> ivec{1, 2, 3, 4, 5, 7, 8, 9};
    for (auto &i : ivec) {
        if (i % 2 != 0) {
            i = i * 2;
        }
        cout << i << endl;
    }
    system("pause");
    return 0;
}