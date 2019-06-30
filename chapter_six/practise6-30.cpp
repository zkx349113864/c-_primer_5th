#include <iostream>
#include <string>
#include <vector>
using std::cin;
using std::cout; using std::endl;
using std::string;
using std::vector;


bool str_subrange(const string &str1, const string &str2)
{
    if (str1.size() == str2.size()) {
        return str1 == str2;
    }
    auto size = (str1.size() < str2.size()) ? str1.size() : str2.size();
    for (decltype(size) i = 0; i != size; ++i) {
        if (str1[i] != str2[i]) {
            return false;
        }
    }
}

int main()
{
    string s1("hello world");
    string s2("helslo world2");
    bool ret = str_subrange(s1, s2);
    system("pause");
    return 0;
}