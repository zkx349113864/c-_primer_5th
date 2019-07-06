#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
using std::cin;
using std::cout; using std::endl;
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

int main()
{
    string line, word;
    vector<PersonInfo> people;
    // 逐行从输入读取数据，直至cin遇到文件尾(或其他错误)
    istringstream record;
    while (getline(cin, line)) {
        PersonInfo info;
        // istringstream record(line);
        record.clear();
        record.str(line);
        record >> info.name;
        while (record >> word) {
            info.phones.push_back(word);
        }
        people.push_back(info);
    }
    // 将输入的打印
    for (auto &pi : people) {
        cout << pi.name << " ";
        for (auto p : pi.phones) {
            cout << p << " ";
        }
        cout << endl;
    }
    // 将输入的内容写入文件
    ofstream ws("write8-11.txt", ofstream::app);
    for (auto &rp : people) {
        ws << rp.name << " ";
        for (auto ph : rp.phones) {
            ws << ph << " ";
        }
        ws << endl;
    }
    system("pause");
    return 0;
}
