#include <iostream>
#include <vector>
#include <list>
#include <string>
using std::string;
using std::list;
using std::vector;
using std::cin;
using std::cout; using std::endl;

int main()
{
    list<char *> charList{"hello", "my", "c++", "primer"};
    vector<string> svec;
    svec.assign(charList.begin(), charList.end());
    for (auto v : svec) {
        cout << v << endl;
    }
    system("pause");
    return 0;
}