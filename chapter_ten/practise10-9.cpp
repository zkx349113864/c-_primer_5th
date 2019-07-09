#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

void elimDups(vector<string> &words)
{
    sort(words.begin(), words.end());
    auto end_unique = unique(words.begin(), words.end());
    words.erase(end_unique, words.end());
}

bool isShorter(const string &s1, const string &s2)
{
    return s1.size() < s2.size();
}

int main()
{
    vector<string> svec{"hello", "asd", "world", "hi", "c++", "asd", "you", "me", "c++", "hi"};
    elimDups(svec);
    stable_sort(svec.begin(), svec.end(), isShorter);
    for(auto &s : svec) {
        cout << s << endl;
    }
    system("pause");
    return 0;
}