#include <iostream>
using std::cin;
using std::cout; using std::endl;
int fact(int val) {
    int ret = 1;
    while (val > 1) {
        ret *= val--;
    }
    return ret;
}
int main()
{
    int j = fact(5);
    cout << "5 ! is " << j << endl;
    system("pause");
    return 0;
}

