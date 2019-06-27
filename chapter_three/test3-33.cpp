#include <iostream>
#include <string>
#include <vector>
using std::cin;
using std::cout; using std::endl;
using std::string;
using std::vector;
int main()
{
    unsigned scores[11];
    unsigned grade;
    while (cin >> grade) {
        if (grade <= 100) {
            ++scores[grade/10];
        }
    }
    for (auto s : scores) {
        cout << s << " ";
    }
    system("pause");
    return 0;
}