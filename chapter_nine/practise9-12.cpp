#include <iostream>
#include <vector>
using std::vector;
using std::cin;
using std::cout; using std::endl;

int main()
{
    vector<int> other_vec{1, 2, 3, 4, 5, 6, 7};
    vector<int> vec(other_vec.begin() + 1, other_vec.end());
    for (auto v : vec) {
        cout << v << endl;
    }
    system("pause");
    return 0;
}