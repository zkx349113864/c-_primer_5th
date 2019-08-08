#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <fstream>
#include <sstream>
using std::cin;
using std::cout; using std::endl;
using std::string;
using std::vector;
using std::ifstream;
using std::map;
using std::istringstream;
using std::runtime_error;

map<string, string> buildMap(ifstream &map_file)
{
    map<string, string> rules;
    string key;
    string value;
    while (map_file >> key && getline(map_file, value)) {
        if (value.size() > 1) {
            rules[key] = value.substr(1);
        } else {
            throw runtime_error("no rule for " + key);
        }
    }
    return rules;
}

const string &transform(const string &s, const map<string, string> &m)
{
    auto map_it = m.find(s);
    if (map_it != m.cend()) {
        return map_it->second;
    } else {
        return s;
    }
}

void word_transform(ifstream &map_file, ifstream &input)
{
    auto trans_map = buildMap(map_file);
    string text;
    while (getline(input, text)) {
        istringstream stream(text);
        string word;
        bool firstword = true;
        while (stream >> word) {
            if (firstword)
                firstword = false;
            else
                cout << " ";    // 在单词间打印一个空格
            cout << transform(word, trans_map);
        }
        cout << endl;
    }
}

int main()
{
    ifstream mf("rule.txt");
    ifstream ipt("test-text.txt");
    word_transform(mf, ipt);
    system("pause");
    return 0;
}