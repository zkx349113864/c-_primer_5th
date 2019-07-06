#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
using std::cin;
using std::cout; using std::endl;
using std::cerr;
using std::istream;
using std::ostream;
using std::ifstream;
using std::ofstream;
using std::istringstream;
using std::ostringstream;
using std::string;
using std::vector;

struct PersonInfo {
    string name;
    vector<string> phones;
};

bool valid(string tel)
{
    return true;
};

string format(string phone)
{
    return phone;
};

int main()
{
    string line, word;
    vector<PersonInfo> people;
    while (getline(cin, line)) {
        PersonInfo pinfo;
        istringstream is(line);
        is >> pinfo.name;
        while (is >> word) {
            pinfo.phones.push_back(word);
        }
        people.push_back(pinfo);
    }

    // ofstream os;
    for (const auto &entry : people) {      // 对people中每一项
        ostringstream formatted, badNums;   // 每个循环步创建的对象
        for (const auto &nums : entry.phones) {
            if (!valid(nums)) {
                badNums << " " << nums;       // 将数的字符串形式存入badNums
            } else {
                formatted << " " << format(nums);
            }
        }
        if (badNums.str().empty())
        {
            cout << entry.name << " " << formatted.str() << endl;
        } else {
            cerr << "input error: " << entry.name << " invalid number(s) " << badNums.str() << endl;
        }
    }

    system("pause");
    return 0;
}
