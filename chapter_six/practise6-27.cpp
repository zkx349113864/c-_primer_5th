#include <iostream>
#include <string>
#include <vector>
using std::cin;
using std::cout; using std::endl;
using std::string;
using std::vector;
using std::initializer_list;

int computedSum (initializer_list<int> sum) {
    int sumresult = 0;
    for (auto &v : sum) {
        sumresult += v;
    }
    return sumresult;
}

int main()
{
    int total = computedSum({1, 2, 3, 4, 5, 6, 7, 8, 9, 10});
    cout << "total sum is " << total << endl;
    system("pause");
    return 0;
}