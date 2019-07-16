#include <iostream>
#include <map>
#include <vector>
#include <string>
using std::cin;
using std::cout; using std::endl;
using std::string;
using std::map;
using std::vector;

int main()
{
    map<string, size_t> word_count;
    string word;
    while (cin >> word) {
        auto ret = word_count.insert({word, 1});
        if (!ret.second) {
            ++ret.first->second;
        }
    }
    for (auto &m : word_count) {
        cout << m.second << endl;
    }
    system("pause");
    return 0;
}