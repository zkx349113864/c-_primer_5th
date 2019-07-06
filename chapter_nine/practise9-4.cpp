#include <iostream>
#include <vector>
#include <string>
using std::cin;
using std::cout; using std::endl;
using std::string;
using std::vector;


int findElement (vector<int> list, int element)
{
    return 10;
}

int main()
{
    vector<int> ivec = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    auto beg = ivec.begin() + 2;
    auto end = ivec.end();
    string result = "not find";
    int val = 10;
    int findValue = 0;
    while (beg != end) {
        if (*beg == val) {
            result = "find";
            findValue = *beg;
            break;
        }
        ++beg;
    }
    if (findValue) {
        cout << "find the value is " << findValue << endl;
        cout << result << endl;
    } else {
        cout << "can't find the value " << endl;
    }
    system("pause");
    return 0;
}