#include <iostream>
#include <string>
#include "CountIndex.h"
using std::cin;
using std::cout; using std::endl;
using std::string;
/* string::size_type find_char(const string &s, char c, string::size_type &occurs)
{
    auto ret = s.size();
    occurs = 0;
    for (decltype(ret) i = 0; i != s.size(); ++i) {
        if (s[i] == c) {
            if (ret == s.size()) {
                ret = i;
            }
            ++occurs;
        }
    }
    return ret;
} */
int main()
{
    string str("aahsdfas asdflajsdf;jwklj;lxklandaklejfwklj;lwjasfj");
    string::size_type times = 0;
    string::size_type index;
    index = find_char(str, 'a', times);
    cout << "first appear index is " << index << endl;
    cout << "appear total counts is " << times << endl;
    system("pause");
    return 0;
}