#include <iostream>
#include <string>
using std::cin;
using std::cout; using std::endl;
using std::string;

string &str_rep(string &s, const string &oldVal, const string &newVal)
{
    for (string::size_type i = 0; i != s.size();  ++i)
    {
        if (s.substr(i, oldVal.size()) == oldVal)
        {
            s.erase(i, oldVal.size());
            s.insert(i, newVal);
        }
    }
    return s;
}

string &str_rep2(string &s, const string &oldVal, const string &newVal)
{
    for (string::size_type i = 0; i != s.size();  ++i)
    {
        if (s.substr(i, oldVal.size()) == oldVal)
        {
            s.replace(i, oldVal.size(), newVal);
        }
    }
    return s;
}

int main()
{
    string str{"dive straight thru is a foolish, tho courageous act."};
    auto newS = str_rep2(str, "thru", "through");
    cout << newS << endl;
    newS = str_rep2(str, "tho", "though");
    cout << newS << endl;
    system("pause");
    return 0;
}