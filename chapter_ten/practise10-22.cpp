#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>
using std::cin;
using std::cout; using std::endl;
using std::string;
using std::vector;
using std::placeholders::_1;

bool check_size(const string &s, string::size_type sz)
{
    return s.size() <= sz;
}

int main()
{
    vector<string> words = {"there", "is", "frog", "livings", "in", "the", "lake"};
    vector<string>::size_type sz = 6;
    int cnt1 = count_if(words.begin(), words.end(), [sz](const string &s){return s.size() > sz;});
    cout << "total numbers of words is: " << cnt1 << endl;

    auto check6 = bind(check_size, _1, sz);
    int cnt = count_if(words.begin(), words.end(), check6);
    cout << "total number of words is: " << cnt << endl;

    system("pause");
    return 0;
}