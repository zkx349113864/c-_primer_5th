#include <iostream>
#include <string>
#include <vector>
#include <map>
using std::cin;
using std::cout; using std::endl;
using std::vector;
using std::string;
using std::map;

int main()
{
    map<string, vector<int>> vecmap{{"one", {1,2, 3, 4, 5}}, {"two", {2,3, 4, 5}}};
    auto ret = vecmap.find("one");
    cout << "key is " << ret->first << endl;
    cout << "value is ";
    for(auto &v : ret->second)
    {
        cout << v << " ";
    }
    system("pause");
    return 0;
}