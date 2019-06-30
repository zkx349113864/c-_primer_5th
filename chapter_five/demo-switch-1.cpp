#include <iostream>
#include <string>
#include <vector>
using std::cin;
using std::cout; using std::endl;
using std::string;
using std::vector;
int main()
{
    unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0;
    string str;
    while (getline(cin, str)) {
        for (auto s : str) {
            s = tolower(s);
            switch (s) {
                case 'a':
                    ++aCnt;
                    break;
                case 'e':
                    ++eCnt;
                    break;
                case 'i':
                    ++iCnt;
                    break;
                case 'o':
                    ++oCnt;
                    break;
                case 'u':
                    ++uCnt;
                    break;
            }
        }
        cout << "Number of vowel a: \t" << aCnt << endl;
        cout << "Number of vowel e: \t" << eCnt << endl;
        cout << "Number of vowel i: \t" << iCnt << endl;
        cout << "Number of vowel o: \t" << oCnt << endl;
        cout << "Number of vowel u: \t" << uCnt << endl;
    }
    system("pause");
    return 0;
}