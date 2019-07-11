#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>
using std::cin;
using std::cout; using std::endl;
using std::string;
using std::vector;
using std::placeholders::_2;
using std::placeholders::_1;

bool check_size(const string &s, int sz)
{
    return sz > s.size();
}

int main()
{
    vector<int> vecs{1, 2, 3, 4, 5, 6, 7, 8, 9, 20};
    string str("asdfasdf");
    // 使用lambda实现
    auto ret = find_if(vecs.begin(), vecs.end(), [str](int i){return i > str.size();});
    cout << *ret << endl;


    // 使用bind实现
    auto check5 = bind(check_size, str, _1);
    auto wc = find_if(vecs.begin(), vecs.end(), check5);
    // auto wc = find_if(vecs.begin(), vecs.end(), bind(check_size, str, _2));
    cout << "First number which is bigger than s.size() is : " << endl;
    cout << *wc << endl;

    system("pause");
    return 0;
}