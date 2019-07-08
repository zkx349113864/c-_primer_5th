#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using std::cin;
using std::cout; using std::endl;
using std::vector;

int main()
{
    vector<double> dvec{1.0, 2, 3.5, 4, 5};
    auto sum = accumulate(dvec.begin(), dvec.end(), 0);
    cout << sum << endl;
    system("pause");
    return 0;
}