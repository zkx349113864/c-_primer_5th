#include <iostream>
#include <string>
using std::cin;
using std::cout; using std::endl;
using std::string;
int main()
{
    string s("test range for");
    for (auto &c : s) {
        c = 'X';
    }
    cout << s << endl;
    system("pause");
    return 0;
}