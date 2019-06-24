#include <iostream>
#include <string>
using std::cin;
using std::cout; using std::endl;
using std::string;
int main()
{
    string s("some string");

    // 转换一个字符
    /* if (!s.empty()) {
        s[0] = toupper(s[0]);
    } */

    // 转换一个单词
    for (decltype(s.size()) index = 0; index != s.size() && !isspace(s[index]); ++index) {
        s[index] = toupper(s[index]);
    }

    cout << s << endl;
    system("pause");
    return 0;
}