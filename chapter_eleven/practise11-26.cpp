#include <iostream>
#include <string>
#include <map>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::map;
using std::string;
using std::multimap;

int main()
{
    map<string, int> person_info = {{"Tom", 25}, {"Lucy", 24}, {"jerry", 26}};
    for(auto &m : person_info)
    {
        cout << "Name: " << m.first << " age: " << m.second << endl;
    }
    cout << endl;
    cout << "Please input a name to find: " << endl;
    string name;
    while(cin >> name)
    {
        if(person_info[name]) {
            cout << "age: " << person_info[name] << endl;
        } else {
            cout << "Not found" << person_info[name] << endl;
        }
    }

    system("pause");
    return 0;
}