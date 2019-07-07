#include <iostream>
#include <vector>
#include <string>
#include <list>
#include <forward_list>
using std::cin;
using std::cout; using std::endl;
using std::vector;
using std::string;
using std::list;
using std::forward_list;

forward_list<string> &searchAndInsert (forward_list<string> &slist, const string &str1, const string &str2)
{
    auto lprev = slist.before_begin();
    auto beg = slist.begin();
    bool flag = false;
    while (beg != slist.end()) {
        if (*beg == str1) {
            beg = slist.insert_after(beg, str2);
            flag = true;
        } else {
            lprev = beg;
            ++beg;
        }
    }
    if (!flag) {
        slist.insert_after(lprev, str2);
    }
    return slist;
}

int main()
{

    forward_list<string> strList{"hello", "if", "you", "love", "me", "please", "fuck", "me"};
    string s1("hhh");
    string s2("fuck");
    auto changeList = searchAndInsert(strList, s1, s2);
    for (auto &cl : changeList) {
        cout << cl << endl;
    }
    system("pause");
    return 0;
}