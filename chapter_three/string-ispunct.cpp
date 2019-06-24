#include <iostream>
#include <string>
using std::cin;
using std::cout; using std::endl;
using std::string;
int main()
{
    string s("Hello Worl1!!!");
    decltype(s.size()) punct_cnt = 0;
    for (auto c : s) {
        if (ispunct(c)) {
            ++punct_cnt;
        }
    }
    cout << punct_cnt << " punctuation characters in " << s << endl;
    system("pause");
    return 0;
}