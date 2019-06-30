#include <iostream>
using std::cin;
using std::cout; using std::endl;

int abs(int val) {
    int rel;
    if (val < 0) {
        rel = -val; 
    } else {
        rel = val;
    }
    return rel;
}

int main()
{
    int absv = abs(-5);
    cout << "-5 abs value is " << absv << endl;
    system("pause");
    return 0;
}