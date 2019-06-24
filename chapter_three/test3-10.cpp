#include <iostream>
#include <string>
using std::cin;
using std::cout; using std::endl;
using std::string;
int main()
{
    string s("sdf, sdf. sdf? ss!!ssd");
    string newStr;
    for (decltype(s.size()) n = 0; n != s.size(); ++n) {
        if (!ispunct(s[n])) {
            newStr += s[n];
        }
    }
    /* for (auto &c : s) {
        if (!ispunct(c)) {
            newStr += c;
        }
    } */
    cout << newStr << endl;
    system("pause");
    return 0;
}