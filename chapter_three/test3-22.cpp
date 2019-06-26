#include <iostream>
#include <string>
#include <vector>
using std::cin;
using std::cout; using std::endl;
using std::string;
using std::vector;
int main()
{
    string word;
    vector<string> svec;
    while (getline(cin, word)) {
        svec.push_back(word);
    }
    for (auto it = svec.begin(); it != svec.end() && !it->empty(); ++it) {
        for (auto &j : *it) {
            j = toupper(j);
        }
        cout << *it << " ";
    }
    system("pause");
    return 0;
}