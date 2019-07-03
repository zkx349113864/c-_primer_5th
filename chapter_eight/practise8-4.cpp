#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using std::cin;
using std::cout; using std::endl;
using std::ifstream;
using std::ofstream;
using std::string;
using std::vector;

void readFileToVec(const string &filename, vector<string> &vec)
{
    ifstream ifs(filename);
    if(ifs) {
        string buf;
        while(getline(ifs, buf)) {
            vec.push_back(buf);
        }
    }
}

int main()
{
//    ifstream ips("test.txt");
    vector<string> svec;
    readFileToVec("test.txt", svec);
    for (const auto &str : svec)
        cout << str << endl;
    system("pause");
    return 0;
}