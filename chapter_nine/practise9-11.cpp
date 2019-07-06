#include <iostream>
#include <vector>
using std::vector;

int main()
{
    vector<int> other_vec;
    vector<int> vec;
    vector<int> vec(10);
    vector<int> vec(10, 1);
    vector<int> vec{1, 2, 3, 4, 5};
    vector<int> vec(other_vec);
    vector<int> vec(other_vec.begin(), other_vec.end());
}