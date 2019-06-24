#include <iostream>
#include <string>
using std::cin;
using std::cout; using std::endl;
using std::string;
int main()
{
    string s("Hello World!!!");
    for (auto &c : s) {
        c = toupper(c);
    }
    cout << s << endl;
    system("pause");
    return 0;
}