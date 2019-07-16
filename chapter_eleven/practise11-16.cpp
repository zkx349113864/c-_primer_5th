#include <iostream>
#include <string>
#include <map>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::map;

int main()
{
    map<string, int> mymap = {{"mystr", 3}, {"mystr1", 4}, {"mystr2", 5}};

    auto it = mymap.begin();
    while(it != mymap.end())
    {
        if((*it).first == "mystr") {
            (*it).second = 100;
        }
        ++it;
    }
    for (auto &m : mymap)
    {
        cout << m.first << " " << m.second << endl;
    }
    system("pause");
    return 0;
}