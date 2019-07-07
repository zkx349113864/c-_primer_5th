#include <iostream>
#include <string>
using std::cin;
using std::cout; using std::endl;
using std::string;

string addStr(string s, const string &prefix, const string &suffix)
{
    string ret(s);
    // auto beg = ret.begin();
    ret.insert(0, prefix);
    ret.append(suffix);
    return ret;
}

string addStr2(string s, const string &prefix, const string &suffix)
{
    string ret(s);
    ret.insert(0, prefix);
    ret.insert(ret.size(), suffix);
    return ret;
}

int main()
{
    string name{"mango"};
    string newName = addStr2(name, "Mr.", "Jr.");
    cout << newName << endl;
    system("pause");
    return 0;
}