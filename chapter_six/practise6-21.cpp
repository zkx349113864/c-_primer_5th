#include <iostream>
#include <string>
#include <vector>
using std::cin;
using std::cout; using std::endl;
using std::string;
using std::vector;

int compare(int i, int *ip) {
    int ret = 0;
    if (i > *ip) {
        ret = i;
    } else {
        ret = *ip;
    }
    return ret;
}

int main()
{
    int a = 23, b = 22;
    int rel = compare(a, &b);
    cout << "the bigger one is " << rel << endl;
    system("pause");
    return 0;
}