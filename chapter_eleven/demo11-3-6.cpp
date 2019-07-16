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

void word_transform(ifstream &map_file, ifstream &input)
{
    auto trans_map = buildMap(map_file);
    string text;
}

int main()
{
    auto mf = ifstream("rule.txt");
    auto ipt = ifstream("test-text.txt");
    word_transform(mf, ipt);
    system("pause");
    return 0;
}