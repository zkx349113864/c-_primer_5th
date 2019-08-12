#include <iostream>
#include <string>
#include <new>
#include <string.h>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    char c1[7] = "hello";
    char c2[8] = "world!";
    char c3[15];
    strcat(c3, c1);
    strcat(c3, c2);
    char *cp1 = new char[15];
    for (int i = 0; i != 15; ++i)
    {
        *(cp1 + i)  = c3[i];
    }
    for(int i = 0; i != 15; ++i)
    {
        cout << c3[i];
    }
    cout << endl;
    delete [] cp1;



    string s1 = "hello";
    string s2 = "world";
    string s3 = "";
    s3 = s1 + s2;

    char *cp = new char[s3.length()];
    for (auto i = 0; i != s3.length(); ++i)
    {
        *(cp + i) = s3[i];
    }
    for(auto i = 0; i != s3.length(); ++i)
    {
        cout << *(cp + i);
    }
    cout << endl;
    delete []cp;
    system("pause");
    return 0;


}