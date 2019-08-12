#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string s;
    cin >> s;
    
    char *cp = new char[10];
    for(int i = 0; i != s.length(); ++i)
    {
        *(cp + i) = s[i];
    }

    for(int i = 0; i != s.length(); ++i)
    {
        cout << *(cp + i);
    }
    cout << endl;

    delete [] cp;
    system("pause");
    return 0;
}