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
    map<string, int> mlist{{"one", 1}, {"two", 2}, {"three", 3}};
    const map<string, int> cmlist{{"one", 1}, {"two", 2}, {"three", 3}};
    cout << mlist["four"] << endl;
    // cout << mlist.at("five") << endl;  // out_of_range异常
    for (auto &ml : mlist)
    {
        cout << ml.first << " value is " << ml.second << endl;
    }
    cout << endl;

    cout << cmlist.at("three") << endl;
    system("pause");
    return 0;
}