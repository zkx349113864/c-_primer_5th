#include <iostream>
#include <vector>
using std::cin;
using std::cout; using std::endl;
using std::vector;

int main()
{
    vector<int> ivec;
    ivec[0] = 1; // out_of_range 异常
    cout << ivec[0] << endl;
    system("pause");
    return 0;
}