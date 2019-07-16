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
    // 定义一个map
    string fname = "", name = "";
    vector<string> vec={"Tom", "Jerry", "Lucy"};
    multimap<string, vector<string>> family = {{"Green", vec}, {"While", vec}};
    for (auto &m : family)
    {
        cout << "Memeber is" << " " << endl;
        for (auto it = m.second.begin(); it != m.second.end(); ++it) {
            cout << *it << "." << m.first << endl;
        }
        cout << endl;
    }

    // 插入新的map列表
    while (cin >> fname)
    {
        vector<string> svec;
        while (cin >> name && name != "END")
        {
            svec.push_back(name);
            family.insert({fname, svec});
        }
    }

    // 再次输出
    for(auto &m : family)
    {
        cout << "Member is : " << endl;
        for (auto it = m.second.begin(); it != m.second.end(); ++it)
        {
            cout << *it << "." << m.first << endl;
        }
        cout << endl;
    }

    system("pause");
    return 0;

}