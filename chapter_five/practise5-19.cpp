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
    do {
        string s1, s2;
        cout << "please input two string ";
        cin >> s1 >> s2;
        cout << s1.size() << s2.size() << endl;
        if (s1.size() < s2.size()) {
            cout << "the short string is " << s1 << "\n";
        } else if (s1.size() > s2.size()) {
            cout << "the short string is " << s2 << "\n";
        } else {
            cout << "the two string is same " << endl;
        }
        cout << "More ? please input yes or no ";
        cin >> str;
    } while (!str.empty() && str[0] != 'n');
    system("pause");
    return 0;
}