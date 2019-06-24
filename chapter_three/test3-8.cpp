#include <iostream>
#include <string>
using std::cin;
using std::cout; using std::endl;
using std::string;
int main()
{
    string s("test range for");
    // string::size_type n = 0;
    /* while (n < s.size()) {
        s[n] = 'X';
        ++n;
    } */
    for (decltype(s.size()) n = 0; n < s.size(); ++n) {
        s[n] = 'X';
    }
    cout << s << endl;
    system("pause");
    return 0;
}