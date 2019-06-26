#include <iostream>
#include <string>
#include <vector>
using std::cin;
using std::cout; using std::endl;
using std::string;
using std::vector;
int main()
{
    vector<int> ivec{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for (auto it = ivec.begin(); it != ivec.end(); ++it) {
        *it = *it * 2;
        cout << *it << endl;
    }
    system("pause");
    return 0;
}