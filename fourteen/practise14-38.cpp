#include <iostream>
#include <fstream>
#include <sstream>
#include <algorithm>
#include <vector>
#include <string>
using std::string;
using std::vector;
using std::istringstream;
using std::ifstream;
using std::cin;
using std::cout; using std::endl;

class SizeComp {
public:
    SizeComp(size_t n): sz(n) {}
    bool operator()(const string &s) const { return s.size() == sz; }
private:
    size_t sz;
};

int main(int argc, char *argv[])
{
    vector<string> words;
    string word;

    ifstream in(argv[1]);
    string line;

    while (getline(in, line)) {
        istringstream sin(line);
        while (sin >> word) {
            if (ispunct(word[0]))
                word.erase(0, 1);
            if (ispunct(word[word.size() - 1]))
                word.pop_back();
            if (ispunct(word[word.size() - 1]))
                word.pop_back();
            words.push_back(word);
            cout << word << " ";
        }
        cout << endl;
    }

    cout << "text gain" << endl;

    for (size_t i = 1; i < 11; ++i) {
        int cnt = 0;
        auto wc = words.begin();
        while (wc != words.end()) {
            wc = find_if(wc, words.end(), SizeComp(i));
            if (wc != words.end()) {
                cout << *wc << " ";
                wc++;
                ++cnt;
            }
        }
        cout << endl;
        cout << "length " << i << " has " << cnt << endl;
    }
    system("pause");
    return 0;
}