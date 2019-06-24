#include <iostream>
#include <string>
using std::string;
using std::cin;
using std::cout; using std::endl;
int main()
{
    string line;
    while (getline(cin, line)) {
        if (line.size() > 10) {
            cout << line << endl;
        }
    }
    system("pause");
    return 0;
}