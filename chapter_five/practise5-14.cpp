#include <iostream>
#include <string>
#include <vector>
using std::cin;
using std::cout; using std::endl;
using std::string;
using std::vector;
int main()
{
    int count = 1;
    int maxCount = 1;
    string str;
    string maxCountStr;
    string firstStr;
    if (cin >> firstStr) {
        while (cin >> str) {
            if (firstStr == str) {
                ++count;
            } else {
                if (count > maxCount) {
                    maxCount = count;
                    maxCountStr = firstStr;
                }
                count = 1;
            }
            firstStr = str;
        }
    }
    if (count > maxCount) {
        maxCount = count;
        maxCountStr = firstStr;
    }
    count = 1;
    if (maxCount > count) {
        cout << "The words that appear the most times are " << maxCountStr << endl;
        cout << "the most word number is " << maxCount << endl;
    } else {
        cout << "the no word number bigger than others" << endl;
    }

    system("pause");
    return 0;
}