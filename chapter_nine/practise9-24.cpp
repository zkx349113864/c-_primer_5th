#include <iostream>
#include <vector>
#include <string>
using std::cin;
using std::cout; using std::endl;
using std::vector;
using std::string;

int main()
{
    vector<string> svec{"i'm", "sherlock", "i", "must", "control", "c++"};
    // vector<string> svec;
    string s1 = svec.at(0);
    string s2 = svec[0];
    string s3 = svec.front();
    string s4 = *svec.begin();
    cout << s1 << endl;
    cout << s2 << endl;
    cout << s3 << endl;
    cout << s4 << endl;
    system("pause");
    return 0;
}