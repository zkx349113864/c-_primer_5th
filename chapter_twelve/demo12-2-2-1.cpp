#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;
int main()
{
    size_t n = 10;
    string *const p = new string[n];
    string s;
    string *q = p;
    while (cin >> s && q != p + n)
    {
        *q++ = s;
    }
    const size_t size = q - p;
    // for (size_t i = 0; i < q->length(); ++i)
    for (size_t i = 0; i != size; ++i)
    {
        for(auto &s : *(q + i)) {
            cout << s << " ";
        }
        cout << endl;
    }
    delete[] p;
    system("pause");
    return 0;
}