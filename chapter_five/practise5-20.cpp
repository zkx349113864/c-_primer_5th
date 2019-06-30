#include <iostream>
#include <string>
#include <vector>
using std::cin;
using std::cout; using std::endl;
using std::string;
using std::vector;
int main()
{
    string str;
    string word, nextword;
    if (cin >> word) {
        while (cin >> nextword && nextword != "999") {
            if (word == nextword) {
                str = "same";
                break;
            } else {
                word = nextword;
                str = "not same";
            }
        }
    }
    cout << "the result is " << str << endl;
    system("pause");
    return 0;
}