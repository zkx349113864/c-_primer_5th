#include <iostream>
#include <string>
#include <vector>
using std::cin;
using std::cout; using std::endl;
using std::string;
using std::vector;
int main()
{
    string rsp;
    do {
        cout << "please enter two value: ";
        int val1 = 0, val2 = 0;
        cin >> val1 >> val2;
        cout << "the sum of " << val1 << " and " << val2 << " is " << val1 + val2 << "\n"
             << "More ? Enter yes or no ";
        cin >> rsp;
    } while (!rsp.empty() && rsp[0] != 'n');
    system("pause");
    return 0;
}