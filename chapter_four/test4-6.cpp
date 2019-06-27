#include <iostream>
#include <string>
using std::cin;
using std::cout; using std::endl;
int main()
{
    int numOne;
    cout << "Please input a number " << endl;
    while (cin >> numOne) {
        if (numOne % 2 == 0) {
            cout << "number " << numOne << " is even" << endl;
        } else if ((2 * numOne + 1) % 2 != 0) {
            cout << "number " << numOne << " is odd" << endl;
        }
    }
    system("pause");
    return 0;
}