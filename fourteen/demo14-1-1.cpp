#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::endl;
using std::cin;

int main()
{
    string s = "world";
    string t = s + "!";
    string u = "hi" + s;
    cout << s << endl;
    cout << t << endl;
    cout << u << endl;
    system("pause");
    return 0;
}