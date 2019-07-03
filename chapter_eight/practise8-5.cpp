#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
using std::cin;
using std::cout; using std::endl;
using std::ifstream;
using std::ofstream;
using std::istringstream;
using std::string;
using std::vector;

void readFileToVec(const string &filename, vector<string> &vec)
{
    string word, line;
    ifstream in(filename);
    while(!in.eof())
    {
        getline(in, line);
        istringstream sin(line);
        while (sin >> word)
        {
            vec.push_back(word);
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