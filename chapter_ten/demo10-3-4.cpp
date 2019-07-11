#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <functional>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;
using std::placeholders::_1;

bool check_size(const string &s, string::size_type sz)
{
    return s.size() >= sz;
}

void countNumbers(const vector<string> &words, string::size_type sz)
{
    auto wc = find_if(words.begin(), words.end(), bind(check_size, _1, sz));
    cout << *wc << endl;
}

int main()
{
    vector<string> svecList{"hesldf", "asdfasdfasdf", "asdfafasfasfaw", "eqrgfbda", "adfaefasfaweewaewf", "asdfa", "ass", "afafawfew"};
    countNumbers(svecList, 6);
    system("pause");
}