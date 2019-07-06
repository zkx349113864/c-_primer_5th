#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
using std::cin;
using std::cout; using std::endl;
using std::cerr;
using std::string;
using std::vector;
using std::istream;
using std::ostream;
using std::ifstream;
using std::ofstream;
using std::istringstream;

int main()
{
    vector<string> svec;
    ifstream fs("write8-3.txt");
    string line, word;
    // 方法1
    /* while (fs >> word) {
        cout << word << endl;
    } */

    // 方法2
    while (getline(fs, line)) {
        istringstream sst(line);
        while (sst >> word) {
            cout << "word is " << word << endl;
        }
    }
    system("pause");
    return 0;
}