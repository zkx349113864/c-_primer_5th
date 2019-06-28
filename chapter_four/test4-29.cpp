#include <iostream>
#include <string>
#include <vector>
using std::cin;
using std::cout; using std::endl;
using std::string;
using std::vector;
int main()
{
    int x[10];
    int *p = x;
    cout << sizeof(x) / sizeof(*p) << endl;
    cout << sizeof(p) / sizeof(*p) << endl;
    system("pause");
    return 0;
}