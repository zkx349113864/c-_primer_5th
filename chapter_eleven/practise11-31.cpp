#include <iostream>
#include <string>
#include <vector>
#include <map>
using std::cin;
using std::cout; using std::endl;
using std::vector;
using std::string;
using std::map;
using std::multimap;

int main()
{
    // multimap<string, vector<string>> multimapvec{{"sherlock", {"one", "two", "three"}}, {"me", {"hhh", "yyy", "kkk"}}};
    multimap<string, string> multimapvec{{"sherlock", "ane"}, {"sherlock", "stwo"}, {"sherlock", "bthree"}, {"me", "hhh"}};
    auto ret = multimapvec.find("sherlock");
    cout << "book name is ";
    while (ret != multimapvec.end())
    {
        cout << ret->second << " ";
        ++ret;
    }
    system("pause");
    return 0;
}